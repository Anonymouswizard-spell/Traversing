#include<iostream>
//traversing triangle
using namespace std;
int main()
{
    int n;//this is a new comment
    cout<<"enter number of columns"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";

            }else
            {
            cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}