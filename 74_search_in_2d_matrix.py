class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m, n = len(matrix) , len(matrix[0])
        low = 0
        high = m * n - 1
        while low<=high:
            mid = low + (high -low ) // 2
            row = mid // n
            column = mid % n
            if target < matrix[row][column]:
                high = mid - 1
            elif target > matrix[row][column]:
                low = mid + 1
            else:
                return True
        return False