type color = Red | Black
type 'a tree = Leaf | Node of color * ('a tree) * ('a tree) * 'a 

let rec mem t n = 
    match t with 
       Leaf -> false
     | Node (c,l,r,x) -> if (n = x) then true else if (n > x) then mem r n else mem l n;;
  
let rotate t =
    match t with 


let rec treeCicle t = 
    match t with
        Node Black, Node Red, lson), )
      (*| BlackNode ((RedNode (RedNode dcare), r2, x2), r3, x3) -> BlackNode (RedNode dcare, RedNode (r2, r3), x2)*)

let rec add t n =
    match t with 
        Leaf -> Node(Red, Leaf, Leaf, n)
      | Node (с, l, r, x) -> if (n = x) then t 
                             else if (n < x) then treeCicle Node (Black, (add l n, r, n)) 
                             else treeCicle Node (Black, (l, add r n, n))
 
