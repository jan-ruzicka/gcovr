all: helloWorldC helloWorldCpp
helloWorldC: helloWorldC.c
	gcc -o helloWorldC -fprofile-arcs -ftest-coverage helloWorldC.c
helloWorldCpp: helloWorldCpp.cpp
	g++ -o helloWorldCpp -fprofile-arcs -ftest-coverage helloWorldCpp.cpp
clean:
	rm -f helloWorldC helloWorldC.gcda helloWorldC.gcno helloWorldC.c.gcov
	rm -f helloWorldCpp helloWorldCpp.gcda helloWorldCpp.gcno helloWorldCpp.cpp.gcov
	rm -f *.gcov
