# Level Order Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the  **root** of a Binary Tree, your task is to return its Level Order Traversal.

 **Note:** A level order traversal is a breadth-first search (BFS) of the tree. It visits nodes level by level, starting from the root, and processes all nodes from left to right within each level before moving to the next.

 **Examples:** 

```
Input: root = [1, 2, 3]

Output: [1, 2, 3]
Explanation: We start with the root node 1, so the first level of the traversal is [1]. Then we move to its children 2 and 3, which form the next level, giving the final output [1, 2, 3].
```

```
Input: root = [10, 20, 30, 40, 50, N, N]

Output: [10, 20, 30, 40, 50]
Explanation: We begin with the root node 10, which forms the first level as [10]. Its children 20 and 30 make up the second level, and their children 40 and 50 form the third level, resulting in [10, 20, 30, 40, 50].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T06:31:14.161Z  

```cpp
/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        vector<int> ans;

                if (root == NULL)
                    return ans;

                queue<Node*> q;
                q.push(root);

                while (!q.empty()) {
                    Node* x = q.front();
                    q.pop();

                    ans.push_back(x->data);

                    if (x->left != NULL)
                        q.push(x->left);

                    if (x->right != NULL)
                        q.push(x->right);
                }

                return ans;
            }
        };
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/level-order-traversal/1)