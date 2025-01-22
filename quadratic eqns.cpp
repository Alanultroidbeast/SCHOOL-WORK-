#include<iostream>
#include<cmath>
using namespace std;
int main()
{
        int a,b,c,d,r1,r2;
        cout<<"Enter the values of a b c :";
        cin>>a>>b>>c;
        if(!a)
                cout<<"The value of a cannot be 0";
        else
                d=b*b-4*a*c;
                if(d>0)
                {
                        r1=(-b+sqrt(d)/(2*a);
                        r1=(-b-sqrt(d)/(2*a);
                        cout<<"The roots are real and unequal.The value of r1 = "<<rq"and r2 = "<<r2;
                }
                else if(d==0)
                {
                        r1=(-b)/(2*a);
                        cout<<"The roots are real and equal.so r1 = r2 = "<<r1;
                }
                else
                        cout<<"The roots are unreal and complex";
}
