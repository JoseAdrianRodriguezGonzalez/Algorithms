CC= gcc
OBJ=operations.o

TARGET=hola
LIB=liboperations.a
MAIN=main.c
all:
$(OBJ): $(SOURCE) operations.h
	$(CC) -c $(SOURCE) -o $(OBJ)
	
liboperation.a: $(OBJ)
	ar rcs $(LIB) $(OBJ)
operations.o: operations.c
	$(CC) $ -c operations.c -o operations.o
clean:
	rm -f *.o $(liboperations.a)
$(CC) $(MAIN) -L -loperations -o $(TARGET)