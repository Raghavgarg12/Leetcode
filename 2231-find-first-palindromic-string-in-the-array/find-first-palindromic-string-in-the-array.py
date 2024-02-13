class Solution:
    def check(self,s):
        if(s==s[::-1]):
            return True
        else:
            return False
    def firstPalindrome(self, words: List[str]) -> str:
        n=len(words)
        for i in range(0,n):
            if words[i][0]==words[i][-1]:
                if self.check(words[i])==True:
                    return words[i]
        return ""