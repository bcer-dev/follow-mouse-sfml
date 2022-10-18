CXX ?= g++
CXXFLAGS ?= -g 
SFML := -IC:\SFML-2.5.1\include -LC:\SFML-2.5.1\lib
LIBS += -lsfml-system -lsfml-graphics -lsfml-window

rotations: *.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(SFML) $(LIBS)