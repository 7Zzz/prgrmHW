type 'a tree = Leaf | Node of 'a tree * 'a tree * 'a

let q = Node ((Node (Leaf, Leaf, 1)), Node (Leaf, Leaf, 3), 2);;

(*match q with Node _ -> print_string "n" | Leaf -> print_string "l";;*)
let rec find_min t n =
    match t with 
        Leaf -> n
      | Node (l,r,x) -> find_min l x;;
let rec find_max t n =
    match t with 
        Leaf -> n
      | Node (l,r,x) -> find_max r x;;

let rec verify t (a,b) = 
    match t with
        Leaf -> true
      | Node (l,r,x) -> if (x < a || b < x) then false else (verify l (a, x) && verify r (x, b));;

let rec mem t n = 
    match t with
         Leaf -> false
       | Node (l,r,x) -> if (n = x) then true else if (n > x) then mem r n else mem l n;;


let rec add t n = 
    match t with
      Leaf -> Node (Leaf, Leaf, n)
    | Node (l,r,x) -> if (n = x) then t else if n < x then Node((add l n), r ,x) else Node(l, (add r n),x);;

let rec findRight t =
  match t with 
    Leaf -> None
  | Node (_, r, x) -> if (r = Leaf) then Some x else findRight r;;

let rec delete t n = 
  let rec find t = 
    match t with
      Leaf -> Leaf
    | Node (l,r,x) -> if (n = x) then let asd = findRight l in match asd with 
        None -> r
      | Some x -> Node (delete l x, r, x) 
    else if (n < x) then Node (find l, r, x) else Node (l, find r, x) in 
  find t ;; 

let rec string_of_tree t = 
    match t with
        Leaf -> "L"
      | Node (l,r,x) -> "("^(string_of_tree l)^(string_of_tree r)^(string_of_int x)^")";;


print_string (string_of_tree q ^"\n");;
print_string (string_of_tree (delete q 2));;
let int_of_bool b = if b then 1 else 0;;
Printf.printf "%d" int_of_bool(verify q (find_min q 10, find_max q 0));;


