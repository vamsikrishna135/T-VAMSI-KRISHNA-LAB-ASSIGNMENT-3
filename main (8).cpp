#include<iostream>
const double pi=3.14;
using namespace std;

int area(int);
int area(int, int);
float area(float );

void display(int k)                          //display function //
{
    
    cout<<"\n\n\n The area is "<< k;
}

int main()
{
   int a=5,c=3,d=8;                            // intializing values of a,b,c,r // 
   float r=2.3;

   area(a);//calling area(int p)
   area(c,d);//calling area(int q,int r)
   area(r);//calling area(float m)

}

int area(int p)                                 // implementing function overloading concept //
{
    int x;                                      // area of square//
    x=p*p;
    display(x);
}

int area(int q,int r)
{
    int x;                                       // area of rectangle//
    x=q*r;
    display(x);
}


float area(float m)                            // area of circle //
{
    int x;
    x=pi*m*m;
    display(x);
}
