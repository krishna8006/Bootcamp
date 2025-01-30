//-----Binary search

// #include<iostream>
// using namespace std;
// int binary(int arr[],int start,int end,int key){
//     int mid=(start+end)/2
//     if(key==mid){
//         return key;
//     }else if(key<mid){
//         end=mid-1;
//         start=start;
//         return binary(arr,start,end,key);
//     }else{
//         start=mid+1;
//         return binary(arr,start,end,key);
//     }
// }
// int main (){
//     int arr[]={1,2,3,4,5,6,7}
//     int num=7;
//     cout<<binary(arr,0,num-1,6);
//     return 0;
// }

//-----Second largest

// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int arr[]={3,5,7,9,2,8,10};
//     int largest=arr[0],secondlargest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];    
//         }else if (arr[i]>secondlargest&&secondlargest<largest){
//             secondlargest=arr[i];
//         }
//     }
//     cout<<largest<<endl;
//     cout<<secondlargest<<endl;
// }

//-----Reverse Array

#include<iostream>
using namespace std;
int reverse(int arr[],int num){
    int start,end=num-1;
    
    }
int main(){
    int num=7
    int arr[]={3,5,7,9,2,8,10};
    cout<<reverse(arr[],num);
}