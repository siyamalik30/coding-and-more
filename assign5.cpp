//nested loops
#include <iostream>
using namespace std;
int main(){
   int n=5;
   for(int i=n;i>=1;i--){
      for(int j=1;j<=i;j++){
         cout<<j<<" ";
      }
      cout<<endl;
   }
   return 0;
}



#include <iostream>
using namespace std;
int main(){
   int x=10;
   if(x>5){
      if(x<20){
         cout<<"A";
      }else{
         cout<<"B";
      }

   }
   int n=5;
   int count=1;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         cout<<count<<" ";
         count++;
      }
      cout<<endl;
   }
   return 0;
}

#include <iostream>
#include <climits>
using namespace std;
int main(){
   int nums[]={20,19,1,0,9,82,51,83,4};
   int size=9;
   int smallest = INT_MAX;
   int smallest_index =-1;
   int i;
   for( i=0;i<size;i++){
       if(smallest>nums[i]){
         smallest = nums[i];
         smallest_index = i;
       }
   }
   cout<<"smallest value is "<<smallest<<" at index : "<< smallest_index;
   return 0;
}


// pass by referance by reference variable...
#include <iostream>
using namespace std;
int main(){
  int a;
  int * ptr;
  a = 7;
  ptr = &a;
  cout<< * ptr ;
  return 0;
}



#include <iostream>
using namespace std;
void multby2(int &a,int &b, int &c){
   a*=2;
   b*=2;
   c*=2;
}
int main (){
  int x=1,y=2,z=3;
  multby2(x,y,z);
  cout<<x<<y<<z;
  return 0;

}