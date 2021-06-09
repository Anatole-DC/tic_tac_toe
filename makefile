CC = g++ 															# Compiler
CFLAGS = -Wall -O 													# Compiler options
LDFLAGS = 															# Compiler links edition

MODULES = .															# All the modules to compile

EXEC = executable 												    # Executables name
SRC = $(foreach sdir,$(MODULES), $(wildcard $(sdir)/*.cpp))			# Fetch all the *.cpp files
OBJ = $(SRC:.cpp=.o)												# Create all objects files


all: $(EXEC)														# Executable link

$(EXEC): $(OBJ)														# Executable dependances
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp															# Objects dependances
	$(CC) -o $@ -c $^ $(CFLAGS)

# Clean project

clean:
	rm -f $(OBJ)
	rm -f $(EXEC)
	rm -f *.stackdump

run:
	make clean
	make all
	./$(EXEC)