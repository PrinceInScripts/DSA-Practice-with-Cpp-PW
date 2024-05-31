
/*
Permutations
Finding all permutations of an string given all elements 
of the string are unique
*/

#include<iostream>
using namespace std;
void permutation(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;

    }
    
    for(int i=0;i<original.size();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(ans+ch,left+right);
    }
}
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    permutation("",s); 

}