class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size()-1;
        while(len>=0){
            if(digits[len]==9){
                digits[len]=0;

            }
            else{
                digits[len ]+=1;
                return digits;
            }
            len--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
