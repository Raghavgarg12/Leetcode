class Solution:
    def check(self,s):
        m=len(s)
        for j in range(0,m):
            if(s[j]!=s[m-j-1]):
                return False
        return True
        # if(s==s[::-1]):
        #     return True
        # else:
        #     return False
    def firstPalindrome(self, words: List[str]) -> str:
        n=len(words)
        for i in range(0,n):
            if words[i][0]==words[i][-1]:
                if self.check(words[i])==True:
                    return words[i]
        return ""