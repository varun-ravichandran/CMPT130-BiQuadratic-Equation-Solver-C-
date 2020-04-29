#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,d,w;
    cout<<"Enter the coefficents of the bi-quadratic eqaution"<<endl;
    cout<<"Enter the coefficient a: ";
    cin>>a;
    cout<<"Enter the coefficient b: ";
    cin>>b;
    cout<<"Enter the coefficient c: ";
    cin>>c;
    d=pow(b,2)-4*a*c;
    if (d<0)
        cout<<"This bi-quadratic equation has no solution."<<endl;
    else if(d>0)
    {
        w=(-b+sqrt(d))/(2*a);
        double w1=(-b-sqrt(d))/(2*a);
        if(w>=0 && w1>=0)
        {
            double x=+sqrt(w);
            double x1=-sqrt(w);
            double y=+sqrt(w1);
            double y1=-sqrt(w1);
            cout<<"This bi-quadratic equation has the following solutions: "<<x<<", "<<x1<<", "<<y<<", "<<y1<<endl;
        }
        else if((w>=0 && w1<=0) || (w<=0 && w1>=0))
        {
            double x=+sqrt(w);
            double x1=-sqrt(w);
            cout<<"This bi-quadratic equation has the following solutions: "<<x<<", "<<x1<<endl;
        }
        else if (w<=0 && w1<=0)
        {
            cout<<"This bi-quadratic equation has no solution."<<endl;
        }
        else
            cout<<"This bi-quadratic equation has no solution."<<endl;
    }
    else if(d==0)
    {
        w=(-b+sqrt(d))/(2*a);
        double w1=(-b-sqrt(d))/(2*a);
        if(w>=0)
        {
        double x=+sqrt(w);
        double x1=-sqrt(w);
        double y=+sqrt(w1);
        double y1=-sqrt(w1);
            cout<<"This bi-quadratic equation has the following solutions: "<<x<<", "<<x1<<", "<<y<<", "<<y1<<endl;
        }
        else if(w1>=0)
        {
            double x=+sqrt(w);
            double x1=-sqrt(w);
            double y=+sqrt(w1);
            double y1=-sqrt(w1);
            cout<<"This bi-quadratic equation has the following solutions: "<<x<<", "<<x1<<", "<<y<<", "<<y1<<endl;
        }
        else
            cout<<"This bi-quadratic equation has no solution."<<endl;
        
    }
    cout<<"\n"
    system("Pause");
    return 0;
}


