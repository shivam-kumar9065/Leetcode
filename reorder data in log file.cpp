class Solution {
public:
   static bool custsort(const string &A, const string& B){
    string sa = A.substr(A.find(' ') + 1);
    string sb = B.substr(B.find(' ') + 1);
    if(isdigit(sa[0]))
        return false;
    else if(isdigit(sb[0]))
        return true;
       else if(sa.compare(sb)==0){
           string fa=A.substr(0,A.find(' '));
           string fb = B.substr(0,B.find(' '));
           
           return fa.compare(fb)<0;
       }
    return sa.compare(sb) < 0;
}

vector<string> reorderLogFiles(vector<string> &logs) {
    stable_sort(logs.begin(), logs.end(), custsort);
    return logs;
    }
};