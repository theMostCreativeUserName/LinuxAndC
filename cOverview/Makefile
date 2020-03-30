all: calculator madlib  var

calculator: Calculator.c
	clang Calculator.c -o calculator

madlib: madLib.c
	clang madLib.c -o madlib

var: var.c
	clang var.c -o var

clear:
	rm *.o calculator madlib  var
