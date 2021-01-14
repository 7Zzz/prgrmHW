let p1 = read_int() ;;
let p2 = read_int() ;;

let make_hash s =
    let rec hf i =
      if (i = 0) then int_of_char s.[0] else ((hf(i - 1)) * p1 + (int_of_char (s.[i]))) mod p2 in hf(String.length s - 1) ;;

let rec add a e = 
  if (List.exists (fun u -> u = e) a.(make_hash e)) then a else (a.(make_hash e) <- (a.(make_hash e) @ [e]); a) ;;

let get a e = 
  if (List.exists (fun u -> u = e) a.(make_hash e)) then true else false ;;


make_hash "asdasdasdas";; 