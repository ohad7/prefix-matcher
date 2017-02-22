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
    for (std::string keyword: keywords) {
      if (string.find(keyword) != std::string::npos) {
        cout << "Found match :" << keyword << " contained in " << string << endl;
        return true;
      }
    }
    return false;
  }
  
  void wrapUp() { }
};

#endif /* TrivialPrefixMatcher_hpp */
