type 'a tree = Leaf | Node of 'a tree * 'a tree * 'a * int
type 'a stree = SLeaf | SNode of 'a stree * 'a stree * 'a * int * int


let t = Node(Node(Leaf,Leaf,1,2),Node(Leaf, Leaf, 3, 123), 2, 33);;

let rec tree_to_stree t = 
   match t with 
        Leaf -> SLeaf
      | Node (Node(l1,r1,k1,x1),Node(l2,r2,k2,x2),k,x) -> SNode (tree_to_stree (Node(l1,r1,k1,x1)), tree_to_stree (Node(l2,r2,k2,x2)), k, x,(x+x1+x2))
      | Node (Leaf,Node(l2,r2,k2,x2),k,x) -> SNode (SLeaf, tree_to_stree (Node(l2,r2,k2,x2)), k, x, (x + x2))
      | Node (Node(l1,r1,k1,x1), Leaf,k,x) -> SNode (tree_to_stree (Node(l1,r1,k1,x1)),SLeaf, k, x, (x + x1))
      | Node (Leaf, Leaf,k,x) -> SNode (SLeaf,SLeaf, k, x, x);;


let rec find st key = 
    match st with 
        SLeaf -> SLeaf
      | SNode (l,r,k,x,s) if (k = key) then s else if (k < key) then st l key else st r key;;

let rec sum st n1 n2 = 
    match st with
        SLeaf -> SLeaf
      | SNode (l,r,k,x,s) -> 


tree_to_stree t;;

