#include <string>

class matcher {
  std::string required;
  std::string match_letters;
  bool is_upper(const char c) const;
  const char to_lower(const char c) const; 
public:
  matcher(const std::string letters );
  virtual ~matcher();
  bool match(const std::string candidate) const; 
};
