class Solution {
  public:
    string decToBinary(int n) {
        if(n==0)
            return "";
            else{
                return decToBinary(n/2) + to_string(n%2);
                //string temp =decToBinary(n/2);
               // temp = temp+to_string(n%2);
               // return temp;
            }
        // code here
        
    }
};