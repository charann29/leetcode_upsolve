public class Solution {
    public boolean hasCycle(ListNode head) {
	
	if(head ==null || head.next==null)return false;
	ListNode slow = head, fast=head.next;
	while( fast.next!=null && fast.next.next !=null ){
		slow = slow.next;
        	fast = fast.next.next;
		if(fast==slow)return true;
	}
    return false;

}}