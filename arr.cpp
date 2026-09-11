/*#include <iostream>
using namespace std;
int main(){
   int arr[]={90,41,83,95,1};
   int n=sizeof(arr)/sizeof(int);
   int st=0,end=n-1;
   while(st<end){
   //swap
   int temp;
   temp=arr[st];
   arr[st]=arr[end];
   arr[end]=temp;

   st++;
   end--;
   } 
   for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
   }
   
   return 0;
}*/

//printing all subarrays
// #include <iostream>
// using namespace std;
// void printSubarr(int *arr ,int n){
//    for(int start=0;start<n ;start++){
//       for(int end =start;end<n;end++){
//          for(int i=start;i<=end;i++){
//             cout <<arr[i];
//          }
//          cout<<",";
//       }
//       cout<< endl;
//    }
// }
// int main(){
//    int arr[]={1,2,3,4,5};
//    int n=sizeof(arr)/sizeof(int);
//    printSubarr(arr,n);
//    return 0;
// }


//bubble short.....
// #include <iostream>
// using namespace std;
// void bubbleShort(int arr[] ,int n){
//    for(int i=0;i<n-1;i++){
//       for( int j=0;j<n-i-1;j++){
//          if(arr[j]>arr[j+1]){
//             int temp;
//             temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp; 
//          }
//       }
//    }
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<",";
//    }
  
// }
// int main(){
//    int arr[] ={6,3,5,1,2,4};
//    int n=6;
//    bubbleShort(arr,n);
//    return 0;
   
// }

#include <iostream>
using namespace std;
void toLower(char word[],int n){
   for(int i=0;i<n;i++){
      char ch = word[i];
      if(ch>='a'&&ch<='z'){
         continue;
      }else{
         word[i]= ch - 'A' + 'a';
      }
   }
}
int main(){
   char name[]="SiYa";
   int n=4;
   toLower(name,n);
   cout<< name ;
   return 0;
}