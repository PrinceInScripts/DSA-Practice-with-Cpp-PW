/*
Ques : Column wise printing
*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the number of rows : ";
    cin >> m;
    int n;
    cout << "Enter the number of columns : ";
    cin >> n;

    int a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<a[j][i]<<" ";
      }
    }
}