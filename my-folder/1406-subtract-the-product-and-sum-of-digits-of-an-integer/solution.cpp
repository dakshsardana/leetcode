class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int r;
        long long prod=1;
        while(n>0){
            r=n%10;
            n=n/10;
            sum+=r;
            prod=prod*r;
        }
        return prod-sum;
    }
};
