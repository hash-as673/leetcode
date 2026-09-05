import java.util.ArrayDeque;
import java.util.Deque;

class Solution {
    public int calPoints(String[] operations) {
        Deque<Integer> deque = new ArrayDeque<>();
        for (String op : operations) {
            if (op.equals("+")) {
                int last = deque.pollLast();
                int sum = deque.peekLast() + last;
                deque.addLast(last);
                deque.addLast(sum);
            } else if (op.equals("D")) {
                deque.addLast(deque.peekLast() * 2);
            } else if (op.equals("C")) {
                deque.pollLast();
            } else {
                deque.addLast(Integer.parseInt(op));
            }
        }

        int sum = 0;
        for(int num : deque) sum+=num;
        return sum;
    }
}