#include <iostream>
#include <string>

auto main(int argc, char*argv[])-> int 
{
auto butelki = int{99}; 

if(argc > 1){
    butelki = std::stoi(argv[1]);
}

for(auto i = butelki; i>0; --i){
    std::cout << i << " bottles of pop on the wall.\nTake one down and pass it around.\n";
    std::cout << --i << " bottles of pop on the wall.\n";
}
  std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
  std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall...\n";


  return 0;
}
