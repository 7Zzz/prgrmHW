type 'a tree = Leaf | Node of ('a tree) * ('a tree) * 'a

let q = Node ((Node (Leaf, Leaf, 1)), Node (Leaf, Leaf, 3), 2);;

match q with Node _ -> print_string "n" | Leaf -> print_string "l";;
