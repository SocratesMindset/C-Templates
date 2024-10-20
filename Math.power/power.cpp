#include <iostream>
// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//
using namespace std;
int power(int x, unsigned p) {
    int answer=1;
    for(int i=0;i<p;i++)
    {answer=answer*x;}
    return answer;
}

int main()
{
    double x=3;
    double y=3;
    cout<<power(x,y);
}
