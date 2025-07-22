CC=gcc
CFLAGS=-Iinclude -Wall -g

# Find all .c files in the src directory
SRCS := $(wildcard src/*.c)
# Create a list of corresponding object files in the bin directory
OBJS := $(SRCS:src/%.c=bin/%.o)

TARGET=bin/myclox

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

bin/%.o: src/%.c
	@mkdir -p bin
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
