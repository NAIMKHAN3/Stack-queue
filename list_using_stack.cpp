#include<bits/stdc++.h>
using namespace std;

class myStack {
    public:
    list<int> vec;
    void push(int v){
        vec.push_back(v);
        return;
    }
    void pop(){
        vec.pop_back();
        return;
    }
    int top(){
       return vec.back();
    }
    int size(){
        return vec.size();
    }
    bool empty(){
        return vec.empty();
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
     int v;
     cin >> v;
     st.push(v);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}