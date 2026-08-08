CC = gcc
CFLAGS = -Iinclude

TARGET = main.exe

SRC = src/main.c \
      src/inventario.c \
      src/recursos.c \
      src/menus.c \
      src/entrada.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)