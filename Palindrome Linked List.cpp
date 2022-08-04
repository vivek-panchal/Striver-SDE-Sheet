LinkedListNode<int>* getMid(LinkedListNode<int>* head ) {
        LinkedListNode<int>* slow = head;
        LinkedListNode<int>* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    LinkedListNode<int>* reverse(LinkedListNode<int>* head) {
        
        LinkedListNode<int>* curr = head;
        LinkedListNode<int>* prev = NULL;
        LinkedListNode<int>* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        LinkedListNode<int>* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        LinkedListNode<int>* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        LinkedListNode<int>* head1 = head;
        LinkedListNode<int>* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;

}
