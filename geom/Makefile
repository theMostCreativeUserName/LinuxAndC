# -*- MakeFile -*-  this is a comment

#!!! use TABS as indents NOT spaces !!!!!

# Format of the build instructions:
# target: dependencies  = usually every include of the files or everything the file depends on
# 	action
all: distance tip
	# order to build everything

distance: distance.o gd.o
	clang distance.o gd.o -o distance -l m

distance.o: distance.c gd.h
	clang -c distance.c

gd.o: gd.c gd.h
	clang -c gd.c

tip: tip.o gd.o
	clang tip.o gd.o -o tip

tip.o: tip.c gd.h
	clang -c tip.c

# removes everything except SourceFiles
clean:
	rm *.o tip distance
