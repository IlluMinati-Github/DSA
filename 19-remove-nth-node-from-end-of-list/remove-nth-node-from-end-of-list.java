class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ArrayList<Integer> list = new ArrayList<>();
        ListNode temp = head;

        while (temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }

        int removeIndex = list.size() - n;

        ArrayList<Integer> list1 = new ArrayList<>();
        for (int i = 0; i < list.size(); i++) {
            if (i != removeIndex) {
                list1.add(list.get(i));
            }
        }

        if (list1.size() == 0) return null;

        ListNode newHead = new ListNode(list1.get(0));
        ListNode curr = newHead;
        for (int i = 1; i < list1.size(); i++) {
            curr.next = new ListNode(list1.get(i));
            curr = curr.next;
        }

        return newHead;
    }
}
