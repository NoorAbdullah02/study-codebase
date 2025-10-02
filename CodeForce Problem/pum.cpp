class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = head;
        int i = 0;
        vector<int>v;
        while(p!=NULL){
            v.push_back(p->val);
            p = p->next;
            i++;
        }
        p = head; i--;
        while (p!=NULL){
            p->val = v[i--];
            p = p->next;
        }
        return head;
    }
};