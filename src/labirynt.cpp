#include <iostream>

const char WIDTH = 20 , HEIGHT = 10;
unsigned char player = {1};
int posX = 1, posY = 1;
unsigned char action;

void playerAction ();

struct enemies{

    char symbol;
    bool active;
    int x;
    int y;
};

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

    while(action != 'q'){
        std::cout << "\n\nWitaj w grze LABIRYNT!!!\n\n";        
        std::cout << "Aby kontrolowac postac uzywaj klawiszy wasd.\nAby zakonczyc uzyj klawisza q.\n";

    maze [posX][posY] = player;

    for(auto y = 0; y < HEIGHT; y++){
    std::cout << std::endl;

        for(auto x = 0; x< WIDTH; x++){
        std::cout << maze[y][x];
        }

//1 wróg
enemies enemy1;
enemy1.symbol = 'X';
enemy1.active = true;
enemy1.x = 3;
enemy1.y = 6;
maze[enemy1.y][enemy1.x] = enemy1.symbol;

//2 wróg
enemies enemy2;
enemy2.symbol = 'Y';
enemy2.active = true;
enemy2.x = 8;
enemy2.y = 5;
maze[enemy2.y][enemy2.x] = enemy2.symbol;

//3 wróg
enemies enemy3;
enemy3.symbol = 'Z';
enemy3.active = true;
enemy3.x = 3;
enemy3.y = 6;
maze[enemy3.y][enemy3.x] = enemy3.symbol;

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

    if (maze[posX][posY] == 'X' ||
                    maze[posX ][posY] == 'Y' ||
                    maze[posX ][posY] == 'Z'){
    std::cout << "Przegrana\n";
}
    else if(maze[posX ][posY] == 'M'){
        std::cout << "\n Gratulacje!!! Wygrales!!!\n";
        }            
}



    
    
