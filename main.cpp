#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void encryptFile() {

    string inputFile, outputFile;
    int key;

    cout << "\nEnter input file name: ";
    cin >> inputFile;

    cout << "Enter output file name: ";
    cin >> outputFile;

    cout << "Enter encryption key (1-25): ";
    cin >> key;

    if (key < 1 || key > 25) {
        cout << "Invalid key. Please use a key between 1 and 25.\n";
        return;
    }

    ifstream input(inputFile);

    if (!input) {
        cout << "Could not open input file.\n";
        return;
    }

    ofstream output(outputFile);

    char ch;

    while (input.get(ch)) {

        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' + key) % 26;
        }

        else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + key) % 26;
        }

        output.put(ch);
    }

    input.close();
    output.close();

    cout << "\nFile encrypted successfully!\n";
}

void decryptFile() {

    string inputFile, outputFile;
    int key;

    cout << "\nEnter encrypted file name: ";
    cin >> inputFile;

    cout << "Enter output file name: ";
    cin >> outputFile;

    cout << "Enter decryption key (1-25): ";
    cin >> key;

    if (key < 1 || key > 25) {
        cout << "Invalid key. Please use a key between 1 and 25.\n";
        return;
    }

    ifstream input(inputFile);

    if (!input) {
        cout << "Could not open encrypted file.\n";
        return;
    }

    ofstream output(outputFile);

    char ch;

    while (input.get(ch)) {

        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' - key + 26) % 26;
        }

        else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' - key + 26) % 26;
        }

        output.put(ch);
    }

    input.close();
    output.close();

    cout << "\nFile decrypted successfully!\n";
}

int main() {

    int choice;

    do {

        cout << "\n========================================\n";
        cout << "       C++ FILE SECURITY UTILITY\n";
        cout << "========================================\n";

        cout << "1. Encrypt File\n";
        cout << "2. Decrypt File\n";
        cout << "3. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                encryptFile();
                break;

            case 2:
                decryptFile();
                break;

            case 3:
                cout << "\nThank you for using the utility!\n";
                break;

            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}