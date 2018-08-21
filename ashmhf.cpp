
#include <cmath>
#include <cstdio>
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t;
    long long int n,i,j,k,ii,sum;
    cin>>t;
    vector<long long>farwardsum(100002),backwardsum(100002),arr1(100002),arr2(100002),ans(100002);
    vector<long long>br;
    for(ii=0;ii<t;ii++)
    {
        cin>>n;
        sum=0;
    farwardsum.clear();
        backwardsum.clear();
        arr1.clear();
        arr2.clear();
        ans.clear();
        long long int sum=0,p;
        for(i=0;i<n;i++)
        {
            cin>>p;
            arr1.push_back(p);
            arr2.push_back(p);
            farwardsum.push_back(0);
            backwardsum.push_back(0);
            sum+=arr1[i];
        }
      sort(arr1.begin(),arr1.end());
        for(i=0;i<n;i++){
            farwardsum[i]=arr1[i];
            backwardsum[i]=arr1[i];
        }
      for(i=1;i<n;i++)
      {
          farwardsum[i]=farwardsum[i]+farwardsum[i-1];
      }
        for(i=n-2;i>=0;i--)
        {
            backwardsum[i]=backwardsum[i]+backwardsum[i+1];
        }
        long long t1,t2;
        ans[0]=abs((sum-arr1[0])-(n-1)*arr1[0]);
        ans[n-1]=abs(((n-1)*arr1[n-1])-(sum-arr1[n-1]));
        long long left,right;
        for(i=1;i<n-1;i++)
        {
            left = i+1;
            right = n-i;
            ans[i] = ((left-right)*arr1[i])-farwardsum[i-1]+backwardsum[i+1];
        }
        long long mini = ans[0],index=0;
        for(i=0;i<n;i++)
        {
    
            if(mini>ans[i]){
                
                mini=ans[i];
                index=i;
            }
        }
        br.clear();
        for(i=0;i<n;i++)
        {

            if(ans[i]==mini)
            {
                br.push_back(arr1[i]);
            }
        }
        long long ind = n;
      for(i=0;i<br.size();i++)
      {
          long long ci = br[i];
          for(j=0;j<n;j++)
          {
              if(ci==arr2[j]&&ind>j)
              {
                  ind = j;
              }
          }
      }
       cout<<"Case "<<ii+1<<": "<<ind+1<<endl;
    }
    return 0;
}
