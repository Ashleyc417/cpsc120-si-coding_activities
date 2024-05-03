#include <iostream>
#include <string>
#include <vector>

// Problem 1: Mad Hatter's Tea Party
// Function to find a character in the guest list
void findCharacter(const std::vector<std::string> &guests,
                   const std::string &character) {
  // TODO: Implement the function to search for the character in the guest list
}

// Problem 2: Mickey's Magical Adventure
// Function to count steps until encountering a boulder
int countSteps(const std::vector<int> &steps) {
  // TODO: Implement the function to count steps until encountering a boulder
  // Use a loop and break statement when a boulder is encountered
  // Return the total number of steps taken
  return 0; // Placeholder return value, replace with actual calculation
}

// Problem 3: Ariel's Underwater Treasure Hunt
// Function to find treasures deeper than 500 meters
void findTreasure(const std::vector<int> &depths) {
  // TODO: Implement the function to find treasures deeper than 500 meters
  // Use a loop and continue statement to skip depths shallower than 500 meters
}

int main() {
  // Problem 1: Mad Hatter's Tea Party
  std::vector<std::string> guests = {"Alice", "Mad Hatter", "March Hare",
                                     "Cheshire Cat", "Queen of Hearts"};
  std::string character;
  std::cout << "Enter the character's name you want to find at the Mad "
               "Hatter's Tea Party: ";
  std::cin >> character;
  findCharacter(guests, character);

  // Problem 2: Mickey's Magical Adventure
  std::vector<int> steps = {20, 30, 40, 50, 60, 120, 80};
  int totalSteps = countSteps(steps);
  std::cout << "Mickey took " << totalSteps
            << " steps before encountering a boulder." << std::endl;

  // Problem 3: Ariel's Underwater Treasure Hunt
  std::vector<int> depths = {300, 600, 200, 700, 400, 550};
  std::cout << "Searching for treasures underwater..." << std::endl;
  findTreasure(depths);

  return 0;
}

