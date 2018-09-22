#include<bits/stdc++.h>
using namespace std;
#define MAX 1010

int arr[MAX];
int num_stamps,num_friends;

bool wayToSort(int i, int j) { return i > j; }

int main()
{
    int tc,i,j=0;
    cin>>tc;
    while(tc--)
    {
        j++;
        int index;
        cin>>num_stamps>>num_friends;

        for(i=0;i<num_friends;i++)
            cin>>arr[i];

        sort(arr,arr+num_friends,wayToSort);

        long long int sum=0;
        bool flag=false;

        for(i=0;i<num_friends;i++)
        {
            if(sum>=num_stamps)
            {
                flag=true;
                index=i;
                break;
            }
            sum+=arr[i];
        }

        if(sum>=num_stamps)
        {
            flag=true;
            index=i;
        }

        cout<<"Scenario #"<<j<<":\n";

        if(flag)
            cout<<index<<endl<<endl;
        else
            cout<<"impossible"<<endl<<endl;
    }
    return 0;

}