#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int n,count=0,temp,rev=0,p;
cout<<"Enter the starting point"<<endl;
cin>>p;
cout<<"Enter the ending point"<<endl;
cin>>n;
for (int i=p;i<=n;i++)
{
temp=i;rev=0;
while (temp!=0)
{
rev=rev*10+temp%10;
temp=temp/10;
}
if (rev==i)
cout<<i<<endl;
}
getch();
}
