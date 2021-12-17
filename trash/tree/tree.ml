type tree = Tree of tree list

let s = "(()(()))"

let rec print_tree t =
   match t with
   | (Tree hd)::tl -> if hd = [] then print_string "*" else (print_string "("; print_tree hd; print_string ")"); print_tree tl
   | [] -> ();;

let rec parse n = 
   if n >= String.length(s) then ([], n) else 
        match s.[n] with
        |'(' -> let (tl1, n) = parse (n+1) in 
            if s.[n] = ')' then let (tl2, n) = parse (n+1) in 
                (Tree tl1::tl2, n)
            else failwith ""
        |_ -> ([], n)
        

let (t,_) = parse 0;;
print_tree t
