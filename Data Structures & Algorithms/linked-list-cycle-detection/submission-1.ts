/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} head
     * @return {boolean}
     */
    hasCycle(head: ListNode | null): boolean {
        let turty = head;
        let hare = head;

        while (hare && hare.next) {
            turty = turty.next;
            hare = hare.next.next;

            if (turty === hare) {
                return true;
            }
        }
        return false;
    }
}
