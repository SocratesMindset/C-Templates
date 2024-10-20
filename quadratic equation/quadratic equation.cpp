//решение квадратного уравнения
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    double D=0,x1=0,x2=0;
    D=pow(b,2)-4*a*c;
    if (D<0)
    {
        cout<<"No real roots";
    }else if (D==0)
    {
        x1=-1*(b/(2*a));
        x2=-1*(b/(2*a));
        cout<<x1<<' '<<x2<<endl;
    }else
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<x1<<' '<<x2<<endl;
    }


    return 0;
}
