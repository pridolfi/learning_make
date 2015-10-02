APP := $(notdir $(shell pwd))
SRC_FILES := $(wildcard *.c)
OBJ_FILES := $(SRC_FILES:.c=.o)

$(APP): $(OBJ_FILES)
	gcc $(OBJ_FILES) -o $(APP)

-include $(OBJ_FILES:.o=.d)

%.o: %.c
	gcc -c $< -o $@ -I .
	gcc -MM $< > $(@:.o=.d)

info:
	@echo APP: $(APP)
	@echo SRC_FILES: $(SRC_FILES)
	@echo OBJ_FILES: $(OBJ_FILES)

clean:
	rm -rf $(APP) $(OBJ_FILES) $(OBJ_FILES:.o=.d)

run:
	./$(APP)
