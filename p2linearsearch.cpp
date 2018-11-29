#include<iostream>
using namespace std;
int  main()
{
    int a[20];
    int n;
    int num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number you want to search"<<"\n";
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
            cout<<"the value of"<<num<<" at "<<i;

    }

        return -1;
}
