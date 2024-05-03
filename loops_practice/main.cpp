#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main()
{
  // Example 1: Find the sum of all the even numbers in a vector called
  // "numbers".
  std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // TODO: Find the sum of all even elements in the vector. Then, print it out.
  // (Hint: sum = 30)
  int sum = 0;
  for (int num : numbers)
  {
    // if num is even, add to sum
    if (num % 2 == 0)
    {
      sum += num;
    }
  }
  std::cout << "The sum of all the even numbers from 1-10 is: " << sum << "\n\n";

  // Example 2: Find the factorial of a number using a while loop
  // In general, the factorial of a positive integer n, denoted as n!,
  // is calculated as follows: n! = n × (n - 1) × (n - 2) × ... × 2 × 1)

  // TODO: Declare a variable to store the user's input.
  int num;

  // TODO: Declare and Initialize a variable for the factorial.
  // Think about what we need to set factorial to.
  // (Hint: Anything * 0 = 0)
  int factorial = 1;

  // TODO: Ask for the users input and store it in num.
  std::cout << "Let's find the factorial of a number.\n";
  std::cout << "Enter a positive integer: ";
  std::cin >> num;

  // TODO: Find the factorial of the user's number.
  // (Only calculate the factorial if the user enters a positive integer.)
  if (num > 0)
  {
    // Set i to the user's number
    int i = num;

    // While i > 0, multiply to factorial and decrement by 1
    while (i > 0)
    {
      factorial *= i;
      i--;
    }

    std::cout << "Factorial of " << num << " is: " << factorial << "\n\n";
  }

  // Example 3: Guess the number game using a do-while loop
  srand(time(0));                     // Initialize random seed
  int secretNumber = rand() % 10 + 1; // Generate random number between 1 and 10

  // TODO: Write a program that has a user guess a "secretNumber" from 1-10.
  // The user has to guess the number. Provide feedback after each guess
  // (too high, too low, or correct).
  int guess;
  do
  {
    // Ask User Input
    std::cout << "Guess the number (between 1 and 10): ";
    std::cin >> guess;

    // If guess < secretNumber, tell them too low!
    if (guess < secretNumber)
    {
      std::cout << "Too low! Try again.\n";
    }
    // Else if guess > secretNumber, tell them too high!
    else if (guess > secretNumber)
    {
      std::cout << "Too high! Try again.\n";
    }
    // Else (if user guesses it right), tell them! + exit loop
    else
    {
      std::cout << "Congratulations! You guessed the number.\n";
    }
  } while (guess != secretNumber);

  return 0;
}
