#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        unordered_map<int ,int>freq;

        for(int k=0;k<n;k++)
        {
            freq[arr[k]]++;
        }
        int maxFreq=0;

        for(auto&p:freq)
        {
            if(p.second>maxFreq)
            {
                maxFreq=p.second;
            }
        }
        int maxLen=0;
        for(int l=1;l<=maxFreq;l++)
        {
            int count=0;
            for(auto&p:freq)
            {
                if(p.second>=l)
                {
                    count++;
                }
            }
            int length=count*l;
            if(length>maxLen)
            {
                maxLen=length;
            }
        }
        cout<<maxLen<<endl;
    }
    return 0;
}