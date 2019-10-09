class Solution {
public:
    string convert(string s, int numRows) {
        string res("");
        if(numRows!=1)
        for(int i=0;i<numRows;i++){
            //行数不为1时，第一行与最后一行通过step=(numRows-2)+numRows计算
            //中间行有两个需要计算，第一个步长step=(numRows-2)+numRows，下一个为j+2(numRows-i-1)
            for(int j=i;j<s.length();j+=(numRows-2)+numRows){
                res+=s[j];
                if(!(i==0||i==numRows-1))
                if(j+2*(numRows-i-1)<s.length()){
                    res+=s[j+2*(numRows-i-1)];
                }   
            }
        }
        if(numRows==1){
            //行数为1时，原样输出
            return s;
        }
        return res;
    }
};
