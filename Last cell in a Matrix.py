class Solution:
    def endPoints(self, matrix, R, C):
        #code 
        i = 0
        j = 0
        
        direction = "r"
        direction_change = {"u":"r",
                            "r":"d",
                            "d":"l",
                            "l":"u"
                            }
        
        
        while i in range(0, R) and j in range(0, C):
            if matrix[i][j] == 1:
                
                matrix[i][j] = 0
                direction = direction_change[direction]
                
            if direction == "u":
                i -= 1
                
            elif direction == "r":
                j += 1
                
            elif direction == "d":
                i += 1
                
            elif direction == "l":
                j -= 1
                
        if i >= R:
            i = R - 1
        elif i < 0:
            i = 0
        
        if j >= C:
            j = C - 1
        elif j < 0:
            j = 0
            
        return (i, j)
