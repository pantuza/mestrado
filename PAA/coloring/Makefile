#
# Makefile whith rules to compile the Maximum Flow 
# source files and documentation
#
# author: Gustavo Pantuza
# since: 13.06.2013
#


# Directories
BIN := bin
OBJ := obj
SRC := src
LIB := lib
DOC := doc


# Compilation options
DEBUG := -g0
OPTIM := -O3
INLIB := -I$(LIB)
WARNS := -Wall -lm
STAND := -std=c++0x
EXT := cpp

FLAGS := $(DEBUG) $(OPTIM) $(INLIB) $(WARNS) $(STAND)


# Compiler
CC := g++


# Executable
EXE := tp-final


# %.o file names
NAMES := $(notdir $(basename $(wildcard $(SRC)/*.$(EXT))))
OBJECTS :=$(patsubst %,$(OBJ)/%.o,$(NAMES))


# RULES
all: $(BIN)/$(EXE) help

$(BIN)/$(EXE): $(OBJECTS)
	$(CC) -o $@ $+ $(FLAGS)

$(OBJ)/%.o: $(SRC)/%.$(EXT)
	$(CC) -c $^ -o $@ $(FLAGS)

help:
	@echo -e "\nUsage: ./$(BIN)/$(EXE) <input-file> <output-file>\n"

clean:
	@echo -e "\nCleaning project...\n"
	@rm -vf $(OBJ)/*.o $(BIN)/$(EXE)
	@rm -vf out/*
	@rm -vf in/test*
	@rm -vf test/*.txt
	
	
