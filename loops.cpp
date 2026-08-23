//simple star question
#include <iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=1;i<=n;i++){
      // cout<<"Apna College."<<endl;
      // cout<<i<<endl;
      for(int j=1;j<=n; j++){
         cout<<"*"<<" ";
      }
      cout<<endl;
   }
   return 0;
}

//printing reverse count...
#include <iostream>
using namespace std;
int main(){
   int n=10;
   for (int i=n;i>=1;i--){
      cout<<i<<endl;
   }
   return 0;
}



//finding sum of the digits of a number..
#include <iostream>
using namespace std;
int main(){
   int n=49310;
   int sum=0;

   while(n>0){
      int num = n%10;
      cout<<num <<" ";     //( to print reverse)
      sum+=num;           //(to find sum of the  digits)
      if(num%2!=0){      //(to find sum of odd values)
         sum += num;
      }
      n = n/10;
   }
   cout<<"sum of digits in n: "<< sum;    //(for sum only)
   return 0;
}
