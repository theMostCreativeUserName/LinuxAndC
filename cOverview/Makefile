all: calculator madlib  var

calculator: Calculator.c
	clang Calculator.c -o calc

madlib: madLib.c
	clang madLib.c -o madlib

var: var.c
	clang var.c -o var

clear:
	rm *.o calc madlib  var
