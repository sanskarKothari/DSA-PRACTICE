class Solution {
  public:
    void printList(Node* head) {

        if(head == nullptr)
            return;

        Node* temp = head;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while(temp != head);
    }
};