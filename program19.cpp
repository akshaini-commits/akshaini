#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    if(str.length() > 0)
        count = 1;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ' && str[i+1] != ' ') {
            count++;
        }
    }

    cout << "Number of words: " << count;

    return 0;
}
