//Longest Alternating Subsequence
#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
		int alternatingMaxLength(vector<int>& arr){
			int n=arr.size();
			if(n==1) return 1;
			if(n==2) return arr[0]==arr[1] ? 1:2;
			
			int ans=0;
			int prev=arr[0];
			for(int i=1;i<n-1;i++){
				if((prev<arr[i] && arr[i]>arr[i+1]) || (prev>arr[i] && arr[i]<arr[i+1])){
					ans++;
					prev=arr[i];
				}
				
			}
			return ans++;
		}
};
int main(){
	Solution solution;
	vector<int> arr={1,5,4,9,2,5,1,6,8};
	int result=solution.alternatingMaxLength(arr);
	cout<<"The maximum length of alternating subarry is:"<<result<<endl;
	return 0;
}