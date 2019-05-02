//����һ����������м�ڵ㣬���м�ڵ����������򷵻صڶ���
//ʹ�ÿ���ָ�룬�ÿ�ָ��ÿ������������ָ��ÿ����һ��
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

