
let readFile filename =
  let ch = open_in filename in
  let s = really_input_string ch (in_channel_length ch) in
  close_in ch;
  s;;


let stringIsEmpty s =
  if (s = "") then 1 else 0;;

let rec div i cow s1 =
  if (i = 0) then cow + (1-(stringIsEmpty s1)) else if (s1.[i-1] = ' ') then div (i-1) (cow+1) s1 else div (i-1) cow s1;;

let s = readFile "test1.txt";;

(* print_int (String.length s);;
print_string s; *)

print_int (div (String.length s) 0 s);;