class Solution:
    def isValid(self, s: str) -> bool:
        bdict = {
            ")" : "(",
            "}" : "{",
            "]" : "["
        }

        stack = []

        for b in s:
            if b in bdict:
                if stack and stack[-1] == bdict[b]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(b)
        
        return not stack
