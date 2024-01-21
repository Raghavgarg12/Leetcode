class Solution:
    
    def isPalindrome(self, s: str) -> bool:
        # def check(l,r,s):
        #     if(l>=r): return True
        #     if(s[l]!=s[r]): return False
        #     else: return check(l+1,r-1,s)
        # def clean(s):
        #     s=[c.lower() for c in s if c.isalnum()]
        #     return s
        # s=clean(s)
        # return check(0,len(s)-1,s)
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