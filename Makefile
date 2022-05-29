all:
	gcc -o build/ardcu main.c
	sudo mv build/ardcu /usr/bin

