#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct User {
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main() {
    User usr, usr1;
    fstream fp;
    char filename[50], phone[50], pword[50];
    int opt, choice;
    char cont = 'y';
    float amount;

    cout << "\nWhat do you want to do?";
    cout << "\n\n1. Register an account";
    cout << "\n2. Login to an account";

    cout << "\n\nYour choice:\t";
    cin >> opt;

    if (opt == 1) {
        system("clear");
        cout << "Enter your account number:\t";
        cin >> usr.ac;
        cout << "Enter your phone number:\t";
        cin >> usr.phone;
        cout << "Enter your new password:\t";
        cin >> usr.password;
        usr.balance = 0;
        strcpy(filename, usr.phone);
        strcat(filename, ".dat");
        fp.open(filename, ios::out | ios::binary);
        fp.write(reinterpret_cast<char*>(&usr), sizeof(User));
        if (fp) {
            cout << "\n\nAccount successfully registered";
        } else {
            cout << "\n\nSomething went wrong, please try again";
        }
        fp.close();
    }

    if (opt == 2) {
        system("clear");
        cout << "\nPhone number:\t";
        cin >> phone;
        cout << "Password:\t";
        cin >> pword;
        strcpy(filename, phone);
        strcat(filename, ".dat");
        fp.open(filename, ios::in | ios::binary);
        if (!fp) {
            cout << "\nAccount number not registered";
        } else {
            fp.read(reinterpret_cast<char*>(&usr), sizeof(User));
            fp.close();
            if (!strcmp(pword, usr.password)) {
                cout << "\n\t\tWelcome " << usr.phone << "!";
                while (cont == 'y') {
                    system("clear");
                    cout << "\n\nPress 1 for balance inquiry";
                    cout << "\nPress 2 for depositing cash";
                    cout << "\nPress 3 for cash withdrawal";
                    cout << "\nPress 4 for online transfer";
                    cout << "\nPress 5 for password change";
                    cout << "\n\nYour choice:\t";
                    cin >> choice;

                    switch (choice) {
                        case 1:
                            cout << "\nYour current balance is Rs." << usr.balance;
                            break;
                        case 2:
                            cout << "\nEnter the amount:\t";
                            cin >> amount;
                            usr.balance += amount;
                            fp.open(filename, ios::out | ios::binary);
                            fp.write(reinterpret_cast<char*>(&usr), sizeof(User));
                            if (fp) cout << "\nSuccessfully deposited.";
                            fp.close();
                            break;
                        case 3:
                            cout << "\nEnter the amount:\t";
                            cin >> amount;
                            usr.balance -= amount;
                            fp.open(filename, ios::out | ios::binary);
                            fp.write(reinterpret_cast<char*>(&usr), sizeof(User));
                            if (fp) cout << "\nYou have withdrawn Rs." << amount;
                            fp.close();
                            break;
                        case 4:
                            cout << "\nPlease enter the phone number to transfer the balance:\t";
                            cin >> phone;
                            cout << "\nPlease enter the amount to transfer:\t";
                            cin >> amount;
                            strcpy(filename, phone);
                            strcat(filename, ".dat");
                            fp.open(filename, ios::in | ios::binary);
                            if (!fp) {
                                cout << "\nAccount number not registered";
                            } else {
                                fp.read(reinterpret_cast<char*>(&usr1), sizeof(User));
                                fp.close();
                                if (amount > usr.balance) {
                                    cout << "\nInsufficient balance";
                                } else {
                                    usr1.balance += amount;
                                    fp.open(filename, ios::out | ios::binary);
                                    fp.write(reinterpret_cast<char*>(&usr1), sizeof(User));
                                    fp.close();
                                    cout << "\nYou have successfully transferred Rs." << amount << " to " << phone;
                                    
                                    strcpy(filename, usr.phone);
                                    strcat(filename, ".dat");
                                    fp.open(filename, ios::out | ios::binary);
                                    usr.balance -= amount;
                                    fp.write(reinterpret_cast<char*>(&usr), sizeof(User));
                                    fp.close();
                                }
                            }
                            break;
                        case 5:
                            cout << "\nPlease enter your new password:\t";
                            cin >> pword;
                            fp.open(filename, ios::out | ios::binary);
                            strcpy(usr.password, pword);
                            fp.write(reinterpret_cast<char*>(&usr), sizeof(User));
                            if (fp) cout << "\nPassword successfully changed";
                            fp.close();
                            break;
                        default:
                            cout << "\nInvalid option";
                    }

                    cout << "\nDo you want to continue the transaction [y/n]\t";
                    cin >> cont;
                }
            } else {
                cout << "\nInvalid password";
            }
        }
    }

return 0;
}