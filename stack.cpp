#include <iostream>
using namespace std;
int main(){
int arr[]={4,1,5,2,3};
int i;
for(i=0;i<5;i++){
    for(int j=0;j<5;j++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    cout<<arr[i];
}
} 
}
    

    

