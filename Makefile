all:
	g++ -I src/include -L src/lib/SDL2 -o test main.cpp -lmingw32 -lSDL2main -lSDL2