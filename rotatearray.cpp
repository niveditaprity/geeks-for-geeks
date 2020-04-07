#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
     int n,i,j;
     cin>>n;
     int arr[n][n],ptr[n][n];
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             ptr[i][j]=arr[n-1-j][i];
         }
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             cout<<ptr[i][j]<<" ";
         }
     }
     cout<<endl;
     }
     //code
	return 0;
}
