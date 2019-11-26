CFLAGS= -Wall -pedantic -std=c11 -I. -g
OFILES= list.o

%.o:	%.c %.h
		gcc $(CFLAGS) -c $<

all: 	$(OFILES)
		ar cr $(OFILES)

clean:
		rm -f *.o
