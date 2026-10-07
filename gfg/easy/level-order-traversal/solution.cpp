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