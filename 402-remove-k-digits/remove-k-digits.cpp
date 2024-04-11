// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         int n = num.length();
//         int z=0,i=0;
//         if(k==n) return "0";
//         while(z<k){
//             if(num[i]>num[i+1]){
//                 num.erase(i,1);
//                 z++;
//                 i=0;
//             }
//             else i++;
//             cout<<z<<endl;
//         }
//         while(num[0]=='0' && num.length()>1) num.erase(0,1);
//         return num;
//     }
// };
class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        std::stack<char> stack;
        
        for (char digit : num) {
            while (!stack.empty() && k > 0 && stack.top() > digit) {
                stack.pop();
                k--;
            }
            stack.push(digit);
        }
        while (k > 0 && !stack.empty()) {
            stack.pop();
            k--;
        }
        std::string result;
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }
        std::reverse(result.begin(), result.end());
        size_t pos = result.find_first_not_of('0');
        result = (pos == std::string::npos) ? "0" : result.substr(pos);
        
        return result;
    }
};