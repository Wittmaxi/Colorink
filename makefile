compile: 
	-mkdir build
	g++ -c ./src/colorink.cpp -o ./build/colorink.o -O3
	ar rvs ./build/libINK.a ./build/*.o
install: compile
	sudo cp ./build/libINK.a /usr/local/lib/libINK.a
	sudo cp ./src/colorink.hpp /usr/local/include/colorink.hpp

uninstall:
	sudo rm -r /usr/local/lib/libINK.a
	sudo cp /usr/local/include/colorink.hpp