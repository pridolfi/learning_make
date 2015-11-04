#regla: para generar "ejecutable" uso "main.c", lo que está debajo es el comando (siempre con un tab)

main.o: main.c
	@echo "compilando main.c..."
	gcc -c main.c -o main.o

programa: main.o
	@echo "linkeando programa..."
	gcc main.o -o programa

#regla clean, no tiene dependencias, borra el ejecutable
clean:
	rm programa main.o

run: programa
	./programa
