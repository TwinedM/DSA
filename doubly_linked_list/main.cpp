#include <bits/stdc++.h>
using namespace std;



class Node{  // singly linked list
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};


class NodeDL{
    public:

    int data;
    NodeDL* next;
    NodeDL* prev;
    public:

    NodeDL(int data1 , NodeDL* next1 , NodeDL* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    NodeDL(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

};


NodeDL* insertattail(NodeDL * head , int k){
    NodeDL* newNode = new NodeDL(k);

    if(head == nullptr){
        return newNode;
    }
    NodeDL * tail = head;
    while(tail != nullptr){
        tail = tail->next;
    }
    tail->next = newNode;
    newNode->prev = tail;
    return head ;
}

NodeDL* deleteattail(NodeDL*head){
    if(head == nullptr) return head;
    if(head->next == nullptr) {
        delete head;
        return NULL;
    }
    NodeDL* tail = head;

    while(tail != nullptr){
        if(tail->next == nullptr){
            tail->prev->next = nullptr;
            delete tail;
            return head;
        }
        tail = tail->next;
    }
}


NodeDL* reverseDLL(NodeDL*head){
    NodeDL* temp = head;
    
    stack<int> st;

    while(temp != nullptr){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;

    while(temp!=nullptr){
        temp->data = st.top();
        st.pop();
        temp = temp-> next;
    }
    return head;
    
}

NodeDL* reverseDLLOptim(NodeDL*head){
    if(head == nullptr || head->next == nullptr) return head;

    NodeDL * curr = head;
    while   (curr!=nullptr){
        NodeDL* temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;

        head = curr;
        curr = temp;
    
    }

    return head;
}
NodeDL* deletekey(NodeDL* head, int target) {
    if (head == nullptr)
        return nullptr;
    NodeDL* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            // deleting head
            if (current == head) {
                head = current->next;
                if (head != nullptr)
                    head->prev = nullptr;
                delete current;
                return head;
            }
            // deleting middle/tail
            current->prev->next = current->next;
            if (current->next != nullptr)
                current->next->prev = current->prev;
            delete current;
            return head;
        }
        current = current->next;
    }
    return head;
}

int main(){

    vector<int> arr = {2, 5, 8, 7};

    deletekey()
    cout << head->data;

}