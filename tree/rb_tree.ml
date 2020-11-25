type 'a tree = Leaf | BlackNode of ('a tree) * ('a tree) * 'a | RedNode of ('a tree) * ('a tree) * 'a

let rec mem t n = 
    match t with 
       Leaf -> false
     | RedNode (l,r,x) -> if (n = x) then true else if (n > x) then mem r n else mem l n
     | BlackNode (l,r,x) -> if (n = x) then true else if (n > x) then mem r n else mem l n;;

let rec add t n = 
    Leaf -> RedNode(Leaf, Leaf, n)
  | BlackNode (l, r, x) -> if (n = x) then t else if (n < x) then RedNode ((add l n), r, x) else RedNode (l, (add r n), x)
  | RedNode ->
