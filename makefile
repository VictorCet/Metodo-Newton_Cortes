bin/rectangulos.exe : src/main.cpp
	g++ -o bin/rectangulos src/main.cpp -Iinclude

run : bin/rectangulos.exe
	bin/rectangulos

clean : bin/rectangulos.exe
	rm -f bin/*.exe