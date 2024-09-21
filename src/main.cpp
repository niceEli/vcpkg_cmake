// std

#include <iostream>
#include <fmt/core.h>
#include <string>
#include <fstream>
#include "macros.hpp"

// end of std

int main(int argc, char *argv[])
{
  fmt::println("Hello, World!");

  fmt::print("Whats Your Name: ");
  std::string input;
  std::cin >> input;

  fmt::println("Hello: {}", input);

  std::ifstream file;
  file.open("test.txt");
  if (file.is_open())
  {
    std::string line;
    while (std::getline(file, line))
    {
      std::cout << line << '\n';
    }
  }

  file.close();

  fmt::println("Thank You For Using My Template");

  return EXIT_SUCCESS;
}