#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool stateProgram = true;
    vector<vector<float>> temperaturas;
    int numCity, numDay;

    while (stateProgram) {
        cout << "\n/////////////////////Menu of Options/////////////////////\n";
        cout << "¿What option do you need?\n";
        cout << "1. Add data.\n2. Delete data.\n3. Modify data.\n4. Generate reports.\n5. Calculate statistics.\n6. Exit.\n";
        int optionMenu;
        cin >> optionMenu;

        switch (optionMenu) {
        case 1:
            cout << "Set the number of cities: ";
            cin >> numCity;
            cout << "Set the number of days: ";
            cin >> numDay;
            temperaturas.resize(numCity, vector<float>(numDay));

            for (int i = 0; i < numCity; i++) {
                for (int j = 0; j < numDay; j++) {
                    cout << "Add the value of day #" << j + 1 << " for city #" << i + 1 << ": ";
                    cin >> temperaturas[i][j];
                }
            }
            for (int k = 0; k < numCity; k++)
            {
                cout<<"City #"<<k+1<<endl;

                for (int j = 0; j < numDay; j++) 
                {
                    cout<<"Day #"<<j+1<<": "<<temperaturas[k][j]<<endl;
                }
            }
            break;

        case 2:
            // Aquí irá el código para eliminar datos
            break;

        case 3:
            // Aquí irá el código para modificar datos
            break;

        case 4:
            // Aquí irá el código para generar informes
            break;

        case 5:
            // Aquí irá el código para calcular estadísticas
            break;

        case 6:
            stateProgram = false;
            break;

        default:
            cout << "\nThe option that you selected is not in the menu\n";
            break;
        }
    }

    return 0;
}
