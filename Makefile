build:
	mkdir build
	g++ -c ./src/*.cpp -o build/game.o
	g++ build/game.o -o build/sfml-app -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -r build

play:
	./build/sfml-app