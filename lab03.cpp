#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool stateProgram = true;
    int numCity = 0, numDay = 0;
    vector<vector<float>> temperaturas;
    string cp = "//////////////////////";

    while (stateProgram) {
        cout <<"\n"<<cp<<"Menu of Options"<<cp<<"\n";
        cout << "What option do you need?\n";
        cout << "1. Add data.\n2. Delete data.\n3. Modify data.\n4. Generate reports.\n5. Calculate statistics.\n6. Exit.\nYour select: ";
        int optionMenu;
        cin >> optionMenu;
        string confirm;

        switch (optionMenu) {
            case 1:
                cout <<"\n"<<cp<<"Add data"<<cp<<"\nSet the number of cities: ";
                cin >> numCity;
                cout << "Set the number of days: ";
                cin >> numDay;
                temperaturas.resize(numCity, vector<float>(numDay));
                cout<<"\n"<<cp<<cp<<"\n";
                for (int a = 0; a < numCity; a++) {
                    for (int b = 0; b < numDay; b++) {
                        cout << "Add the value of day #" << b + 1 << " for city #" << b + 1 << ": ";
                        cin >> temperaturas[a][b];
                    }
                }

                cout << "\n"<<cp<<cp<<"\nYou have this data now:\n";
                for (int c = 0; c < numCity; c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < numDay; d++) {
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }
                cout<<"\n";
                break;

            case 2:
                cout << "\n"<<cp<<cp<<"\nYou have this data:\n";
                for (int c = 0; c < numCity; c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < numDay; d++) {
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }

                cout <<"\n"<<cp<<cp<< "\nWhich city do you want to delete data from?\nYour select: ";
                int tempCity;
                cin >> tempCity;
                

                cout << "\nData for City #" << (tempCity) << ":\n";
                for (int e = 0; e < numDay; e++) {
                    cout << "Day #" << e+1 << ": " << temperaturas[(tempCity-1)][e] << endl;
                }

                cout <<"\n"<<cp<<cp<< "\nWhich day do you want to delete data from?Your select: ";
                int tempDay;
                cin >> tempDay;
                                    
                temperaturas[tempCity-1][tempDay-1] = 0;

                cout << "\n"<<cp<<cp<<"\nYou have this data now:\n";
                for (int c = 0; c < numCity; c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < numDay; d++) {
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }

                break;
            case 3:
                cout << "\n"<<cp<<cp<<"\nYou have this data:\n";
                for (int c = 0; c < numCity; c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < numDay; d++) {
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }

                cout <<"\n"<<cp<<cp<< "\nWhich city do you want to modify data from?\nYour select: ";
                cin >> tempCity;
                

                cout << "\nData for City #" << (tempCity) << ":\n";
                for (int e = 0; e < numDay; e++) {
                    cout << "Day #" << e+1 << ": " << temperaturas[(tempCity-1)][e] << endl;
                }

                cout <<"\n"<<cp<<cp<< "\nWhich day do you want to change data from?\nYour select: ";
                cin >> tempDay;
                                    
                cout<<"\nData select: "<<temperaturas[tempCity-1][tempDay-1]<<"\nEnter the value for which you want to change: ";
                int tempSelection;
                cin>> tempSelection;

                temperaturas[tempCity-1][tempDay-1]=tempSelection;

                cout << "\n"<<cp<<cp<<"\nYou have this data now:\n";
                for (int c = 0; c < numCity; c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < numDay; d++) {
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }

                break;
            case 6:
                stateProgram = false;
                break;
            default:
                cout << "\nThe option you selected is not in the menu\n";
                break;
        }
    }

    return 0;
}
