type 'a tree = Leaf | Node of 'a tree * 'a tree * 'a * int
type 'a stree = SLeaf | SNode of 'a stree * 'a stree * 'a * int * int


let t = Node(Node(Leaf,Leaf,1,2),Node(Leaf, Leaf, 3, 123), 2, 33);;


let rec sum t = match t with
    | Node (l,r,k,x) -> sum l + sum r + x
    | Leaf -> 0;;

let rec tree_to_stree t = 
   match t with 
        Leaf -> SLeaf
      | Node (l,r,k,x) -> SNode (tree_to_stree l, tree_to_stree r, k, x, (sum l + sum r + x));;

tree_to_stree t;;