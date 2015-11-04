#funciones de make
#https://www.gnu.org/software/make/manual/html_node/Text-Functions.html

#variables
SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(SRC_FILES:.c=.o)
DEP_FILES = $(SRC_FILES:.c=.d)

EXE = programa

#regla pattern
# para generar un archivo .o se busca el archivo con el mismo nombre que termine
# en .c
# la variable automática $< referencia a la dependencia
# la variable automática $@ referencia la regla o el resultado

%.o: %.c
	@echo "compilando $<..."
	gcc -c $< -o $@

%.d: %.c
	@echo "generando dependencias de $<..."
	gcc -MM $< > $@

-include $(DEP_FILES)

$(EXE): $(OBJ_FILES)
	@echo "linkeando $(EXE)..."
	gcc $(OBJ_FILES) -o $(EXE)

#regla clean, no tiene dependencias, borra el ejecutable
clean:
	rm -f $(EXE) $(OBJ_FILES) $(DEP_FILES)

#regla run, depende del ejecutable
run: $(EXE)
	./$(EXE)

#regla info para ver variables
info:
	@echo SRC_FILES: $(SRC_FILES)
	@echo OBJ_FILES: $(OBJ_FILES)
	@echo DEP_FILES: $(DEP_FILES)
