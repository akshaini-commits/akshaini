#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string note;

    do {
        cout << "\n--- NOTES MENU ---\n";
        cout << "1. Add Note\n";
        cout << "2. View Notes\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1) {
            ofstream file("notes.txt", ios::app);

            cout << "Enter your note: ";
            getline(cin, note);

            file << note << endl;
            file.close();

            cout << "Note saved successfully!\n";
        }

        else if(choice == 2) {
            ifstream file("notes.txt");

            cout << "\n--- Saved Notes ---\n";

            while(getline(file, note)) {
                cout << note << endl;
            }

            file.close();
        }

        else if(choice == 3) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}
