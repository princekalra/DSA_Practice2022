//Linked List Random Node
class Solution {
public:
    int len=0;
    ListNode* Head;
    Solution(ListNode* head) {
        Head = head;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
    }
    
    int getRandom() {
        int randIndex = rand()%len;
        ListNode* temp = Head;
        for(int i=0;i<randIndex;i++){
            temp = temp->next;
        }
        return temp->val;
    }
};