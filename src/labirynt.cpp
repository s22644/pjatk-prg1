#include <iostream>

const char WIDTH = 20 , HEIGHT = 10; //rozmiary labiryntu
unsigned char player = '@'; //postać
int posX = 1, posY = 1; //pozycja postaci

unsigned char action;

void playerAction ();


unsigned char maze[HEIGHT][WIDTH] = { 
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
{'#',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ','#','#','#','#',' ','#'},
{'#','#','#',' ','#','#','#',' ','#','#',' ',' ',' ','#','#',' ',' ',' ',' ','#'},
{'#','#','#',' ',' ',' ',' ',' ','#','#',' ','#','#','#','#',' ','#',' ','#','#'},
{'#','#','#',' ','#','#','#',' ','#','#',' ',' ',' ',' ',' ',' ','#',' ','#','#'},
{'#','#',' ',' ','#','#',' ',' ',' ','#',' ','#',' ','#',' ','#',' ',' ','#','#'},
{'#','#',' ','#','#',' ',' ','#','#','#',' ','#',' ','#',' ','#',' ','#','#','#'},
{'#','#',' ',' ','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ','#','#'},
{'#',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','M','#'},
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
};

auto main() -> int{

   std::cout << "\n\nWitaj w grze LABIRYNT!!!\n\n";        
   std::cout << "Aby kontrolowac postac (@) uzywaj klawiszy WASD.\nTwoim celem jest dotarcie do punktu M.\nAby zakonczyc uzyj klawisza q.\n"; 

while(action != 'q' ){

    maze[posX] [posY] = player;
        
    for(auto y = 0; y < HEIGHT; y++){
    std::cout << std::endl;

        for(auto x = 0; x< WIDTH; x++){
        std::cout << maze[y][x];
        }



    }

    playerAction();
    }
return 0;
}
    void playerAction(){

        std::cout << "\nTwoj ruch: ";
        std::cin >> action;

        int prevposX=posX;
        int prevposY=posY;
        unsigned char space = {32};

switch (action){

    case 'a': //ruch w lewo

              
            if (maze[posX][posY -1] != '#'){
                posY--;

                maze [prevposX] [prevposY] = space;}         
            
            break;

    case 'd': //ruch w prawo

               
            if (maze[posX][posY +1] != '#'){
                posY++;

                maze [prevposX] [prevposY] = space;}
            
            break;

    case 's': //ruch w dół

                
            if (maze[posX +1][posY] != '#'){
                posX++;

                maze [prevposX] [prevposY] = space;}
            
            break;

    case 'w': // ruch w górę

                
            if (maze[posX -1][posY] != '#'){
                posX--;
               
                maze [prevposX] [prevposY] = space;}
            
            
            break;

            default: // na wypadek błędnego ruchu
            std::cout << "\nNiepoprawny ruch!\n";
            break;
            }

    if(maze[posX][posY] == 'M'){
        std::cout << "\nGratulacje!!! Wygrales!!!\n\nAby zakonczyc wcisnij klawisz q!!!\n";
    }    
}



    
    
