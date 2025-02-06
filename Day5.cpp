//-----Move all zeros to end in an array

// #include<iostream>
// using namespace std;
// int i;int j;int temp;
// for(i=0;i<n;i++){
//     if(arr[i]!=0){
//     temp[j]=arr[i]
//     }
// }

// int main(){
//     int arr[]={4,5,0,8,7,0,9,10,0};

// }

//-----Largest element in an array

/

//-----Sum of element in an array

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int sum=0;
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     for(i=0;i<n;i++)
//     sum=sum+arr[i];
//     cout<<"Sum:"<<sum<<endl;
//     return 0;
// }

//-----Average of sum in an array

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int sum=0;int average;
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<n;i++)
//     sum=sum+arr[i];
//     average=sum/n;
//     cout<<"Average:"<<average<<endl;
//     return 0;
// }

//-----Linear Search

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[],i,start,end,key;

// }

//Second largest in an array


#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={3,5,7,9,2,8,10};
    int largest=arr[0],secondlargest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];    
        }else if (arr[i]>secondlargest&&secondlargest<largest){
            secondlargest=arr[i];
        }
    }
    cout<<largest<<endl;
    cout<<secondlargest<<endl;
}