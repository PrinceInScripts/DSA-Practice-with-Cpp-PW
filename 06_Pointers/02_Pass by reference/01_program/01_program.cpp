
#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x,y;

    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;


    cout<<"Before swap ";
    cout<<"x : "<<x<<" , "<<" y : "<<y<<endl;
    // swap(&x,&y);
    int *a = &x;
    int *b = &y;
    swap(a,b);
    cout<<"After swap ";
    cout<<"x : "<<x<<" , "<<" y : "<<y<<endl;
    
}