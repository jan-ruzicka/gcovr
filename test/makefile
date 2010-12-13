all: helloWorldC helloWorldCpp test1Cpp
helloWorldC: helloWorldC.c
	gcc -o helloWorldC -fprofile-arcs -ftest-coverage helloWorldC.c
helloWorldCpp: helloWorldCpp.cpp
	g++ -o helloWorldCpp -fprofile-arcs -ftest-coverage helloWorldCpp.cpp
test1Cpp: test1Cpp.cpp
	g++ -o test1Cpp -fprofile-arcs -ftest-coverage test1Cpp.cpp
clean:
	rm -f helloWorldC helloWorldC.gcda helloWorldC.gcno helloWorldC.c.gcov
	rm -f helloWorldCpp helloWorldCpp.gcda helloWorldCpp.gcno helloWorldCpp.cpp.gcov
	rm -f test1Cpp test1Cpp.gcda test1Cpp.gcno test1Cpp.cpp.gcov
	rm -f *.gcov
