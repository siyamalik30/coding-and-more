//finding leap year or not.
#include <iostream>
using namespace std;
int main(){
   int year;
   cout<<"enter a year : ";
   cin>> year;
   if(year%400==0){
      cout<<year <<"is an leap year.";
   }
   else if(year%100==0){
      cout<<"NOT a leap year.";
   }   
   else if(year%4==0){
      cout<<year<<" is a leap year."<<endl;
   }else{
      cout<<year<<" is not a leap year."<<endl;
   }
   return 0;
}




//checking for Armstrong number 
#include <iostream>
using namespace std;
int main(){
   int n;
   cout <<"enter a number(3 digit) : ";
   cin>> n;
   int a=(n%10);
   int b = (n%100);
   int c= b/10;
   int e = n%1000;
   int d =e/100;
   int cube = (a*a*a)+(c*c*c)+(d*d*d);
   if(cube==n){
      cout<< n<<" is an armstrong number. ";
   }else{
      cout<<n<<" is not an armstrong number.";
   }
   
}