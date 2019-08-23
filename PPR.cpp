#include <iostream>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        long long r=5,li;
        long long m=1;
        int l=1;
        if(n<5)
        {
            li=n; 
        }
        else{
        while(r<n)
        {
            m=m*2;
            r+=5*m;
        }
        r=r-5*m;
        long long p= n-r; 
        li = p/m;
        if(li*m-p<0)
        {
            li++;
        }
        }
       if(li==1)
       {
        cout<<"Asad"<<endl;
        }
        else if(li==2)
            cout<<"Foyj"<<endl;
        else if(li==3)
        {
            cout<<"Juwel"<<endl;
        }
        else if(li==4)
        {
            cout<<"Mijan"<<endl;
        }
        else
        {
            cout<<"Tanmay"<<endl;
        }
    }
    return 0;
}