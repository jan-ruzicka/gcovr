all: helloWorldC helloWorldCpp
helloWorldC: helloWorldC.c
	gcc -o helloWorldC -fprofile-arcs -ftest-coverage helloWorldC.c
helloWorldCpp: helloWorldCpp.cpp
	g++ -o helloWorldCpp -fprofile-arcs -ftest-coverage helloWorldCpp.cpp
clean:
	rm -f helloWorld helloWorld.gcda helloWorld.gcno
