class Solution:
    def myPow(self, x: float, n: int) -> float:

        if n<0:
            n = -1*n
            x = (1/x)
       
        if n==0:
            return 1
        else:
            t = self.myPow(x,n//2)
            if n%2==0:
                return t*t
            else:
                return x*t*t
        