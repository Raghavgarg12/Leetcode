class Solution:
    def check(self,s):
        m=len(s)
        for j in range(0,m):
            if(s[j]!=s[m-j-1]):
                return False
        return True
    def firstPalindrome(self, words: List[str]) -> str:
        n=len(words)
        for word in words:
            if word[0]==word[-1]:
                if self.check(word)==True:
                    return word
        return ""