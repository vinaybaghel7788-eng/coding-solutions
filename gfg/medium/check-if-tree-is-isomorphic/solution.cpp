/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isIsomorphic(Node *root1, Node *root2) {
        if(root1==NULL && root2==NULL)
            return true;
        if(root1==NULL || root2==NULL)
            return false;        
        if(root1->data == root2->data)
        {
            bool a=isIsomorphic(root1->left,root2->left);
            bool b=isIsomorphic(root1->right,root2->right);
            if(a&&b)
                return true;
            bool c=isIsomorphic(root1->left,root2->right);
            bool d=isIsomorphic(root1->right,root2->left);
            if(c&&d)
                return true;
            return false;        
            
        }
        return false;
        
        // code herie
        
    }
};