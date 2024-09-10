bin: reader.c
		gcc -o reader reader.c

clean:
		rm -rf reader

install: bin
		sudo cp reader /bin