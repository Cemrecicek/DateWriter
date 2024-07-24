
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = time_writer
SRC = main.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
