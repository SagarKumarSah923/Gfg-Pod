//#include<iostream>
//using namespace std;
//class solutin{
//	public:
//	void printArr(int n,int arr[]){
//	for(int i=0;i<n;i++)cout<<arr[i]<<"  ";
//	cout<<endl;
//}
//    void settoZero(int n,int arr[]){
//    		for(int i=0;i<n;i++)
//    			arr[i]=0;
//    		}
//	void settoZero(int n ,int arr){
//	for(int i=0;i<n;i++)arr[i]=arr[i]^i;
//};
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int arr[n];
//		for(int i=0;i<n;i++){
//			cin>>arr[i];
//		}
//		Solution ob;
//		obj.xor(n,arr);
//		obj.printArr(n,arr);
//		obj.settoZero(n,arr);
//		obj.printArr(n,arr);
//	}
//	return 0;
//};

#include<iostream>
using namespace std;

class Solution {
public:
    void printArr(int n, int arr[]) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << "  ";
        cout << endl;
    }

    void xorOperation(int n, int arr[]) {
        for (int i = 0; i < n; i++)
            arr[i] = arr[i] ^ i;
    }

    void setToZero(int n, int arr[]) {
        for (int i = 0; i < n; i++)
            arr[i] = 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.xorOperation(n, arr);
        obj.printArr(n, arr);
        obj.setToZero(n, arr);
        obj.printArr(n, arr);
    }
    return 0;
}

