
class Solution:
    def sumOfLastN_Nodes(self, head, n):
        #function should return sum of last n nodes
        len = 0
        temp = head
        while temp:
            len += 1
            temp = temp.next
        
        start_pos = len - n
        sum = 0
        temp = head
        index = 0
        while temp:
            if index >= start_pos:
                sum += temp.data
            temp = temp.next
            index += 1
        return sum
