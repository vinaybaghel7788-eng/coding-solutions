

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if(position == 0) {
        SinglyLinkedListNode* temp =llist;
        llist = llist->next;
        delete temp;
        return llist;
    }
    SinglyLinkedListNode*temp = llist;
    for(int i=0; i<position -1; i++) {
        temp = temp->next;
        
        
    }
    SinglyLinkedListNode*del = temp->next;
    
    temp->next =del->next;
    delete del;
    
    return llist;

}

