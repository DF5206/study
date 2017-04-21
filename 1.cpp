#include<iostream>
using namespace std;
int itoa(int i,char b[])
{
    char a[10];
    int j=0;
    while(1)
    {
        a[j] = i%10 + '0';
        j++;
        i=i/10;
        if(i==0)
            break;
    }
    for(int k=0,n=j-1;k<j;k++,n--){
        b[k]=a[n];
    }
    b[j] = '\0';
}
int main()
{
    int i;
    char b[10];
    cin>>i;
    itoa(i,b);
    cout<<b;
}
