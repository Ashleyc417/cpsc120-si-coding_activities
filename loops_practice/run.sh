#!/bin/bash

# Compile Code
g++ main.cpp -o main.out --std=c++17

# Check if compilation was successful
if [ $? -eq 0 ]; then
	echo "Your code compiled!! :) Running the program.."
	# Execute Program
	./main.out

	# Remove object files
	rm -f *.o
else
	echo "Your code did not compile :("

fi
