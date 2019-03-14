#include <iostream>
using namespace std;
int main() {
    string s;
    for(int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0) {
            s.append("Fizz");            
        }
        if (i % 5 == 0) {
            s.append("Buzz");
        }
        if (s.empty()) {
            cout << i << endl;
        }
        else
        {
            cout << s << endl;
        }    
        s.erase();
    }    
}

