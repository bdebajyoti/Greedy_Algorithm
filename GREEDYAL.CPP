//greedy algorithm program
//c++ program demonstration
#include<iostream.h>
#include<conio.h>
double val[5]={50,20,10,5,1};
double c[5];
void main()
{
double a,b;
int i=0,j=0;
clrscr();
cout<<"\nDenominations Are\n";
for(i=0;i<5;i++)
cout<<val[i]<<" ";
cout<<"\nEnter The Amount:";
cin>>a;
b=a;
i=0;
j=0;
while(a!=0)
{
if(val[i]<=a && i<5)
{
a=a-val[i];
c[j]=val[i];
j++;
}
if(val[i]>a)
{
i++;
}
}
cout<<"\nNumber Of Denominations Given="<<j;
cout<<"\nDenominations Given Are-";
for(i=0;i<j;i++)
cout<<c[i]<<" ";
cout<<"="<<b;
getch();
}