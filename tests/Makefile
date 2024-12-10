SOURCE_DIR = ..
BUILD_DIR = ../build 
CC = g++
LDFLAGS = -lgtest -lgtest_main -lpthread
CFLAGS = -I. -I$(SOURCE_DIR) -g -fPIC -fprofile-arcs -ftest-coverage -Wall -Wextra

SOURCES = ArrayList.cpp /
		DoublyLinkedList.cpp

.PHONY: clean
clean:
	rm -f $(BUILD_DIR)/*.o 