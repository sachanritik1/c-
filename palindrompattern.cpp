#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <=n-i; j++)
        {
            /* code */
            cout<<"  ";
        }
        for (int j = i; j >=1; j--)
        {
            /* code */
            cout<<j<<" ";
        }
         for (int j = 2; j <=i; j++)
        {
            /* code */
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}
