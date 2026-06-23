#include <iostream>
using namespace std;
int main(){
//    for(int i=0;i<5;i++){ 
//         for(int k=0;k<i;k++){
//                 cout<<" ";
//             }
//          for(int k=0;k<(5-2*i+4);k++){
//             cout<<'*';
//          }
//           for(int k=0;k<i;k++){
//                 cout<<" ";
// 
    //        }
    // cout<<endl;
    
 //   }
 int space=2*(5-1);

 for(int i=0;i<5;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
        
    }
   

    for(int j=0;j<=space;j++){
       cout<<" ";
     }
     
    for(int j=i;j>=1;j--){
       cout<<j;
        
    }
     cout<<endl;
     space-=2;
}
 }


   