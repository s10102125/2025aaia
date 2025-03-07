# week03-1.py
# leetcode 2579.
class Solution:
    def coloredCells(self, n: int) -> int:
        return n**2+(n-1)**2
        #觀察題目的圖片(不看英文、不看中文)，頭轉45度，看到正方形