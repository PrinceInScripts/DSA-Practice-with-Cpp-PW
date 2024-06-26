

/*
Ques : Given a sorted array of non-negative 
distinct integers, find the smallest missing 
non-negative element in it
*/

#include<iostream>
using namespace std;
int main(){
    int nums[]={0,1,2,3,4,8,9};
    int n=sizeof(nums)/sizeof(nums[0]);

   int lo=0;
   int hi=n-1;
   int ans=-1;
   
   while(lo<=hi){
    int mid=lo+(hi-lo)/2;

    if(nums[mid]==mid) lo=mid+1;
    else{
        ans=mid;
        hi=mid-1;
    }
   }

   cout<<ans;
}