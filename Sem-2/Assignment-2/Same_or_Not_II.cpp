/*#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *nxt;
    Node(int val) {
        this->val = val;
        this->nxt = NULL;
    }
};

class myStack {
public:
    Node *top = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node *newNode = new Node(val);
        newNode->nxt = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            return;
        }
        sz--;
        Node *delNode = top;
        top = top->nxt;
        delete delNode;
    }

    int topValue() {
        if (top == NULL) {
            return -1; 
        }
        return top->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }
};

class myQueue {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->nxt = newNode;
        tail = tail->nxt;
    }

    void pop() {
        if (head == NULL) {
            return; 
        }
        sz--;
        Node *delNode = head;
        head = head->nxt;
        delete delNode;

        if (head == NULL) {
            tail = NULL;
        }
    }

    int front() {
        if (head == NULL) {
            return -1; 
        }
        return head->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }
};

string checkOrder(int n, int* stackValues, int* queueValues) {
    myStack stack;
    myQueue queue;

    for (int i = 0; i < n; i++) {
        stack.push(stackValues[i]);
    }

    for (int i = 0; i < n; i++) {
        queue.push(queueValues[i]);
    }

    while (!stack.empty() && !queue.empty()) {
        if (stack.topValue() != queue.front()) {
            return "NO";
        }
        stack.pop();
        queue.pop();
    }

    if (stack.empty() && queue.empty()) {
    return "YES";
}   else {
    return "NO";
}

}

int main() {
    int n, m;
    cin >> n >> m;

    int* stackValues = new int[n];
    int* queueValues = new int[m];

    for (int i = 0; i < n; i++) {
        cin >> stackValues[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> queueValues[i];
    }

    string result = checkOrder(n, stackValues, queueValues);
    cout << result << endl;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (!v.empty()) {
            v.pop_back();
        }
    }

    int top() {
        if (v.empty()) {
            return 0;
        }
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool empty() {
        return v.empty();
    }
};

class myQueue {
public:
    vector<int> q;

    void push(int val) {
        q.push_back(val);
    }

    void pop() {
        if (!q.empty()) {
            q.erase(q.begin());
        }
    }

    int front() {
        if (q.empty()) {
            return 0;
        }
        return q.front(); 
    }

    int size() {
        return q.size();
    }

    bool empty() {
        return q.empty();
    }
};


int main(){

    int n, m;
    cin >> n >> m;

    myStack stack;
    myQueue queue;

    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        stack.push(element);
    }

    for (int i = 0; i < m; i++) {
        int element;
        cin >> element;
        queue.push(element);
    }

    if(n!=m){
        cout<<"NO"<<endl;
    }
    else{

       bool flag = true;

    while (!stack.empty() && !queue.empty()) {
        if (stack.top() != queue.front()) {
            flag = false;
            break;
        }
        stack.pop();
        queue.pop();
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

return 0;
}












#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (!v.empty()) {
            v.pop_back();
        }
    }

    int top() {
        if (v.empty()) {
            return 0;
        }
        return v.back();
    }

    bool empty() {
        return v.empty();
    }
};

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main(){

    int n, m;
    cin >> n >> m;

    myStack stack;
    myQueue queue;

    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        stack.push(element);
    }

    for (int i = 0; i < m; i++) {
        int element;
        cin >> element;
        queue.push(element);
    }

    if(n!=m){
        cout<<"NO"<<endl;
    }
    else{

       bool flag = true;

    while (!stack.empty() && !queue.empty()) {
        if (stack.top() != queue.front()) {
            flag = false;
            break;
        }
        stack.pop();
        queue.pop();
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

return 0;
}