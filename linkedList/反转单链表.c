struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode *previous, *next;

	if (head == NULL) return NULL;

	previous = next = NULL;
	while (head->next) {
		next = head->next;
		head->next = previous;
		previous = head;
		head = next;
	}
	head->next = previous;
	return head;
}