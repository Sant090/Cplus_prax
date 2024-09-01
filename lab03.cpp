//#include <1016714929>
#include <iostream>
#include <vector>
using namespace std;



int main() {
    bool stateProgram = true;
    int numCity, numDay;
    vector<vector<float>> temperaturas;
    string cp = "//////////////////////";

    while (stateProgram) {
        cout <<"\n"<<cp<<"Menu of Options"<<cp<<"\n";
        cout << "What option do you need?\n";
        cout << "1. Add data.\n2. Delete data.\n3. Modify data.\n4. Generate reports.\n5. Calculate statistics.\n6. Exit.\nYour select: ";
        int optionMenu;
        cin >> optionMenu;
        string confirm;
        vector <float> tempVector;

        switch (optionMenu) {
            case 1:
                float z;

                cout <<"\n"<<cp<<"Add data"<<cp<<"\nSet the number of cities: ";    
                cin >> numCity;
                cout << "Set the number of days: ";
                cin >> numDay;

                cout<<"\n"<<cp<<cp<<"\n";
                for (int a = 0; a < numCity; a++) {
                    for (int b = 0; b < numDay; b++) {
                        cout << "Add the value of day #" << b + 1 << " for city #" << a + 1 << ": ";
                        cin >> z;
                        tempVector.push_back(z);
                    }
                    temperaturas.push_back(tempVector);
                    tempVector.clear();
                }

                cout << "\n"<<cp<<cp<<"\nYou have this data now:\n";
                for (int c = 0; c < temperaturas.size(); c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < temperaturas[c].size(); d++) {
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }
                cout<<"\n";
                break;
            //case 1016714929:
            case 2:
                cout << "\n"<<cp<<cp<<"\nYou have this data:\n";
                for (int c = 0; c < temperaturas.size(); c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < temperaturas[c].size(); d++) 
                    {
                        if (temperaturas[c].empty())
                        {
                            cout<<"this city, not have data avaliuble";
                            break;
                        }
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }

                cout <<"\n"<<cp<<cp<< "\nWhich city do you want to delete data from?\nYour select: ";
                int tempCity;
                cin >> tempCity;
        
                temperaturas[tempCity-1].clear();

                cout << "\n"<<cp<<cp<<"\nYou have this data now:\n";
                for (int c = 0; c < temperaturas.size(); c++) {
                    cout << "\nCity #" << c+1 << endl;
                    for (int d = 0; d < temperaturas[c].size(); d++) {
                        cout << "Day #" << d+1 << ": " << temperaturas[c][d] << endl;
                    }
                }
                cout<<"\n";
                break;
            case 3:
                int tempDay;
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
                                    
                cout<<"\nData of day select: "<<temperaturas[tempCity-1][tempDay-1]<<"\nEnter the value for which you want to change: ";
                int tempSelection;
                cin>> tempSelection;

                temperaturas[tempCity-1][tempDay-1]=tempSelection;

                cout << "\n"<<cp<<cp<<"\nYou have this data now:\n";
                for (int f = 0; f < numCity; f++) {
                    cout << "\nCity #" << f+1 << endl;
                    for (int g = 0; g < numDay; g++) {
                        cout << "Day #" << g+1 << ": " << temperaturas[f][g] << endl;
                    }
                }

                break;
            case 4:

            case 5:
                cout<<"the option is not available";
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
