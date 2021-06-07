 #include<iostream>
 using namespace std; 
 int swap(int arr[],int i, int j)
 {

 }
 
 int partition(int arr[],int l,int r)
 {
     int pi=arr[r];
     int i=l-1;
     for(int j=l;j<r;j++)
     {
            if(arr[j]>pi) 
            {
                swap(arr[j],i,l);   
            }

     }
 }

 int main()
 {
 

 }