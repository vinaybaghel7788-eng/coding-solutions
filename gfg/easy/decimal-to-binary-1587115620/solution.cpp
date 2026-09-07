class Solution {
  public:
    string decToBinary(int n) {
        if(n==0)
            return "";
            else{
                string temp =decToBinary(n/2);
                temp = temp+to_string(n%2);
                return temp;
            }
        // code here
        
    }
};