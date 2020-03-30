 # -*- MakeFile -*-  this is a comment

#!!! use TABS as indents NOT spaces !!!!!

# Format of the build instructions:
# target: dependencies  = usually every include of the files or everything the file depends on
#<tab> action

# variables
# compiler
FC = clang
LINKER = $(FC) -o
OBJS = distance.o gd.o


all: distance tip
# order to build everything

# produces executable
distance: $(OBJS)
	$(LINKER) distance $(OBJS) -l m

# if compiling comes across any .o file
# it shall search for coresponding .c file
%.o : %.c
	$(FC) -c $<

# produces executable
tip: tip.o gd.o
	$(FC) tip.o gd.o -o tip

# removes everything except SourceFiles
clear:
	rm *.o tip distance

rebuild: clean all

# dependency chains:
# $< will point to the first file in the dependency chains
# $@ will point to the last file in the dependency chain

distance.o: distance.c gd.h
gd.o:		gd.c gd.h
tip.o: 		tip.c gd.h

# @echo : prints out to the terminal
