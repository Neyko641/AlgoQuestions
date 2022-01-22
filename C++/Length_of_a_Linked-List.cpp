/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
// start the counter at 1 as we are to assume that if a linked list exists,
//the first node also exists
    auto count = 1;
  //if it doesn't exist return 0;
    if(!node) {
        return 0;
    } 
    while(node->next != NULL) {
        //iterate over it and switch to the next one until its empty
        node = node->next;
        //increment count.
        count++;
    }
    return count;
}
