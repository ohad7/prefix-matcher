//
//  TrivialPrefixMatcher.hpp
//  String Matching Test
//
//  Created by Ohad Serfaty on 2/19/17.
//  Copyright © 2017 Nexar. All rights reserved.
//

#ifndef TrivialPrefixMatcher_hpp
#define TrivialPrefixMatcher_hpp

#include <stdio.h>
#include "PrefixMatcher.hpp"

using namespace std;

class TrivialPrefixMatcher: public PrefixMatcher {
public:
  bool match(std::string string) {
    for (std::string prefix: prefixes) {    
      if (string.find(prefix) == 0) {
        return true;
      }
    }
    return false;
  }
};

#endif /* TrivialPrefixMatcher_hpp */
