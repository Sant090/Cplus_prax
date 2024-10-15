#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int health = 100;
int dir;
vector<vector<char>> map11 = {
{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
{'#', '@', ' ', '#', ' ', 'E', ' ', ' ', 'E', '#', ' ', ' ', ' ', '#'},
{'#', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'},
{'#', ' ', '#', '#', ' ', '#', 'E', '#', '#', '#', '#', 'E', ' ', '#'},
{'#', ' ', ' ', ' ', ' ', '#', ' ', '#', '#', '#', '#', ' ', '#', '#'},
{'#', '#', '#', 'E', '#', '#', ' ', ' ', 'E', ' ', '#', ' ', ' ', '#'},
{'#', ' ', ' ', ' ', '#', '#', '#', '#', '#', 'E', '#', '#', 'E', '#'},
{'#', 'E', '#', ' ', ' ', 'E', ' ', 'E', ' ', ' ', ' ', '#', '#', '#'},
{'#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', 'E', '#', ' ', '#'},
{'#', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#'},
{'#', '#', 'E', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#'},
{'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', 'E', ' ', ' ', ' ', '#'},
{'#', 'E', '#', 'E', '#', '#', ' ', '#', '#', '#', '#', '#', '#', '#'},
{'#', ' ', '#', ' ', 'E', '#', ' ', ' ', ' ', ' ', ' ', ' ', 'T', '#'},
{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
};
vector<vector<char>> map21 = {
{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
{'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ','#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
{'#', 'x', ' ', ' ', ' ', ' ', '#', '#', '#', ' ', ' ', ' ', '#', ' ',' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', '#', ' ', '#'},
{'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ','#', '#', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', '#'},
{'#', '#', '#', '#', '#', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', '#', '#', '#', '#', ' ', ' ', ' ', '#', ' ', '#', '#'},
{'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', '#', '#', ' ','#', '#', '#', '#', ' ', ' ', ' ', ' ', '#', '#', '#', ' ', ' ', '#'},
{'#', 'T', '#', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ',' ', ' ', ' ', '#', ' ', '#', '#', '#', '#', ' ', '#', '#', ' ', '#'},
{'#', '#', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', '#','#', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
{'#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ',' ', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#'},
{'#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#',' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'},
{'#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', '#', ' ', ' ',' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', '#', ' ', '#'},
{'#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'},
{'#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#','#', '#', ' ', '#', ' ', '#', ' ', '#', '#', ' ', '#', '#', ' ', '#'},
{'#', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#','#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
};
int world = 1;


int mapFinal(int x, int y, int dir) {



    while (true) {
        if (world == 3) {
            return 0;
        }
        if (health <= 0) {
            cout << "\n\n\n\n\n\n\n\n\nGAME OVER\n\n\n\n\n\n\n\n\n";
            return 0;
        }

        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nhealth: " << health << "%❓" << endl;

        // Mostrar el mapa actual (map21)
        for (int z = 0; z < map21.size(); z++) {
            for (int c = 0; c < map21[z].size(); c++) {
                switch (map21[z][c])
                {
                case '#':
                    cout << "\033[33m" << map21[z][c] << "\033[0m";
                    break;

                case 'E':
                    cout << "\033[31m" << map21[z][c] << "\033[0m";
                    break;
                case 'T':
                    cout << "\033[34m" << map21[z][c] << "\033[0m";
                    break;
                case '@':
                    cout << "\033[32m" << map21[z][c] << "\033[0m";
                    break;
                
                default:
                    cout << map21[z][c];
                    break;
                }
            }
            cout << endl;
        }

        map21[x][y] = ' ';  // Limpiar la posición anterior del jugador

        dir = _getch();  // Capturar la tecla de dirección

        switch (dir) {
        case 97:  // Izquierda (tecla 'a')
            y--;
            if (map21[x][y] == '#') {
                y++;
            }
            else if (map21[x][y] == 'E') {
                health -= 10;
            }
            else if (map21[x][y] == 'T') {
                world++;
                return 0;
            }


            break;

        case 115:  // Abajo (tecla 's')
            x++;
            if (map21[x][y] == '#') {
                x--;
            }
            else if (map21[x][y] == 'E') {
                health -= 10;
            }
            else if (map21[x][y] == 'T') {
                world++;
                return 0;
            }


            break;

        case 100:  // Derecha (tecla 'd')
            y++;
            if (map21[x][y] == '#') {
                y--;
            }
            else if (map21[x][y] == 'E') {
                health -= 10;
            }
            else if (map21[x][y] == 'T') {
                world++;
                return 0;
            }

            break;

        case 119:  // Arriba (tecla 'w')
            x--;
            if (map21[x][y] == '#') {
                x++;
            }
            else if (map21[x][y] == 'E') {
                health -= 10;
            }
            else if (map21[x][y] == 'T') {
                world++;
                return 0;
            }

            break;
        }
        map21[x][y] = '@';  // Poner al jugador en la nueva posición
    }
    return 0;
}


int mapStart(int x, int y, int dir) {

    while (true)
    {
        if (health <= 0) {
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << "GAME OVER" << endl << endl << endl << endl << endl << endl << endl << endl;
            return 0;
        }

        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nhealth: " << health << "%❓" << endl;

        for (int z = 0; z < map11.size(); z++) {
            for (int c = 0; c < map11[z].size(); c++) {
                switch (map11[z][c])
                {
                case '#':
                    cout << "\033[33m" << map11[z][c] << "\033[0m";
                    break;

                case 'E':
                    cout << "\033[31m" << map11[z][c] << "\033[0m";
                    break;
                case 'T':
                    cout << "\033[34m" << map11[z][c] << "\033[0m";
                    break;
                case '@':
                    cout << "\033[32m" << map11[z][c] << "\033[0m";
                    break;
                
                default:
                    cout << map11[z][c];
                    break;
                }
            }
            cout << endl;
        }

        map11[x][y] = ' ';

        dir = _getch();

        switch (dir) {
        case 97:
            y--;
            if (map11[x][y] == '#') {
                y++;
                break;
            }
            else if (map11[x][y] == 'E') {
                health -= 10;
            }
            else if (map11[x][y] == 'T') {
                world++;
                if (world == 2) {
                    x = 1;
                    y = 1;
                    mapFinal(x, y, dir);
                    if (mapFinal(x, y, dir) == 0) {
                        cout << "\n\n\n\n\n\nfelicidades\n\n\n\n\n\n";
                        return 0;
                    }
                }
            }

            break;
        case 115:

            x++;
            if (map11[x][y] == '#') {
                x--;
                break;
            }
            else if (map11[x][y] == 'E') {
                health -= 10;
            }
            else if (map11[x][y] == 'T') {
                world++;
                if (world == 2) {
                    x = 1;
                    y = 1;
                    mapFinal(x, y, dir);
                    if (mapFinal(x, y, dir) == 0) {
                        cout << "\n\n\n\n\n\nfelicidades\n\n\n\n\n\n";
                        return 0;
                    }
                }
            }
            break;
        case 100:
            y++;
            if (map11[x][y] == '#') {
                y--;
                break;
            }
            else if (map11[x][y] == 'E') {
                health -= 10;
            }
            else if (map11[x][y] == 'T') {
                world++;
                if (world == 2) {
                    x = 1;
                    y = 1;
                    mapFinal(x, y, dir);
                    if (mapFinal(x, y, dir) == 0) {
                        cout << "\n\n\n\n\n\nfelicidades\n\n\n\n\n\n";
                        return 0;
                    }
                }
            }
            break;
        case 119:
            x--;
            if (map11[x][y] == '#') {
                x++;
                break;
            }
            else if (map11[x][y] == 'E') {
                health -= 10;
            }
            else if (map11[x][y] == 'T') {
                world++;
                if (world == 2) {
                    x = 1;
                    y = 1;
                    mapFinal(x, y, dir);
                    if (mapFinal(x, y, dir) == 0) {
                        cout << "\n\n\n\n\n\nfelicidades\n\n\n\n\n\n";
                        return 0;
                    }
                }
            }
            break;
        }
        map11[x][y] = '@';
    }
    return 0;
}




int main() {


    int x = 1;
    int y = 1;
    int seed;



    mapStart(x, y, dir);








    return 0;
};