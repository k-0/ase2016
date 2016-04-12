

all: hw

hw: hw.o

run: hw
	./hw

test: hw
	./hw >result.txt
	od -x result.txt
	cmp result.txt reference.txt
  
