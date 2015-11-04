#variables
SRC_FILES = main.c suma.c
OBJ_FILES = main.o suma.o
EXE = programa

#regla pattern
# para generar un archivo .o se busca el archivo con el mismo nombre que termine
# en .c
# la variable automática $< referencia a la dependencia
# la variable automática $@ referencia la regla o el resultado
%.o: %.c
	@echo "compilando $<..."
	gcc -c $< -o $@

$(EXE): $(OBJ_FILES)
	@echo "linkeando $(EXE)..."
	gcc $(OBJ_FILES) -o $(EXE)

#regla clean, no tiene dependencias, borra el ejecutable
clean:
	rm -f $(EXE) $(OBJ_FILES)

#regla run, depende del ejecutable
run: $(EXE)
	./$(EXE)
