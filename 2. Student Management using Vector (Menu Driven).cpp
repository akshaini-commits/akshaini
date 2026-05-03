#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];


    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << endl;
        s[i].getData();
    }


    cout << "\nAll Student Details:\n";
    for(int i = 0; i < n; i++) {
        s[i].display();
    }


    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    cout << "\nTopper Details:\n";
    s[maxIndex].display();

    return 0;
}
