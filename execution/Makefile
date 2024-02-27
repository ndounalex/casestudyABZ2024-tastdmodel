TARGET = selftest
CC = g++
CFLAGS = -std=c++14 -g -w -O1

.PHONY: default all clean
default: $(TARGET)
all: default

HEADERS = *.h
OBJECTS = selftest.o

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< 

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

clean: 
	-del /F /Q *.o 2>nul
	-del /F /Q  readConfig.h*.h 2>nul
	-del /F /Q *.hpp 2>nul
	-del /F /Q *.cpp 2>nul
	-del /F /Q $(TARGET).exe 2>nul