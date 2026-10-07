# Binary Tree Zigzag Level Order Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `root` of a binary tree, return  *the zigzag level order traversal of its nodes' values*. (i.e., from left to right, then right to left for the next level and alternate between).

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]

```

 **Example 2:** 

```
Input: root = [1]
Output: [[1]]

```

 **Example 3:** 

```
Input: root = []
Output: []

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 2000].
- -100 <= Node.val <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15 MB (beats 77.59%)  
**Submitted:** 2026-10-07T09:22:41.585Z  

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int height(TreeNode* root) {
        if (root == NULL)
            return -1;

        return 1 + max(height(root->left), height(root->right));
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if (root == NULL)
            return {};

        int h = height(root);

        queue<pair<TreeNode*, int>> q;

        vector<vector<int>> table(h + 1);

        q.push({root, 0});

        while (!q.empty()) {

            TreeNode* x = q.front().first;
            int level = q.front().second;
            q.pop();

            table[level].push_back(x->val);

            if (x->left != NULL)
                q.push({x->left, level + 1});

            if (x->right != NULL)
                q.push({x->right, level + 1});
        }

        for (int i = 1; i <= h; i += 2) {
            reverse(table[i].begin(), table[i].end());
        }

        return table;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)