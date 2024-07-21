#include<iostream>
using namespace std;
class Solution{
    public:
    long long int findMaxProduct(vector<int> &arr){
        int n=arr.size();
        long long ans=1;
        int mn=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]==0) continue;
            if(arr[i]<0){
                mn=max(mn,arr[0]);
            }
            ans=(ans+arr[i])%mod;
        }
        if(mn<0) return ans/mn;
        return ans;
    }
}
int main(){
    Solution obj;
    long long int ans=ob.findMaxProduct(arr);
    cout<<ans<<endl;


}