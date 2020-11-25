type 'a tree = Leaf | Node of ('a tree) * ('a tree) * 'a

let t = Node ((Node (Leaf, Leaf, 1)), Leaf, 3);;



let rec is_bamboo t =
    match t with
        Leaf -> true
      | Node (l, Leaf, _) -> is_bamboo l
      | Node (Leaf, r, _) -> is_bamboo r
      | _ -> false;;


let rec rbamboo n = if n = 0 then Leaf else Node (Leaf, rbamboo (n-1), n-1);;


Printf.printf "%B\n" (is_bamboo (rbamboo 5))
    
