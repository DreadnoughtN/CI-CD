CXX = g++
CXXFLAGS = -Wall
OUTFILE = chess.out
OUTDEBUG = chess.debug

all: compile debug

compile: main.cpp queen.cpp
			$(CXX) $(CXXFLAGS) main.cpp queen.cpp -o $(OUTFILE)

debug: main.cpp queen.cpp
			$(CXX) $(CXXFLAGS) -g main.cpp queen.cpp -o $(OUTDEBUG)

clean: 
	rm -f $(OUTFILE) $(OUTDEBUG)

.PHONY: clean