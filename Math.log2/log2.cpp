#include <iostream>

using namespace std;

int log(int a)
{
    int co=0,p=1;6
    while (p<=a)
    {
        p=p*2;
        co++;
    }
    return co-1;
}

int main()
{
    int a=0,p=0,T=0;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>a;
        p=log(a);
        cout<<p<<endl;
    }
    return 0;
}
