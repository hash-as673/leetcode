import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Map;

class Solution {
    public boolean isValid(String s) {
        Map<Character, Character> bracketMap = Map.of(
             ')', '(',
    '}', '{',
    ']', '['

        );

        Deque<Character> record = new ArrayDeque<>();

        for(char bracket : s.toCharArray()){
            if(bracketMap.containsKey(bracket)){
                if (!record.isEmpty() && bracketMap.get(bracket) == record.peekLast()){
                    record.pollLast();
                } else {
                    return false;
                }
            } else {
                record.addLast(bracket);
            }
        }

        return record.isEmpty();

    }
}