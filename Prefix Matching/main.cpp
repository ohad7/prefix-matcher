//
//  main.cpp
//  String Matching Test
//
//  Created by Ohad Serfaty on 2/19/17.
//  Copyright © 2017 Nexar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "PrefixMatcher.hpp"
#include "TrivialPrefixMatcher.hpp"
#include <assert.h>

using namespace std;

int main(int argc, const char * argv[]) {
  
  TrivialPrefixMatcher trivialMatcher;
  
  std::ifstream prefixes("/Users/ohad/projects/prefix-matcher/Prefix Matching/prefixes.txt");
  std::ifstream urls("/Users/ohad/projects/prefix-matcher/Prefix Matching/urls.txt");

  std::string line;
  while (std::getline(prefixes, line)) {
    trivialMatcher.addPrefix(line);
  }
  
  bool matched1 = trivialMatcher.match("www.google.com");
  bool matched2 = trivialMatcher.match("www.google.com/2");
  bool matched3 = trivialMatcher.match("www.gmail.com");
  
  assert(matched1);
  assert(matched2);
  assert(!matched3);
  
  std::cout << "Matched :" << matched1 << " " << matched2 << " " << matched3 << " " << endl;
  
  return 0;
}
