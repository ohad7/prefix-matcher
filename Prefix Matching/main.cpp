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
  
  std::ifstream prefixes("/Users/ohad/projects/prefix-matcher/Prefix Matching/keywords.txt");
  std::ifstream urls("/Users/ohad/projects/prefix-matcher/Prefix Matching/urls.txt");

  std::string line;
  while (std::getline(prefixes, line)) {
    line.erase(remove(line.begin(), line.end(), ' '), line.end());
    std::transform(line.begin(), line.end(), line.begin(), ::tolower);
    cout << "Adding keyword: " << line << endl;
    trivialMatcher.addKeyword(line);
  }
  
  trivialMatcher.wrapUp();
  
  bool matched1 = trivialMatcher.match("www.dread.com");
  bool matched2 = trivialMatcher.match("www.drip.com/2");
  bool matched3 = trivialMatcher.match("www.gnail.com");
  
  assert(matched1);
  assert(matched2);
  assert(!matched3);
  
  while (std::getline(urls, line)) {
    line.erase(remove(line.begin(), line.end(), ' '), line.end());
    std::transform(line.begin(), line.end(), line.begin(), ::tolower);
    trivialMatcher.match(line);
  }
  
  return 0;
}
