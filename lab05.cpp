#include <iostream> 
#include <vector>

using namespace std;

int main() {
    string cp = "//////////////////";
    string out;

    cout << cp << " Welcome to the Matrix Calculator " << cp << endl;

    while (true) {
        int rowA, columnsA;
        
        cout << "\nSet the number of rows for matrix A: ";
        cin >> rowA;
        cout << "Set the number of columns for matrix A: ";
        cin >> columnsA;

        vector<vector<int>> A(rowA, vector<int>(columnsA));
        
        cout << "\nSet the elements of matrix A:\n";
        for (int i = 0; i < rowA; ++i) {
            for (int j = 0; j < columnsA; ++j) {
                cout << "Element # " << j + 1 << " of row #" << i + 1 << ": ";
                cin >> A[i][j];
            }
        }

        int rowB, columnsB;
        
        cout << "\nSet the number of rows for matrix B: ";
        cin >> rowB;
        cout << "Set the number of columns for matrix B: ";
        cin >> columnsB;

        vector<vector<int>> B(rowB, vector<int>(columnsB));
        
        cout << "\nSet the elements of matrix B:\n";
        for (int i = 0; i < rowB; ++i) {
            for (int j = 0; j < columnsB; ++j) {
                cout << "Element # " << j + 1 << " of row #" << i + 1 << ": ";
                cin >> B[i][j];
            }
        }

        int option;
        cout << "\nSelect an Option:\n1. Sum\n2. Subtraction\n3. Multiplication\n";
        cin >> option;

        if (option == 1) {
            if (rowA == rowB && columnsA == columnsB) {
                vector<vector<int>> sum(rowA, vector<int>(columnsA));
                
                for (int i = 0; i < rowA; ++i) {
                    for (int j = 0; j < columnsA; ++j) {
                        sum[i][j] = A[i][j] + B[i][j];
                    }
                }

                cout << cp << cp << " \nThe sum of the matrices is:\n";
                for (int i = 0; i < rowA; ++i) {
                    for (int j = 0; j < columnsA; ++j) {
                        cout << sum[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Error: Matrices must have the same dimensions to perform addition.\n";
            }
        } 
        else if (option == 2) {
            if (rowA == rowB && columnsA == columnsB) {
                vector<vector<int>> difference(rowA, vector<int>(columnsA));
                
                for (int i = 0; i < rowA; ++i) {
                    for (int j = 0; j < columnsA; ++j) {
                        difference[i][j] = A[i][j] - B[i][j];
                    }
                }

                cout << cp << cp << "\nThe difference of the matrices is:\n";
                for (int i = 0; i < rowA; ++i) {
                    for (int j = 0; j < columnsA; ++j) {
                        cout << difference[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Error: Matrices must have the same dimensions to perform subtraction.\n";
            }
        } 
        else if (option == 3) {
            if (columnsA == rowB) {
                vector<vector<int>> product(rowA, vector<int>(columnsB, 0));

                for (int i = 0; i < rowA; ++i) {
                    for (int j = 0; j < columnsB; ++j) {
                        for (int k = 0; k < columnsA; ++k) {
                            product[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }

                cout << cp << cp << "\nThe product of the matrices is:\n";
                for (int i = 0; i < rowA; ++i) {
                    for (int j = 0; j < columnsB; ++j) {
                        cout << product[i][j] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "Error: The number of columns in A must be equal to the number of rows in B to multiply.\n";
            }
        } 

        else {
            cout << "Invalid option, lease try again.\n";
        }

        cout<<"do you want continue with other operation? (y/n): ";
        cin>>out;

        if (out == "n" ||out=="N") {
            cout << "Thanks for using this calculator\n";
            break;
        }
    }
    return 0;
}
