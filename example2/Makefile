#regla: para generar "ejecutable" uso "main.c", lo que está debajo es el comando (siempre con un tab)

main.o: main.c
	@echo "compilando main.c..."
	gcc -c main.c -o main.o

suma.o: suma.c
	gcc -c suma.c -o suma.o

programa: main.o suma.o
	@echo "linkeando programa..."
	gcc main.o suma.o -o programa

#regla clean, no tiene dependencias, borra el ejecutable
clean:
	rm programa main.o suma.o

#regla run, depende del ejecutable
run: programa
	./programa
