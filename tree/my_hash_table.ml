type ('a, 'b) t = my_hash_table 

let create ('a -> int) t = 
        let rec hf i = 'a.(i) + hf i-1;;
        let arr = Array.make t [];;
        arr.(hf) <- 'a;;
        my_hash_table

