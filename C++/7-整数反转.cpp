class Solution {
public:
    int reverse(int x) {
        long long temp=x,res=0;
        while(temp!=0){
            res=res*10+temp%10;
            temp/=10;
        }
        if(res>INT_MAX||res<INT_MIN)res=0;
        return (int)res;
    }
};
