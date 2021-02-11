#include <iostream>

const char WIDTH = 20 , HEIGHT = 10; //rozmiary labiryntu
unsigned char player = '0';
int posX = 1; 
int posY = 1;
unsigned char action;

void playerAction ();


unsigned char maze[HEIGHT][WIDTH] = {
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
{'#',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ','#','#','#','#','#','#'},
{'#','#','#',' ','#','#','#',' ','#','#',' ',' ',' ','#','#','#',' ',' ',' ','#'},
{'#','#','#',' ',' ',' ',' ',' ','#','#',' ','#','#','#','#','#','#',' ','#','#'},
{'#','#','#',' ','#','#','#',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#','#'},
{'#','#',' ',' ','#','#',' ',' ',' ','#',' ','#',' ','#','#','#',' ',' ','#','#'},
{'#','#',' ','#','#',' ',' ','#','#','#',' ','#',' ','#','#','#',' ',' ','#','#'},
{'#','#',' ',' ','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ','#','#',' ','#','#'},
{'#',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','M','#'},
{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
};

auto main() -> int{

   std::cout << "\n\nWitaj w grze LABIRYNT!!!\n\n";        
   std::cout << "Aby kontrolowac postac (0) uzywaj klawiszy wasd.\nTwoim celem jest dotarcie do punktu M.\nAby zakonczyc uzyj klawisza q.\n"; 

while(action != 'q'){

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

    case 'a':

              
            if (maze[posX][posY -1] != '#'){
                posY--;

                maze [prevposX] [prevposY] = space;}         
            system("cls");
            break;

    case 'd':

               
            if (maze[posX][posY +1] != '#'){
                posY++;

                maze [prevposX] [prevposY] = space;}
            system("cls");
            break;

    case 's':

                
            if (maze[posX +1][posY] != '#'){
                posX++;

                maze [prevposX] [prevposY] = space;}
            system("cls");
            break;

    case 'w':

                
            if (maze[posX -1][posY] != '#'){
                posX--;
               
                maze [prevposX] [prevposY] = space;}
            
            system("cls");
            break;

            default:
            std::cout << "Niepoprawny ruch!\n";
            break;
            }
//else if(maze[posX ][posY] == 'M'){
  //              std::cout << "\n Gratulacje!!! Wygrales!!!\n";
    //            }

              
}



    
    
