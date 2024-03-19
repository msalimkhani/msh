CC = gcc
Pname = msh
obj = obj/main.o obj/cd.o obj/console-tools.o obj/string.o
bin = bin/$(Pname)
obj/main.o:
	$(CC) -c src/main.c -o obj/main.o
obj/cd.o:
	$(CC) -c src/cd.c -o obj/cd.o
obj/string.o:
	$(CC) -c src/string.c -o obj/string.o
obj/console-tools.o:
	$(CC) -c src/console-tools.c -o obj/console-tools.o
build:clean $(obj) libs/msh.h
	$(CC) $(obj) -I libs -o $(bin)
clean:
	rm -f obj/*.o
install-linux:
	sudo cp bin/$(Pname) /usr/bin
	sudo cp bin/$(Pname) /usr/lib
	sudo cp bin/$(Pname) /usr/share
install-termux:
	cp bin/$(Pname) $(PREFIX)/bin
	cp bin/$(Pname) $(PREFIX)/lib
	cp bin/$(Pname) $(PREFIX)/share
