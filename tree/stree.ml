type tree = Leaf | Node of 'a tree * 'a tree * 'a
type stree = Leaf | Node of 'a stree 'a stree *'a * int * int

let rec tree_to_stree t = 
   match t with 
        Leaf -> Leaf
      | Node (l,r,x) -> Node (l,r,x,k,sum)

