# Define compiler
CC=gcc

# Define source files and target
OBJS=quickSort.o
TARGET=quickSort 


$(TARGET):$(OBJS)
	$(CC) -o $@ $^


%.o:%.c
	$(CC) -c -o $@ $^

.PHONY:clean
clean:
	rm -f $(OBJS) $(TARGET)
