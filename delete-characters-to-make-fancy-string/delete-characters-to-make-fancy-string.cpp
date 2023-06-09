class Solution {
public:
   string makeFancyString(string s) {
    string result ="";
    int count =1;
    int n = s.length();
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])count++;
        else count=1;
        if(count<3)result+=s[i-1];
    }
    result+=s[n-1];
    return result;
}
};