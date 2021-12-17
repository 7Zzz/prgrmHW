let a = read_int();;
let b = read_int();;

let rec f a b =
	let rec g b a = 
		if (a = 1) then false else
			if (b >= a) then true else if (a mod b = 0) then false else g (b + 1) a in

	let rec p a = 
		if (a > b) then 0 else if g 2 a then 1 + (p(a + 1)) else p(a + 1) in
	p a;;

print_float ((float_of_int(f a b))/.(float_of_int(b - a + 1)));;