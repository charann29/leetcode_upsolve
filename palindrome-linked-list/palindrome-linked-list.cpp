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
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(ListNode* head) {
    // Edge case: an empty list or a single node is considered a palindrome
    if (head == nullptr || head->next == nullptr) {
        return true;
    }

    // Find the middle of the list
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    ListNode* secondHalf = reverseList(slow->next);

    // Compare the first half with the reversed second half
    ListNode* p1 = head;
    ListNode* p2 = secondHalf;
    while (p2 != nullptr) {
        if (p1->val != p2->val) {
            return false;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    // Restore the list by reversing the reversed second half
    slow->next = reverseList(secondHalf);

    return true;
}
};