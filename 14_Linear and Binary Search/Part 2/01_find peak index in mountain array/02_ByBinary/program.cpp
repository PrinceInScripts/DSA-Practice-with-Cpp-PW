/*
Ques : Peak index in mountain array
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,3,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    int lo=0;
    int hi=n-1;
    bool flag=false;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid<<endl;
            flag=true;
            break;
        }else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
            lo=mid+1;
        } else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
            hi=mid+1;
        }
    }
    if(!flag) cout<<-1<<endl;
    
}