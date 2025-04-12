# Makefile
TARGET=cv
SRC=src/cv.c++
OUT=build/$(TARGET)

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p build
	g++ -std=c++17 -O2 $(SRC) -o $(OUT)

clean:
	rm -rf build
