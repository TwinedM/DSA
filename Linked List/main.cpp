#include <bits/stdc++.h>
using namespace std;


// create node
class Node  {
    public:
    int data;  // memebers
    Node* next;

    public:
    Node(int data1 , Node*next1){ // constructor
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){  // for tail
        data = data1;
        next = nullptr;
    }

};

Node* convert2ArrLL(vector<int>&arr){
    Node* head = new Node(arr[0]);  // the head has to have an obj in heap  and this stores address
    Node* mover = head; //the address of head is stored in mover
    int i;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LengthofLL(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
        cnt ++;
    }
    return cnt;

}

Node* deletehead(Node* head){
    if (head == nullptr ) return head;
    else{
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
}

Node *remove_tail(Node* head){
    if(head == NULL || head -> next == NULL) return NULL;

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp;
    temp -> next = nullptr;

    return head;
}

Node* del_element(Node* head , int k){
    if (head == NULL) return head;
    if (k == 1){
        Node * temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node*temp = head;
    Node*prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev -> next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}







// create linked list from array using node


int main(){
    vector <int> arr = {2   ,3,4,5};
    Node* head = convert2ArrLL(arr);
    

    return 0;
}