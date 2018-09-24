# make  - to compile normal run
# make test - to compile for unit testing 

GTEST_DIR=${HOME}/googletest/googletest

COPTS=-Wall -funsigned-char  -fpermissive
LDFLAGS=

PROJ=string

######### Main targets ##########
main: main.o $(PROJ).o
	gcc main.o $(PROJ).o -o main $(LDFLAGS)

test: Gtest_main.o string_test_case.o $(PROJ)_test.o libgtest.a
	g++  $(LDFLAGS) -I $(GTEST_DIR)/include -pthread $(PROJ)_test.o string_test_case.o Gtest_main.o libgtest.a -o test

########## Normal ###########

$(PROJ).o: $(PROJ).c 
	gcc  -c $(PROJ).c

main.o: main.c $(PROJ).h
	gcc -c main.c

########## Unit test ########

Gtest_main.o: Gtest_main.c
	g++ -c -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) Gtest_main.c

$(PROJ)_test.o: $(PROJ).c 
	g++  -c $(PROJ).c -o $(PROJ)_test.o

string_test_case.o: string_test_case.c
	g++ -c -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) $(COPTS) string_test_case.c

########## Google Test framework ############
libgtest.a:
	g++ -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) -pthread -c $(GTEST_DIR)/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o

########## Clean ######################
clean:
	rm -f *.o

