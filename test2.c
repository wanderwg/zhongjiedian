//返回一个单链表的中间节点，若中间节点有两个，则返回第二个
//使用快慢指针，让快指针每次走两步，慢指针每次走一步
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode Node;
struct ListNode* middleNode(struct ListNode* head) {
	Node* Slow = head;
	Node* Fast = head;
	while (Fast) {
		if (Fast->next == NULL)
			break;
		Slow = Slow->next;
		Fast = Fast->next->next;
	}
	return Slow;
}

