#include <iostream>
#include <string>
<<<<<<< HEAD

auto main(int argc, char *argv[]) -> int {
  auto butelki = int{99};

  if (argc > 1) {
    butelki = std::stoi(argv[1]);
  }

  for (auto i = butelki; i > 0; --i) {
    std::cout
        << i
        << " bottles of pop on the wall.\nTake one down and pass it around.\n";
    std::cout << --i << " bottles of pop on the wall.\n";
  }
  std::cout
      << "No more bottles of beer on the wall, no more bottles of beer.\n";
  std::cout << "Go to the store and buy some more, 99 bottles of beer on the "
               "wall...\n";


=======

std::string x;
x = {99};
int w;

int main() {

  std::cout << "Enter number of bottless: ";
  std::cin >> w;

  if (0 < w && w <= 99)

    char song;

  while (w > 0) {
    std::cout << w;
    std::cout
        << " bottles of pop on the wall.\nTake one down and pass it around.\n";
    std::cout << --w << " bottles of pop on the wall.\n\n";
  }
  if (w = 0)
    std::cout
        << "No more bottles of beer on the wall, no more bottles of beer.\n";
  std::cout << "Go to the store and buy some more, 99 bottles of beer on the "
               "wall...\n";
  else auto int w = x;
  std::cin >> song;

>>>>>>> 2d48b7c7174864c0bd2aea9444ee612326efd24a
  return 0;
}
