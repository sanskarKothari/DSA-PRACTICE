/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
public:
    Node *insertInMiddle(Node *head, int x) {
        Node* newNode = new Node(x);

        if (head == nullptr)
            return newNode;

        Node *slow = head, *fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        newNode->next = slow->next;
        slow->next = newNode;

        return head;
    }
};