#ifndef s22644_STUDENT_H
#define s22644_STUDENT_H

#include <string>

namespace s22644 {
class Student {
  std::string const name;
  std::string const surname;
  std::string const index;
  constexpr static size_t SEMESTER{2};
  size_t semester{SEMESTER};
  constexpr static double GRADES{4.5};
  size_t grades{GRADES};

public:
  Student(std::string name, std::string surname, std::string index,
          size_t const = SEMESTER, size_t const = GRADES);

  auto to_string() const -> std::string;
  auto indroduces_himself(std::string) const -> std::string;
};
} // namespace s22644

#endif
