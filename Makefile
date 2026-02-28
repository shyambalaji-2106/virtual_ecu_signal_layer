CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -Werror -pedantic -O0 -g
INCLUDES = -Iinclude
SRC = src/main.c src/signal_reader.c src/can_frame_builder.c src/watchdog.c

all:
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o ecu_sim

clean:
	rm -f ecu_sim