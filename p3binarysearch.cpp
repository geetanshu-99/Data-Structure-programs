#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n;
    int max,min;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=sizeof(a)/sizeof(a[0]);
    max=(k-1);
    min=0;
    int num;
    cin>>num;
    int mid;
    while(max>=min)
    {
        mid=(max+min)/2;
        if(num==a[mid])
        {
            return mid;

        }
        else if(num<a[mid])
            max=(mid-1);
        else if(num>a[mid])
            min=(mid+1);
    }
    cout<<mid;
return 0;
}
