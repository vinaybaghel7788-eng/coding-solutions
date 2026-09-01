# Design Circular Deque

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Design your implementation of the circular double-ended queue (deque).

Implement the `MyCircularDeque` class:

- MyCircularDeque(int k) Initializes the deque with a maximum size of k.
- boolean insertFront() Adds an item at the front of Deque. Returns true if the operation is successful, or false otherwise.
- boolean insertLast() Adds an item at the rear of Deque. Returns true if the operation is successful, or false otherwise.
- boolean deleteFront() Deletes an item from the front of Deque. Returns true if the operation is successful, or false otherwise.
- boolean deleteLast() Deletes an item from the rear of Deque. Returns true if the operation is successful, or false otherwise.
- int getFront() Returns the front item from the Deque. Returns -1 if the deque is empty.
- int getRear() Returns the last item from Deque. Returns -1 if the deque is empty.
- boolean isEmpty() Returns true if the deque is empty, or false otherwise.
- boolean isFull() Returns true if the deque is full, or false otherwise.

 

 **Example 1:** 

```
Input
["MyCircularDeque", "insertLast", "insertLast", "insertFront", "insertFront", "getRear", "isFull", "deleteLast", "insertFront", "getFront"]
[[3], [1], [2], [3], [4], [], [], [], [4], []]
Output
[null, true, true, true, false, 2, true, true, true, 4]

Explanation
MyCircularDeque myCircularDeque = new MyCircularDeque(3);
myCircularDeque.insertLast(1);  // return True
myCircularDeque.insertLast(2);  // return True
myCircularDeque.insertFront(3); // return True
myCircularDeque.insertFront(4); // return False, the queue is full.
myCircularDeque.getRear();      // return 2
myCircularDeque.isFull();       // return True
myCircularDeque.deleteLast();   // return True
myCircularDeque.insertFront(4); // return True
myCircularDeque.getFront();     // return 4

```

 

 **Constraints:** 

- 1 <= k <= 1000
- 0 <= value <= 1000
- At most 2000 calls will be made to insertFront, insertLast, deleteFront, deleteLast, getFront, getRear, isEmpty, isFull.

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 32.67%)  
**Memory:** 24.5 MB (beats 40.85%)  
**Submitted:** 2026-09-01T04:41:49.457Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/design-circular-deque/)