class Solution:
    def isValid(self, s: str) -> bool:
        bracket_map = {
            "}" : "{",
            "]" : "[",
            ")" : "("
        }
        brackets = []
        
        for b in s:
            if b in bracket_map:
                if brackets and brackets[-1] == bracket_map[b]:
                    brackets.pop()
                else:
                    return False
            else:
                brackets.append(b)

        return True if not brackets else False
                
