#include<iostream>
using namespace std;
int main()
{
   int dig,sum=0,i;
   cout<<"請輸入一個整數:";
   cin>>dig;
   for(i=1;i<=dig;i++)
      sum+=i;
      cout<<"總和="<<sum<<endl;
      system("PAUSE");
      return 0;
    }
