class Solution:
    def isPalindrome(self, s: str) -> bool:
        i=0
        j=len(s)-1
        while(i<=j):
            if(s[i].isalnum()):
                if(s[j].isalnum()):
                    if(s[i].lower()!=s[j].lower()): return False
                    else:
                        i+=1
                        j-=1
                else: j-=1
            else: i+=1
        return True