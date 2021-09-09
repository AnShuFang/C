procbar:main.c ProcBar.c
	gcc ProcBar.c main.c -o procbar
.PHONY:clean
clean:
	rm -f procbar
