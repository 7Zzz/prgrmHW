type 'a tree = Leaf | Node of ('a tree) * ('a tree) * 'a

let t = Node ((Node (Leaf, Leaf, 1)), Leaf, 3);;

let rec t1 n = if n > 0 then Node ((t1 (n-1)), Leaf, n) else Leaf;;

let rec is_bamboo t =
    match t with
        Leaf -> true
      | Node (Node (l,Leaf,_), Leaf, _) -> is_bamboo l
      | Node (Leaf, Node (Leaf,r,_), _) -> is_bamboo r
      | Node (Node (_,_,_), Node (_,_,_), _) -> false;;



Printf.printf "%B\n" (is_bamboo (t1 3))
    
