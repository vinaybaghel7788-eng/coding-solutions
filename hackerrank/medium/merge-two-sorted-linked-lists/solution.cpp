

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1 == nullptr)
    return head2;
    
    if(head2 == nullptr)
    return head1;
    
    SinglyLinkedListNode* head =nullptr;
    SinglyLinkedListNode* tail =nullptr;
    
    if(head1->data <= head2->data) {
        head = head1;
        head1 = head1->next;
    } else{
        head = head2;
        head2 = head2->next;
    }
    tail = head;
    
    while(head1 != nullptr && head2 != nullptr) {
        if(head1->data <= head2->data ){
            tail->next = head1;
            head1 = head1->next;
        } else{
            tail->next = head2;
            head2 = head2->next;
        }
        
        tail = tail ->next;
    }
    if(head1 != nullptr)
        tail->next = head1;
    else 
        tail->next = head2;
    
    return head;
    


}

