/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode sortList(ListNode head) {
       ListNode charan = head;
       ListNode ref = head;
       int count =0;
       while(charan !=null)
       { 
        count++;
        charan = charan.next;
        }
        int[] arr = new int[count];
        int i =0;
        while(ref!=null){
            arr[i++]=ref.val;
            ref = ref.next;
        }
        
	Arrays.sort(arr);
	ListNode result = new ListNode();
	ListNode temp = result;
	int j =0;
	while(j<count){
	temp.next = new ListNode(arr[j]);
    // System.out.println(temp.val);
    j++;
    temp = temp.next;}
    return result.next;
    }
}