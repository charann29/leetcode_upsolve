class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1 = version1.size();
        int n2 = version2.size();
        int ans;
        vector<int> v1;
        vector<int> v2;  
        int tmp=0;
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.' && i>0){
                v1.push_back(tmp);
                tmp=0;
            }
            else{
                tmp = tmp*10+ (version1[i]-'0');
                if(i==version1.size()-1){
                    v1.push_back(tmp);
                }
            }
        }
        tmp=0;
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.' && i>0){
                v2.push_back(tmp);
                tmp=0;
            }
            else{
                tmp = tmp*10+ (version2[i]-'0');
                if(i==version2.size()-1){
                    v2.push_back(tmp);
                }
            }
        }
        for(int x:v1){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int x:v2){
            cout<<x<<" ";
        }
        int i=0,j=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]==v2[j]){
                i++;
                j++;
            }
            else if(v1[i]>v2[j]){
                return 1;
            }
            else{
                return -1;
            }
        }
        while(i<v1.size()){
            if(v1[i]!=0){
                return 1;
            }
            i++;
        }
        while(j<v2.size()){
            if(v2[j]!=0){
                return -1;
            }
            j++;
        }
        return 0;
        
    }
};