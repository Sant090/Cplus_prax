#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <limits>
#include <fstream>
#include <string>
using namespace std;

int main() {

    int numCity, numDay;
    vector<vector<float>> temperatures;
    string cp = "//////////////////////";

    while(true) {
        cout <<"\n"<<cp<<" Menu of Options "<<cp<<"\n";
        cout << "What option do you need?\n";

        cout << "1. Add data.\n2. Delete data.\n3. Modify data.\n4. City Temperature Report.\n5. Daily Temperature Report.\n6. Save file.\n7. Upload file.\n8. Exit.\nYour select: ";
        int optionMenu;
        cin >> optionMenu; 

        switch (optionMenu) {
            case 1: {
                float z;
                vector<float> tempVector;

                cout << "\n" << cp << " Add data " << cp << "\nSet the number of cities: ";    
                cin >> numCity;
                if (numCity <= -1) {
                    cout << "The data entered is not valid, verify the information\n";
                    break;
                }
                cout << "Set the number of days: ";
                cin >> numDay;
                if (numDay <= -1) {
                    cout << "The data entered is not valid, verify the information\n";
                    break;
                }

                cout << "\n" << cp << cp << "\n";
                for (int a = 0; a < numCity; a++) {
                    for (int b = 0; b < numDay; b++) {
                        do {
                            cout << "Add the value of day #" << b + 1 << " for city #" << a + 1 << " Degrees C: ";
                            cin >> z;
                            if (z <= -61 || z >= 101) {
                                cout << "The data entered is not within the range -60 to 100, verify the information\n";
                            }
                        } while (z <= -61 || z >= 101);
                        tempVector.push_back(z);
                    }
                    temperatures.push_back(tempVector);
                    tempVector.clear();
                }

                cout << "\n" << cp << cp << "\nYou have this data now:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << " Degrees C" << endl;
                    }
                }
                cout << "\n";
                break;
            }

            case 2: {

                if (temperatures.empty()) {
                    cout << "You do not have information available for this option.\n";
                    break;
                }


                cout << "\n" << cp << cp << "\nYou have this data:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << " Degrees C" << endl;
                    }
                }

                cout << "\n" << cp << cp << "\nWhich city do you want to delete data from?\nYour select: ";
                int tempCity;
                cin >> tempCity;
                
                if (tempCity > 0 && tempCity <= temperatures.size()) {
                    temperatures.erase(temperatures.begin() + (tempCity - 1));
                } else {
                    cout << "The data entered is not valid, verify the information\n";
                    break;
                }

                cout << "\n" << cp << cp << "\nYou have this data now:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << " Degrees C" << endl;
                    }
                }
                cout << "\n";
                break;
            }

            case 3: {

                if (temperatures.empty()) {
                    cout << "You do not have information available for this option.\n";
                    break;
                }


                int tempCity, tempDay;
                cout << "\n" << cp << cp << "\nYou have this data:\n";
                for (int c = 0; c < temperatures.size(); c++) {
                    cout << "\nCity #" << c + 1 << endl;
                    for (int d = 0; d < temperatures[c].size(); d++) {
                        cout << "Day #" << d + 1 << ": " << temperatures[c][d] << " Degrees C" << endl;
                    }
                }

                cout << "\n" << cp << cp << "\nWhich city do you want to modify data from?\nYour select: ";
                cin >> tempCity;

                if (tempCity > 0 && tempCity <= temperatures.size()) {
                    cout << "\nData for City #" << tempCity << ":\n";
                    for (int e = 0; e < temperatures[tempCity - 1].size(); e++) {
                        cout << "Day #" << e + 1 << ": " << temperatures[tempCity - 1][e] << " Degrees C" << endl;
                    }

                    cout << "\nWhich day do you want to change data from?\nYour select: ";
                    cin >> tempDay;

                    if (tempDay > 0 && tempDay <= temperatures[tempCity - 1].size()) {
                        float tempSelection;
                        do {
                            cout << "\nData of day selected: " << temperatures[tempCity - 1][tempDay - 1] << " Degrees C";
                            cout << "\nEnter the value for which you want to change (Degrees C): "; 
                            cin >> tempSelection;
                            if (tempSelection <= -61 || tempSelection >= 101) {
                                cout << "The data entered is not within the range -60 to 100, verify the information\n";
                            }
                        } while (tempSelection <= -61 || tempSelection >= 101);
                        temperatures[tempCity - 1][tempDay - 1] = tempSelection;
                    } else {
                        cout << "The data entered is not valid, verify the information\n";
                        break;
                    }
                } else {
                    cout << "The data entered is not valid, verify the information\n";
                    break;
                }

                cout << "\n" << cp << cp << "\nYou have this data now:\n";
                for (int f = 0; f < temperatures.size(); f++) {
                    cout << "\nCity #" << f + 1 << endl;
                    for (int g = 0; g < temperatures[f].size(); g++) {
                        cout << "Day #" << g + 1 << ": " << temperatures[f][g] << " Degrees C" << endl;
                    }   
                }
                break;
            }

            case 4: { 
                if (temperatures.empty()) {
                    cout << "You do not have information available for this option.\n";
                    break;
                }

                cout << "\n" << cp << " City Temperature Report " << cp << "\n";

                for (size_t i = 0; i < temperatures.size(); ++i) {
                    float sum = 0;
                    float maxTemp = numeric_limits<float>::lowest();
                    float minTemp = numeric_limits<float>::max();

                    for (size_t j = 0; j < temperatures[i].size(); ++j) {
                        float temp = temperatures[i][j];
                        sum += temp;
                        if (temp > maxTemp) maxTemp = temp;
                        if (temp < minTemp) minTemp = temp;
                    }

                    float avgTemp = temperatures[i].size() ? sum / temperatures[i].size() : 0;

                    cout << "City #" << (i + 1) << endl;
                    cout << "Average Temperature: " << avgTemp << " Degrees C" << endl;
                    cout << "Maximum Temperature: " << maxTemp << " Degrees C" << endl;
                    cout << "Minimum Temperature: " << minTemp << " Degrees C" << endl;
                    cout << "\n";
                }
                break;
            }

            case 5: {
                if (temperatures.empty()) {
                    cout << "You do not have information available for this option.\n";
                    break;
                }


                size_t numDays = temperatures[0].size();
                vector<float> daySum(numDays, 0);
                vector<float> dayMax(numDays, numeric_limits<float>::lowest());
                vector<float> dayMin(numDays, numeric_limits<float>::max());

                for (const auto& cityTemps : temperatures) {
                    for (size_t day = 0; day < numDays; ++day) {
                        float temp = cityTemps[day];
                        daySum[day] += temp;
                        if (temp > dayMax[day]) dayMax[day] = temp;
                        if (temp < dayMin[day]) dayMin[day] = temp;
                    }
                }

                cout << "\n" << cp << " Daily Temperature Report (All Cities) " << cp << "\n";
                for (size_t day = 0; day < numDays; ++day) {
                    float avgTemp = temperatures.size() ? daySum[day] / temperatures.size() : 0;
                    cout << "Day #" << (day + 1) << endl;
                    cout << "Average Temperature: " << avgTemp << " Degrees C" << endl;
                    cout << "Maximum Temperature: " << dayMax[day] << " Degrees C" << endl;
                    cout << "Minimum Temperature: " << dayMin[day] << " Degrees C" << endl;
                    cout << "\n";
                }
                break;
            }
            case 6: {
                if (temperatures.empty()) {
                    cout << "You do not have information available for this option.\n";
                    break;
                }


                string filename;
                cout << "\n" << cp << cp << "\nEnter the filename to save data: ";
                cin >> filename;

                ofstream outFile(filename);
                if (!outFile) {
                    cerr << "Error\n";
                    break;
                }

                for (size_t i = 0; i < temperatures.size(); ++i) {
                    outFile << "City #" << (i + 1) << endl;
                    for (size_t j = 0; j < temperatures[i].size(); ++j) {
                        outFile << "Day #" << (j + 1) << ": " << temperatures[i][j] << endl;
                    }
                }
                outFile.close();
                cout << "Data successfully saved to " << filename << endl;
                break;
            }
            case 7: {
                string filename;
                cout << "\n" << cp << cp << "\nEnter the filename to load data from: ";
                cin >> filename;

                ifstream inFile(filename);
                if (!inFile) {
                    cerr << "The file is not found in the directory\n";
                    break;
                }

                temperatures.clear();
                string line;
                vector<float> tempVector;

                while (getline(inFile, line)) {
                    if (line.find("City #") == 0) {
                        if (!tempVector.empty()) {
                            temperatures.push_back(tempVector);
                            tempVector.clear();
                        }
                    } else if (line.find("Day #") == 0) {
                        float temp;
                        sscanf(line.c_str(), "Day #%*d: %f", &temp);
                        tempVector.push_back(temp);
                    }
                }
                if (!tempVector.empty()) {
                    temperatures.push_back(tempVector);
                }

                inFile.close();
                cout << "Data successfully loaded from " << filename << endl;

                cout << "\n" << cp << cp << "\nYou have this data now:\n";
                for (size_t c = 0; c < temperatures.size(); ++c) {
                    cout << "\nCity #" << (c + 1) << endl;
                    for (size_t d = 0; d < temperatures[c].size(); ++d) {
                        cout << "Day #" << (d + 1) << ": " << temperatures[c][d] <<"Degrees C" << endl;
                    }
                }
                break;
            }

            case 8:
                cout<<"thank you for using our program, bye";
                return 0;


            default:
                cout << "\nThe option you selected is not in the menu\n";
                break;
        }
    }

    return 0;
}