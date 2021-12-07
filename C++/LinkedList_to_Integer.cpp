int solve(LLNode* node) {
    int num = 0;
    while (node != NULL) {
        num = num * 2 + node->val;
        node = node->next;
    }
    return num;
}
