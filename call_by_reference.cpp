#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    swap(&n,&m);
    cout<<n<<endl<<m;
    return 0;
}