

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -g

# Target executable
TARGET = DScontrols

# Source files
SRCS = DScontrols.cpp Stack.cpp Queue.cpp LinkedList.cpp LinkedQueue.cpp treeNode.cpp treeNode.cpp node.cpp LinkedStack.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
%.o: %.cpp Stack.h Queue.h LinkedList.h LinkedStack.h LinkedQueue.h treeNode.h node.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean