class Solution:
    def intersectionWithDuplicates(self, a, b):
     return list(set(a) & set(b))
