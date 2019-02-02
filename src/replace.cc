/****************************************
*
* Alex Engle
* CS 3560
* Homework 1
* Replace function source file
*
****************************************/
#include <string>
#include "replace.h"

void my_replace(std::string& s, const std::string& target, const std::string& replace){
  //Needed to find the position of first replacements, or if no replacements
  size_t pos = s.find(target);
  size_t len = target.length();
  while (pos != std::string::npos){
    //Uses the std::string::replace function
    s.replace(pos, len, replace);
    pos = s.find(target);
  }
}
