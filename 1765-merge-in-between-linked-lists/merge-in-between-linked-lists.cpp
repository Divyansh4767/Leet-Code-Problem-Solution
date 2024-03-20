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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* temp = list1;
        int count = 0;

        while(count < a-1){
            count++;
            temp = temp -> next;
        }
        ListNode* front = temp;

        while(count < b+1){
            count++;
            temp = temp -> next;
        }
        ListNode* rear = temp;
        ListNode* secondHead = list2;
        ListNode* secondTail = list2;

        while(secondTail -> next != NULL){
            secondTail = secondTail -> next;
        }
        front -> next = secondHead;
        secondTail -> next = rear;
        return list1;
    }
};