# Nazwa końcowego programu
TARGET = program

# Kompilator
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Pliki źródłowe i nagłówkowe
SRCS = main.cpp airnelectro.cpp psu.cpp gui.cpp
OBJS = $(SRCS:.cpp=.o)

# Reguła domyślna: kompilacja całego programu
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Kompilacja plików obiektowych
%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Usuwanie plików obiektowych i programu
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets (czyszczenie nie zależy od plików o takich nazwach)
.PHONY: clean
