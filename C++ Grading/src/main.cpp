#include <iostream>
using namespace std;

int stringToInt(const string& s){
    int i = stof(s);
    return int(i);
}

bool isInt (const string& s){
    float f,r;
    try
    {
        f = stof(s);
        r = f - long(f);
        return r == 0; 
    }
    catch(const std::exception& e)
    {
        return false;
    }
}

char grading(const int& grade){
    if (90 <= grade && grade  <= 100) {
        return 'A';
    }
    else if (80 <= grade && grade  <= 89) {
        return 'B';
    }
    else if (70 <= grade && grade  <= 79) {
        return 'C';
    }
    else if (60 <= grade && grade  <= 69) {
        return 'D';
    }
    else if (0 <= grade && grade  <= 59) {
        return 'F';
    }
    return 'N';
}
int main() {
    string input;
    int grade;
    char g;
    cout << "Please enter your grade" << endl;
    
    cin >> input;

    if (!isInt(input)) {
        cout << "incorrect input, only numbers please!";
    }
    else
    {
        grade = stringToInt(input);
        if (0 <= grade && grade  <= 100) {
             g = grading(grade);
             cout << "Your grade is " << g << endl;
        }
        else
        {
            cout << "grade must between or equal to 0 and 100";
        }
    }
    return 0;
}