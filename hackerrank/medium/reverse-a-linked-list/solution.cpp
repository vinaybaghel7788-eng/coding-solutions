

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* curr = llist;
    
    while(curr != nullptr){
        SinglyLinkedListNode* next = curr->next;
        
        curr->next = prev;
        
        prev = curr;
        curr = next;
    }
    return prev;
}

