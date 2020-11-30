
type color = Red | Black
type 'a tree = Leaf | Node of ('a tree) * ('a tree) * 'a * color

let rec mem t n = 
    match t with 
       Leaf -> false
     | Node (l,r,x,c) -> if (n = x) then true else if (n > x) then mem r n else mem l n;;
  
let rotate t =
    match t with 


let rec treeCicle t = 
    match t with
        Node (((Node lson, (RedNode rson, x), Red)), Black) -> RedNode (BlackNode lson, Node rson, b, x)
      | BlackNode ((RedNode (RedNode dcare), r2, x2), r3, x3) -> BlackNode (RedNode dcare, RedNode (r2, r3), x2)

let rec add t n =
    match t with 
        Leaf -> Node(Leaf, Leaf, n, Red)
      | Node (l, r, x, c) -> if (n = x) then t else if (n < x) then treeCicle (Node (((add l n),r,n),Black)) else treeCicle (Node ((l,(add r n),n),Black))
 
