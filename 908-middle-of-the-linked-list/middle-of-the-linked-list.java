
class Solution {
    public ListNode middleNode(ListNode head) {
	if(head.next == null ) return head;
	ListNode fast = head.next;
	ListNode slow = head;
	while(fast.next !=null && fast.next.next !=null){
		slow=slow.next;
		fast=fast.next.next;
		}
        System.out.println(slow.val);
	return slow.next;
    }
}