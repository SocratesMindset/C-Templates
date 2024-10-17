#include <iostream>

using namespace std;

void swap (int * a, int * b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int k=10,m=20;
    swap (&k,&m);
    cout<<k<<' '<<m<<endl;
    return 0;
}