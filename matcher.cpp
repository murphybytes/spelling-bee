#include "matcher.hpp"


matcher::matcher(const std::string required, const std::string optionals ) {
  this->required.push_back(to_lower(required.front()));
  match_letters.push_back(to_lower(required.front()));
  for( auto i = optionals.cbegin(); i != optionals.cend(); i++ ) {
    match_letters.push_back(to_lower(*i));
  }

}

matcher::~matcher() {
}

bool matcher::match(const std::string candidate ) const {

  if (candidate.length() < 4) {
      return false;
  }

  if (is_upper(candidate.front())) {
    return false; 
  }

  if (candidate.find(required) == std::string::npos) {
    return false;
  }

  for (auto i = candidate.cbegin(); i != candidate.cend(); i++ ) {
    if (match_letters.find(*i) == std::string::npos ) {
      return false;
    }
  }
  
  return true; 
}


bool matcher::is_upper(const char c) const {
  if (c >= 'A' && c <= 'Z') {
    return true; 
  }
  return false;
}


const char matcher::to_lower(const char c) const {
  if (!is_upper(c)) {
    return c;
  }

  const char lc = c + 32;
  return lc; 
}
					       
