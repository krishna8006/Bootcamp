//-----Print all the subarrays


#include<iostream>
using namespace std;
// int main(){
//     int start,end;
//     int n=4;
//     int arr[]={5,4,6,7};
//     for(start=0;start<n;start++){
//         for(end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
//              cout<<arr[i]<<" ";
//             }
//             cout<<endl;

//         }
//     }
//     return 0;
// }

//-----Max sum of subarray

// int main(){
//     int start,end,maxsum;
//     int n=4;
//     int arr[]={5,4,6,7};
//     for(start=0;start<n;start++){
//         for(end=start;end<n;end++){
//             for(int i=start;i<=end;i++){
//                 maxsum=arr[i];
//              cout<<maxsum<<" ";
//             }
//             cout<<endl;

//         }
//     }
//     return 0;
// }

//sort 0,1 and 2

// int main(){
//     int count=0,n,i;
//     int arr[]={0,1,0,2,0,1,2,2,0};
//     for(i=0;i<n;i++){
//         if(arr[i]==0){
//             count=arr[i];
//             }
//             else if(arr[i]==1){
//                 count=arr[i];
//                 }
//                 else if(arr[i]==2){
//                     count=arr[i];
//                 }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// int main() {
//     int arr[]={2,0,2,1,1,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int count0=0,count1=0,count2=0;

//     for (int i=0;i<n;i++){
//         if(arr[i]==0)
//             count0++;
//         else if(arr[i]==1)
//             count1++;
//         else
//             count2++;
//     }

//     int index=0;

//     while(count0--){
//         arr[index++]=0;
//     }

//     while(count1--){
//         arr[index++]=1;
//     }

//     while(count2--){
//         arr[index++]=2;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

//-----Union of array
// int main(){
//     int i,n1,n2;
//     int arr1[n1]={5,4,3,2,1};
//     int arr2[n2]={1,2,9,8,7,6};
//     int result[n1+n2];
//     for(i=0;i<n1;i++){
//     result[].insert(arr1[i]);
//     }
//     for(i=0;i<n2;i++){
//     result[].insert(arr2[i]);
//     }
//     cout<<result[i]<<" "<<endl;
//     return 0;
// }

//-----bitwise (set)
// int main(){
//     int a=7;
//     int b=11;
//     int c=a&b;
//     cout<<c<<endl;
//     return 0;
// }

//-----Length of maximum odd&even in an array
// int main(){
//     int i,j,length=1;
//     int n=8;
//     int arr[]={5,3,1,2,7,4,8,9};
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//            if(arr[j-1]%2!=0 && arr[j]%2==0 || arr[j-1]%2==0 && arr[j]%2!=0){
//             length++;
//            }
//             // else continue;
//            }  
//     }
//     cout<<length<<endl;
//     return 0;
// }

//-----Find Equillibrium point in array
int main(){
    int i,j,leftsum,rightsum;
    int n=5;
    int arr[]={2,3,-1,8,4};
    for(j)
}