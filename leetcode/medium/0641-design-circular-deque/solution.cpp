struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
node *front,*rear;
class MyCircularDeque {
public:
    int SIZE;
    int current;
    MyCircularDeque(int k) {
        front=NULL;
        rear=NULL;
        SIZE=k;
        current=0;
    }
    
    bool insertFront(int value) {
        if(current==SIZE)
        {
            return false;
        }
        node *p;
        p=new node;
        p->data=value;
        p->prev=NULL;
        p->next=front;
        if(front!=NULL)
        {
            front->prev=p;
        }
        else
        {
            rear=p;
        }
        front=p;
        current++;
        return true;
    }
    
    bool insertLast(int value) {
        if(current==SIZE)
        {
            return false;
        }
        node *p;
        p=new node;
        p->data=value;
        p->next=NULL;
        p->prev=rear;
        if(rear!=NULL)
        {
            rear->next=p;
        }
        else
        {
            front=p;
        }
        rear=p;
        current++;
        return true;
    }
    
    bool deleteFront() {
        if(front==NULL)
        {
            return false;
        }
        node *p;
        p=front;
        front=front->next;
        delete p;
        if(front!=NULL)
        {
            front->prev=NULL;
        }
        else
        {
            rear=NULL;
        }
        current--;
        return true;
    }
    
    bool deleteLast() {
        
        if(rear==NULL)
        {
            return false;
        }
        node *p;
        p=rear;
        rear=rear->prev;
        delete p;
        if(rear!=NULL)
        {
            rear->next=NULL;
        }
        else
        {
            front=NULL;
        }
        current--;
        return true;
    }
    
    int getFront() {
        if(current==0)
        {
            return -1;
        }
        else
        {
            return front->data;
        }
    }
    
    int getRear() {
        if(current==0)
        {
            return -1;
        }
        else
        {
            return rear->data;
        }
    }
    
    bool isEmpty() {
        if(front==NULL)
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if(current==SIZE)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};