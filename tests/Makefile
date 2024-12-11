SOURCE_DIR = ..
BUILD_DIR = ../build
CC = g++
LDFLAGS = -lgtest -lgtest_main -lpthread
CFLAGS = -I. -I$(SOURCE_DIR) -g -fPIC -fprofile-arcs -ftest-coverage -Wall -Wextra -o $(BUILD_DIR)/utbuild
SOURCES = ArrayList.cpp /
		DoublyLinkedList.cpp
TEST_SOURCES = ArrayListTest.cpp /
		DoublyLinkedListTest.cpp
run:
	mkdir $(BUILD_DIR)
	$(CC) $(SOURCES) $(TEST_SOURCES) $(LDFLAGS) $(CFLAGS)
	$(BUILD_DIR)/utbuild
.PHONY: clean
clean:
	rm -f $(BUILD_DIR)/*.o 