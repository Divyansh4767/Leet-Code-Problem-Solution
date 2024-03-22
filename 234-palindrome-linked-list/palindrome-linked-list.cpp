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
class Solution{
  private:
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    
    ListNode* getReverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(ListNode *head)
    {
        //Your code here
        if(head -> next == NULL){
            return true;
        }
        //Step1: Find Middle
        ListNode* mid = findMiddle(head);
        
        //Step2: Reverse the string after mid
        ListNode* temp = mid -> next;
        mid -> next = getReverse(temp);
        
        //Step3: Compare the string and the reversed string
        ListNode* Head1 = head;
        ListNode* Head2 = mid -> next;
        while(Head2 != NULL){
            if(Head1 -> val != Head2 -> val){
                return false;
            }
            Head1 = Head1 -> next;
            Head2 = Head2 -> next;
        }
        return true;
    }
};