#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int v)
    {
        val = v;
        next = NULL;
        prev = NULL;
    }

};

class myStack
{
public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node * newNode = new Node(v);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev= tail;
        tail = newNode;
       
        return;
    }
    void pop()
    {
        sz--;
        Node * deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
            return;
        }
        tail->next = NULL;
        delete deleteNode;
        return;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0? true : false;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}