#include <iostream>
#include <string>
#include <cctype>  

using namespace std;

bool isTriangularNumber(int n) {
    int i = 1;
    while ((i * (i + 1)) / 2 <= n) {
        if ((i * (i + 1)) / 2 == n) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    string input;
    

    cout << "Enter a string: ";
    getline(cin, input);  

    int sum = 0;

    for (char ch : input) {
        if (isalpha(ch)) { 
            ch = tolower(ch);  
            sum += ch - 'a' + 1;  
        }
    }

    if (isTriangularNumber(sum)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
