type 'a tree = Leaf | Node of ('a tree) * ('a tree) * 'a

let q = Node ((Node (Leaf, Leaf, 1)), Node (Leaf, Leaf, 3), 2);;

(*match q with Node _ -> print_string "n" | Leaf -> print_string "l";;*)

let rec mem t n = 
    match t with
         Leaf -> false
       | Node (l,r,x) -> if (n = x) then true else if (n > x) then mem r n else mem l n;;


let rec add t n = 
    match t with
    |Leaf -> Node (Leaf, Leaf, n)
    |Node (l,r,x) -> if (n = x) then t else if n < x then Node((add l n), r ,x) else Node(l, (add r n),x);;

add q 8;;
Printff.printf "%B\n" (add q 54)
