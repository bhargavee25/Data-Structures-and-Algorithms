/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void helper(ListNode* head, int x){
        ListNode* nn=new ListNode(x);
        if (head == NULL){
            head = nn;
            return;
        }
        ListNode* temp = head;
        while(temp->next != NULL){
            temp=temp->next;
            temp->next=nn;
            return;
        }
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k==0){
            return head;
        }
        ListNode* temp = head;
        int length=1;
        while(temp->next != NULL){
            ++length;
            temp=temp->next;
        }
        temp->next=head;
        k=k%length;
        int end=length-k;
        while(end--){
            temp=temp->next;
        }
        head = temp->next;
        temp->next=NULL;
        return head;
    }
};
