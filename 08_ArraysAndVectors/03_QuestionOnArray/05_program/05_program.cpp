/*
Ques : Write a program to copy the contents of one array into another in the reverse order.
*/

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(6);
    
    display(v1);
    vector<int> v2(v1.size());
    for(int i=0;i<v2.size();i++){
        int j=(v1.size()-1)-i;
        v2[i]=v1[j];
    }
    display(v2);

}
