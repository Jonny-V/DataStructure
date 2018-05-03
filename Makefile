SOURCES = $(shell find . -name "*.cpp")
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))
DEPENDENCY = $(shell find . -name "*.d")
TARGETS = proc

CC = g++
CCFLAGS = -g -c -Wall -std=c++11 -MMD -MP -MF $*.d
FILEPATH = -I include
#LDFLAGS = 

.PHONY:all
all:$(TARGETS)
$(TARGETS):$(OBJECTS)
	@echo ld $@ ...
	$(CC) -o $@ $(LDFLAGS) $^
%.o:%.cpp
	@echo complie $@ source...
	$(CC) -o $@ $(CCFLAGS) $(FILEPATH) $<

include $(DEPENDENCY)

.PHONY:clean
clean:
	-rm -f $(OBJECTS) $(DEPENDENCY) $(TARGETS)

.PHONY:debug
debug:
	sudo cgdb proc