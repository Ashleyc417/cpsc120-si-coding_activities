# Practice problems focusing on jump statements (return, break, and continue) in C++:

## 1. Mad Hatter's Tea Party:

Implement a function called findCharacter that searches for a given character's name in a vector
of Disney character names representing guests at the Mad Hatter's tea party. If the character is
found, print a message indicating their presence. If not found, print a message indicating their
absence. (Hint: Use a `return` statement to exit the function when the character is found.)

## 2. Mickey's Magical Adventure:

Write a function called countSteps that takes a vector of integers representing the number of
steps Mickey Mouse takes on his magical adventure through the enchanted forest. Count how many
steps Mickey takes before he encounters a large boulder blocking his path. Once the boulder is
encountered, use a `break` statement to exit the loop and return the total number of steps taken.

## 3. Ariel's Underwater Treasure Hunt:

Create a function named findTreasure that searches for treasures hidden within a vector of integers
representing the depths of the ocean. Ariel is searching for treasures deeper than 500 meters. If
she finds a treasure at a depth deeper than 500 meters, print a message indicating the treasure's
location. If not, `continue` searching. Use a continue statement to skip depths shallower than 500
meters.

## Run Your Code

Remember to compile our code we use the command:

````bash
clang++ main.cpp```
or
```bash
g++ main.cpp```
(these are two compilers for C++ code)

then, run/execute your code using the command:
```./a.out```

Okay, good luck. You guys got this!

## Sample Output:
This is what should be output from your main.cpp:
``` cpp
Enter the character's name you want to find at the Mad Hatter's Tea Party: Alice
Alice is at the Mad Hatter's Tea Party!
Mickey encountered a boulder and stopped!
Mickey took 400 steps before encountering a boulder.
Searching for treasures underwater...
A treasure is found at depth 600 meters!
A treasure is found at depth 700 meters!
A treasure is found at depth 550 meters!```
````
