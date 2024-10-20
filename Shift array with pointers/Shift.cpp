#include <iostream>
using namespace std;
void rotate(int a[], unsigned size, int shift)
{
    if(shift==0 || size==0)
        return;
    int t = *a;
    //cout<<*a;
    for(int i=0; i<(size-1);i++)
    {
         a[i] = a[i+1];
    }
    a[size-1] = t;
    rotate(a, size, --shift);
}

int main()
{
    int mas[]={1,2,3,4,5};
    int size=5;
    int shift=2;
    cout<<*mas;
    rotate(mas,size,shift);
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<mas[i];
    }
}
