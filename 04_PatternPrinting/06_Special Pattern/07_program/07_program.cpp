/*
Q19. Print the following pattern: 
1

1 2 1

1 2 3 2 1

1 2 3 4 3 2 1

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nsp=n-1,nst=1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=nsp;j++){
         cout<<"  ";
       }
       nsp--;
       
       for(int k=1;k<=nst;k++){
        cout<<"* ";
       }
       nst+=2;


       cout<<endl;
    }
    int a=nst-4;
    for(int i=1;i<=n-1;i++){
        for(int j=i;j>=1;j--){
               cout<<"  ";
        }
        
        for(int k=1;k<=a;k++){
            cout<<"* ";
        }
        a-=2;
        
        cout<<endl;
    }
   

}