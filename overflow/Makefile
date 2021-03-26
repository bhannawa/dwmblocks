.POSIX:

PREFIX = /usr/local
CC = gcc

overflow: overflow.o
	$(CC) overflow.o -lX11 -o overflow
overflow.o: overflow.c config.h
	$(CC) -c overflow.c
clean:
	rm -f *.o *.gch overflow
install: overflow
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f overflow $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/overflow
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/overflow

.PHONY: clean install uninstall
