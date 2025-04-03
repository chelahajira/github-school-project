#include <iostream>
using namespace std;

int main() {
    int age = 18;
    bool isStudent = true;
    
    cout << "Your current age: " << age << endl;
    cout << "Are you a student? (yes/no): ";
    string answer;
    cin >> answer;
    
    if(isStudent == true) {
        cout << "Congratulations, you are a student!" << endl;
    } else {
        cout << "Congratulations, you have reached the legal age to be an adult. Enjoy your time with us!" << endl;
    }
    
    return 0;
}
