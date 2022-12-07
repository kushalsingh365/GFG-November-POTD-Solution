class Solution{ 
public:
    void reorderList(Node* head) {
        // Your code here
        
        int len =0 ;
        Node* temp =  head;
        stack<Node*> s;
        
        while(temp != NULL){
            s.push(temp);
            temp = temp ->next;
            len++;
            
        }
        
        len = len/2;
        
        while(    head != NULL  && len>0 ){
                Node *awe =  s.top();
                //cout<<awe->data<<" ";
                s.pop();
                awe->next = head->next;
                head->next = awe;
                head = head->next->next;
                len--;
                
        }
        
        head->next = NULL;
    }
};
