#include<iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    bool flag = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0) {
                for(int k=0;k<m;k++){
                    arr[k][j] = 0;
                }
                for(int s=0;s<n;s++){
                    arr[i][s] = 0;
                }
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    cout<<"After the changes :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}