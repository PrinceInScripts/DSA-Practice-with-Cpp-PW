
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}