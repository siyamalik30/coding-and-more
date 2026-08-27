//....question 1.....
#include <iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
         cout<<" ";
      }
      for(int j=1;j<=n;j++){
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;
}

//pattern ques..
#include <iostream>
using namespace std;
int main(){
   int n=5;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
         cout<<" ";
      }
      for(int j=i;j>=1;j--){
         cout<<j;
      }
      for(int j=2;j<=i;j++){
         cout<< j;
      }
      cout<<endl;
   }
}
//finding a num is divisible by 3 & 5 or neither..
#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter a num :";
   cin>> n;
   int a=n%3;
   int b=n%5;
   int c=n%15;
   if(c==0){
      cout<<"num will be divisible by both 3 and 5.";
      
   }
   else if(a==0){
      cout<<"num is divisible by 3 only.";

   }
   else if(b==0){
      cout<<"num is divisible by 5 only.";
   }else{
      cout<<"num is divisible by neither 3 nor 5.";
   }
   return 0;
} 


//finding num of digits...
#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter a num: ";
   cin>>n;
   int digit=0;
   int num =n;
   while(num >0){
      digit++;
      num = num/10;

   }
   cout<<"digits ="<<digit;
   return 0;
}

//reversing a number..
#include <iostream>
using namespace std;
int main(){
   int n=78403;
   int result=0;
   while(n>0){
      int last_dig = n%10;
      result = result*10+ last_dig;
      n =n/10;
   }
   cout<<"reverse number is: "<<result;
   return 0;
}