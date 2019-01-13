#include "matcher.hpp"


matcher::matcher(const std::string letters )
  :match_letters(letters) {
  this->required.push_back(letters.front());
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

  return c | 32; 
}
					       
