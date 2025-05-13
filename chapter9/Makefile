# Nombre del ejecutable
TARGET = main

# Archivos fuente
SRC = main.cpp DinerMenu.cpp MenuItem.cpp PancakeHouseMenu.cpp PancakeHouseIterator.cpp DinerMenuIterator.cpp Waitress.cpp

# Archivos objeto
OBJ = $(SRC:.cpp=.o)

# Compilador y banderas
CC = g++
CFLAGS = -Wall -std=c++17

# Regla para compilar todo
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Regla para compilar cada archivo .cpp a .o
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -f $(OBJ) $(TARGET)