type 'a tree = Leaf | Node of ('a tree) * ('a tree) * 'a

let t = Node ((Node (Leaf, Leaf, 1)), Leaf, 3);;

let rec is_bamboo t =
    match t with
        Leaf -> true
      | Node (l, Leaf, _) -> is_bamboo l
      | Node (Leaf, r, _) -> is_bamboo r
      | _ -> false;;


let rec rbamboo n = if n = 0 then Leaf else Node (Leaf, rbamboo (n-1), n-1);;
let rec lbamboo n = if n = 0 then Leaf else Node (lbamboo (n-1),Leaf, n-1);;

let is_balanced t = 
	let rec f t = 
		match t with
		  Leaf -> (0,true)
		| Node(l,r,_) -> let (dl,bl) = f l and (dr,br) = f r in if (dr = dl || dr-dl = 1 || dl - dr = 1) then (1 + max dl dr, true) else (1 + max dl dr, false) in
	
	let (_,b) = f t in b;;

  

Printf.printf "%B\n" (is_balanced (rbamboo 2))
    
