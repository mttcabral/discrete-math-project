# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Directories
SRC_DIR = src
BUILD_DIR = build

# Spirals
SQUARE_SPIRAL = espquadrada
TRIANGULAR_SPIRAL = esptriangular
MY_SPIRAL = minhaesp

TARGET = spirals

all: $(TARGET)

$(TARGET):
	-mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRC_DIR)/$(SQUARE_SPIRAL).c -o $(BUILD_DIR)/$(SQUARE_SPIRAL)
	$(CC) $(CFLAGS) $(SRC_DIR)/$(TRIANGULAR_SPIRAL).c -o $(BUILD_DIR)/$(TRIANGULAR_SPIRAL)
	$(CC) $(CFLAGS) $(SRC_DIR)/$(MY_SPIRAL).c -o $(BUILD_DIR)/$(MY_SPIRAL)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean