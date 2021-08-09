#include<iostream>
using namespace std;


/*
int main()
//to check the second last digit of user given no if it is 7 or not
//19-04-21
{
int n,d;
cout<<"enter the number :";
cin>>n;
//first method 
//d=n%100;
//d=d/10;
d=(n/10)%10;
if(d==7)
    cout<<"yes the last second digit is 7\n";
else 
    cout<<"no the last second digit is not 7\n";
//second method
//d=(n/10)%10;
return 0;

}
*/
#include<math.h>
int main()
//check if no is divisible by 11 without using / and % 11
//trick is sum of alternative digit sum
{
    int diff,f,d,n,s1=0,s2=0;
    cout<<"\venter the number: ";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        d=n/10;
        if(f==1)// for getting alternatively digit sum
            s1=s1+d;//odd sum
        else 
            s2=s2+d;//even sum
        f=1-f;//switches the f from 0-1
        if(n==0)
            diff=abs(s1-s2);
        if(diff==0)
            cout<<"\nthe number is divisible";
        else
        {
            cout<<"\nno its not divisible";
             n=diff;
             s1=0;
             s2=0;

        }
    }
    
    return 0;
}


