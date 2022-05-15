
#include<iostream>
using namespace std;

int main() {
    int a[100],b[100],c[100],I,n,J=0,F;
    cin>>n;
    for (I=0;I<n;I++)
        cin>>a[I]; 

    for (I=0;I<n;I++) 
        cin>>b[I];
    F = n-1;
    for (I=0;I<n;I++) {
        c[J]=a[I];
        J++;
        c[J]=b[F];
        J++;
        F--; }     

    for (I=0;I<n*2;I++)
        cout<<c[I]<<" "; 
    cout<<endl;

    return (0); 
}