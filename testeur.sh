#!/bin/sh
c=1
while [ $c -le 15 ]
do
	echo "c = $c"
	./main $c > my_pyra
	./correction_sast $c > output
	diff -U 3 my_pyra output
	(( c++ ))
done
