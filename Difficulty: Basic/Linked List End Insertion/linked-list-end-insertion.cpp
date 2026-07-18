/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
public:
    Node *insertAtEnd(Node *head, int x) {

        Node* k = new Node(x);

        if (head == NULL)
            return k;

        Node* s = head;

        while (s->next) {
            s = s->next;
        }

        s->next = k;

        return head;
    }
};