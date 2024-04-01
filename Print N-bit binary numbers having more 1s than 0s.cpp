//User function Template for C++

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> temp;
        while(st.size()){
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
         while(temp.size()){
            st.push(temp.top());
            temp.pop();
        }
        return st;
    }
};
