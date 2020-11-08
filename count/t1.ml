open List;;

let rec prevalent_word l = 
	let rec (#) str1 str2 =                                    
        if String.length str1 = 0 || String.length str2 = 0 then 
            false 
        else if str1.[0] = str2.[0] then 
            (String.sub str1 1 (String.length str1 - 1)) # ((String.sub str2 1 (String.length str2 - 1)))
        else str1.[0] < str2.[0]   

let rec merge l1 l2 = 
    match (l1,l2) with
    |([],_) -> l2
    |(_,[]) -> l1
    |((str1,n1)::tl1,(str2,n2)::tl2) -> if str1 = str2 then (str1,n1+n2)::(merge tl1 tl2) else if str1 # str2 then (str1,n1)::(merge tl1 l2) else (str2,n2)::(merge l1 tl2) in

let rec f l = 
    match l with
    |[] -> []
    |i::[] -> [i]
    |i::j::tl -> f((merge i j)::(f tl)) in 

    match l with
    |[] -> "empty"
    |_ -> hd (List.sort (fun (a,n) (b,m) -> if n = m then a # b else n > m) (flatten (f (map (fun x -> [(x,1)]) l))));;

let (s,n) = prevalent_word ["abab";"b";"cafaf";"abab";"fl";"cafaf";"cafaf";"b"];;    
Printf.printf "%n: %s" n s;; 