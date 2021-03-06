//
//  PrefixMatcher.hpp
//  String Matching Test
//
//  Created by Ohad Serfaty on 2/19/17.
//  Copyright © 2017 Nexar. All rights reserved.
//

#ifndef PrefixMatcher_hpp
#define PrefixMatcher_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class PrefixMatcher {
  
public:
  virtual bool match(std::string string) = 0;
  virtual void wrapUp() = 0;
  
  void addKeyword(std::string keyword) {
    keywords.push_back(keyword);
  }
  
protected:
  std::vector<std::string> keywords;

};

#endif /* PrefixMatcher_hpp */
