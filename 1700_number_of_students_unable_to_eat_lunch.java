class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        int circleCount = 0;
        int squareCount = 0;
        for (int student: students){
            if (student == 0) circleCount++;
            else squareCount++;
        }
        for(int sandwich: sandwiches){
            if (sandwich == 0){
                if (circleCount >0 ) circleCount--;
                else break;
            } else {
                if (squareCount >0 ) squareCount--;
                else break;
                
            }
        }

        return circleCount + squareCount;
    }
}