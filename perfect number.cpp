//C++ program to check Perfect Number

#include <iostream>
using namespace std;
int main() {
   int num,sum=0;
   cout<<"Enter number to check whether Perfect Number or not:";
   cin>>num;
   for(int i=1;i<=num/2;i++)
   {
       if(num%i==0)
        sum=sum+i;
   }
   if(sum==num)
        cout<<num<<" is a Perfect Number.";
   else
        cout<<num<<" is not a Perfect Number.";
    
    return 0;
}
