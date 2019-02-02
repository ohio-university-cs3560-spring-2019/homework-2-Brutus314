/****************************************
*
* Alex Engle
* CS 3560
* Homework 1
* Main source file
*
****************************************/
#include <iostream>
#include "replace.h"

int main(int argc, char const *argv[]) {
  //Don't break in an ugly fashion if provided strings aren't there
  if (argc >= 3){
    //s is the main string, carry is a helper
    std::string s, carry = "";
    //Get provided targets
    std::string target = argv[1];
    std::string replace = argv[2];
    //Initial getline
    std::getline(std::cin, s);
    while (!std::cin.eof()){
      //Break up the lines in the original string
      //First time through, carry is empty. Every other time, adds the previous
        //loop's line contents with a new line
      s = s + carry;
      std::getline(std::cin, carry);
      s = s + '\n';
    }
    //Performs the replacement
    my_replace(s, target, replace);
    std::cout << s;
  }
  return 0;
}
