files := \
	main.cpp \
	menu_state.cpp \
	game.cpp \

# Compiler (g++)
CCC = g++

# Compiling flags
CCFLAGS +=  -Wno-deprecated-declarations -Wall -Wextra -pedantic -std=c++1z -Weffc++ -g

LDFLAGS += -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

all: compile

compile:
	$(CCC) $(CCFLAGS) -g $(files) -o game $(LDFLAGS)

run:
	./game
