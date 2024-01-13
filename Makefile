fdaafsCXX = C:\\MinGW\\bin\\g++.exe
CXXFLAGS = -g -std=c++17 -Iinclude -Iinclude/glad
LIBS = -Llib -lglfw3dll
SOURCES = $(wildcard src/*.cpp) $(wildcard src/*.c)
EXECUTABLE = executable.exe

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) $^ $(LIBS) -o $@

clean:
	del $(EXECUTABLE)