default:
	gcc -Wall -o prog main.c input.c mytime.c
debug:
	gcc -Wall -o prog -g main.c input.c mytime.c
clean:
	rm -f prog
