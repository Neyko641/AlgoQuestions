LLNode* mergeSort(LLNode* list1, LLNode* list2) {
 LLNode* dummyNode = new LLNode(-1);
    LLNode* ptr3  = dummyNode;
    
    while(list1 != NULL && list2 != NULL)
    {
        if(list1->val < list2->val){
            ptr3->next = list1;
            list1 = list1->next;
        }
        else {
            ptr3->next = list2;
            list2 = list2->next;
        }   
        ptr3 = ptr3->next;
    }
    while (list1!=NULL){
        ptr3->next = list1;
        list1 = list1->next;
        ptr3 = ptr3->next;
    }
    while(list2!=NULL){
        ptr3->next = list2;
        list2 = list2->next;
        ptr3 = ptr3->next;
    }
    return dummyNode->next; 
}

LLNode* sortList(LLNode* head) {
     if(!head || !head->next) {
        return head;
    }
        LLNode* slowPtr=head, *fastPtr=head;
        while(fastPtr->next != NULL && fastPtr->next->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
    LLNode* list2 = slowPtr->next;
    slowPtr->next=NULL;
    LLNode* list1=head;
    list1 = sortList(list1);
    list2 = sortList(list2);
    LLNode* RL = mergeSort(list1,list2);
    return RL;
}

LLNode* solve(LLNode* node) {
    return sortList(node);
}
