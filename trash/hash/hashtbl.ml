type ('a,'b) t = {
	hashfunc: ('a -> int -> int);
	mutable data: ('a*'b) list array;	
};;

let iter hashtable f = 
	Array.iter (fun l -> List.iter f l) hashtable.data;;

let fold hashtable f s =     
	Array.fold_left (fun a l -> (List.fold_left f a l)) s hashtable.data;;

let create n hashf = 
    hashfunc = hashf; data = Array.make n [];;
    
let add hashtable a b =
	let hash = hashtable.hashfunc a (Array.length hashtable.data) in
	let l = hashtable.data.(hash) in 
	let rec f l = 
		match l with
		|[] -> ([(a,b)],None)
		|(k,v)::tl -> if k = a then ((a,b)::tl,Some v) else let (tl,r) = f tl in ((k,v)::tl,r) in
	
	let (nl,r) = f l in
	hashtable.data.(hash) <- nl;
	r;; 
	
let mem hashtable a = 
	let hash = hashtable.hashfunc a (Array.length hashtable.data) in
	List.exists (fun (k,_) -> k = a) (hashtable.data.(hash));;
	
let find hashtable a = 
	let hash = hashtable.hashfunc a (Array.length hashtable.data) in
	let r = List.find_opt (fun (k,_) -> k = a) (hashtable.data.(hash)) in
	match r with
	|None -> None
    |Some (_,b) -> Some b;;
    