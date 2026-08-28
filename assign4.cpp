//finding factorial..
#include <iostream>
using namespace std;
int fact(int N){
   int fact=1;
   for(int i=1;i<=N;i++){
      fact*=i;
   }
   return fact;
}
int main(){
   cout<<"factorial is "<<fact(4)<<endl;
   return 0;
}

//checking a num is palindrome or not
#include <iostream>
using namespace std;
int reverse(int n){
   int result=0;
   while(n>0){
      int last_dig = n%10;
      result = result*10+ last_dig;
      n=n/10;
   }
   
   return result;
}
bool isPalindrome(int num){
   int revr =reverse(num);
   return num == revr;
}
int main(){
   cout<<isPalindrome(5005)<<endl;
   cout<<isPalindrome(9090)<<endl;
   cout<<isPalindrome(1661)<<endl;
   return 0;
}

//square formula
#include<iostream>
using namespace std;
int square(int a ,int b){
   int formula= (a*a) +(b*b )+ 2*(a*b);
   return formula;
   
}
int main(){
   cout<< square(5,10)<<endl;
   return 0;
}


//returning next character..
#include <iostream>
using namespace std;
char nextCh(char ch){
   if (ch =='z'){
      return 'a';
   }else{
      return ch +1;
   }
   
}
int main(){
   cout<<nextCh('b')<<endl;
   cout<<nextCh('j')<<endl;
   cout<<nextCh('z')<<endl;
   cout<< nextCh('p')<<endl;
   return 0;
}