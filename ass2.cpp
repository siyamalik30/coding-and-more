//checking for a number is prime or not
#include <iostream>
using namespace std;
int main(){
   
   int n;
   cout<<"enter an num: ";
   cin>>n;
   for(int i=2;i<=n;i++){
      int curr=i;
      bool isPrime=true;
      for(int j=2;j*j<=i;j++){
         if( curr%j ==0){
            isPrime=false;
         }
      }
      if(isPrime){
         cout<<curr<<" ";
      }
   }
   cout<< endl;
   return 0;
}


//----------------- nested loops --------------------
#include <iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=1;i<=n;i++){
      for(int j=4-i+1;j>=1;j--){
         cout<<"*"<<" ";
      }
      cout<<endl;
   }
   return 0;
}


//pyramid pattern
#include <iostream>
using namespace std;
int main(){
   int n=4;
   char alph='A';
   for(int i=1;i<=n;i++){
      int count=1;
      for(int j=1;j<=i;j++){
         cout<<alph<<" ";    //{for character pattern}
         alph++;
         cout<<count<<" ";   //{for counting pattern}
         count++;
      }
      cout<<endl;
   }
   return 0;
}


#include <iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=1;i<=n;i++){
      for(int j=n-i;j>=1;j--){
         cout<<" ";
      }
      for(int j=0;j<i;j++){
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;
}

//diamond pattern..
#include <iostream>
using namespace std;
int main(){
   int n=4;
   for(int i=1;i<=n;i++){
      for(int j=n-i;j>0;j--){
         cout<<" ";
      }
      for(int j=1;j<=2*i-1;j++){
         cout<<"*";
      }
      cout<<endl;
   }
   for(int i=n;i>=1;i--){
      for(int j=1;j<=n-i;j++){
         cout<<" ";
      }
      for(int j=1;j<=2*i-1;j++){
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;
}