# compilator
CC = gcc
OUT1=infinite_product
OUT2=codeinvim
OUT3=gigel_and_the_checkboard
OUT4=nomogram  # Numele corect al executabilului
# flaguri pentru warninguri
CFLAGS = -Wall -Wextra -std=c99

# fisiere obiect create la build
OBJ1 = infinite_product.c
OBJ2 = codeinvim.c
OBJ3 = gigel_and_the_checkboard.c
OBJ4 = nomogram.c  # Numele corect al fișierului sursă

infinite_product: $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ1) -lm -o $(OUT1)

codeinvim: $(OBJ2)
	$(CC) $(CFLAGS) $(OBJ2) -lm -o $(OUT2)

gigel_and_the_checkboard: $(OBJ3)
	$(CC) $(CFLAGS) $(OBJ3) -lm -o $(OUT3)

nomogram: $(OBJ4)  # Numele corect al țintei
	$(CC) $(CFLAGS) $(OBJ4) -o $(OUT4)

build: $(OUT1) $(OUT2) $(OUT3) $(OUT4)

#clean
pack:
	zip -FSr 325CA_EnacheAlbertina_Tema1.zip README Makefile *.c *.h
clean:
	rm -f *.o ./$(OUT1) ./$(OUT2) ./$(OUT3) ./$(OUT4)
.PHONY: pack clean
