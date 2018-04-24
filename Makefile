SOURCES = $(shell find ./src -name "*.cpp")
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))
MAINS = main.cpp

CC = g++
CCFLAGS = -g -c -Wall -std=c++11 -I include
CCFLAG = -g -Wall -std=c++11 -I include
LD = ld

all:$(OBJECTS) proc
.cpp.o:
	@echo complie CPP source $< ...
	$(CC) $(CCFLAGS) $< -o $@
proc:$(SOURCES)
	@echo complie $(MAINS) source...
	$(CC) $(CCFLAG) -o proc $(SOURCES) $(MAINS) 

.PHONY:clean
clean:
	rm -f $(OBJECTS) $(MAINSOBJ) proc

.PHONY:debug
debug:
	sudo cgdb proc