
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode temp = head;
	Set<Integer> s = new LinkedHashSet<>();
	while (temp!=null){
		s.add(temp.val);
		temp = temp.next;
		}
	ListNode result = new ListNode();
	ListNode x = result;
	for( int charan : s){
		x.next = new ListNode(charan);
		x = x.next;
    }
	return result.next;
}
}