#funciones de make
#https://www.gnu.org/software/make/manual/html_node/Text-Functions.html

#variables
SRC_PATH = ./src
INC_PATH = ./inc
OUT_PATH = ./out
OBJ_PATH = $(OUT_PATH)/obj

SRC_FILES = $(wildcard $(SRC_PATH)/*.c)
OBJ_FILES = $(subst $(SRC_PATH),$(OBJ_PATH),$(SRC_FILES:.c=.o))
OBJS = $(notdir $(OBJ_FILES))
DEP_FILES = $(subst $(SRC_PATH),$(OBJ_PATH),$(SRC_FILES:.c=.d))

EXE = $(notdir $(shell pwd))

# para que make busque en otros directorios ademas del raíz
vpath %.o $(OBJ_PATH)
vpath %.c $(SRC_PATH)

#regla pattern
# para generar un archivo .o se busca el archivo con el mismo nombre que termine
# en .c
# la variable automática $< referencia a la dependencia
# la variable automática $@ referencia la regla o el resultado
%.o: %.c
	@echo "compilando $<..."
	gcc -I $(INC_PATH) -c $< -o $(OBJ_PATH)/$@
	@echo "generando dependencias de $<..."
	gcc -I $(INC_PATH) -MM $< > $(OBJ_PATH)/$(@:.o=.d)

-include $(DEP_FILES)

$(EXE): $(OBJS)
	@echo "linkeando $(EXE)..."
	gcc $(OBJ_FILES) -o $(OUT_PATH)/$(EXE)

#regla clean, no tiene dependencias, borra el ejecutable
clean:
	rm -f $(EXE) $(OBJ_FILES) $(DEP_FILES)

#regla run, depende del ejecutable
run: $(EXE)
	 $(OUT_PATH)/$(EXE)

#regla info para ver variables
info:
	@echo EXE: $(EXE)
	@echo SRC_FILES: $(SRC_FILES)
	@echo OBJ_FILES: $(OBJ_FILES)
	@echo OBJS: $(OBJS)
	@echo DEP_FILES: $(DEP_FILES)
