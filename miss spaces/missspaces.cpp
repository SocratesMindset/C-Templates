#include <iostream>
using namespace std;
int main() {

    char c;
    bool counter = true;
    while(cin.get(c))
        if(c != ' ')
        {
            cout << c;
            counter = true;
        }else if(counter)
        {
            cout << c;
            counter = false;
        }
    return 0;
}
