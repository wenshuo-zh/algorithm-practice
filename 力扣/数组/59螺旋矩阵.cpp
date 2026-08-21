#include<bits\stdc++.h>
using namespace std;


//收缩上下左右 四条边界
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>nums(n, vector<int>(n));
        //边界左闭右开   上->右->下->左 
        int up = 0, down = n, left = 0, right = n;
        int val = 1;
        while (val <= n * n) {
            //固定上边界：行up，遍历[left , right)，结束up++
            for (int j = left; j < right; j++) {
                nums[up][j] = val;
                val++;
            }
            up++;
            //固定右边界：列right - 1，遍历[up , down)，结束right--
            for (int i = up; i < down; i++) {
                nums[i][right - 1] = val;
                val++;
            }
            right--;
            //固定下边界：行down - 1，反向遍历[left , right)，结束down--
            for (int j = right - 1; j >= left; j--) {
                nums[down - 1][j] = val;
                val++;
            }
            down--;
            //固定左边界：列left - 1，反向遍历[up , down)，结束left++
            for (int i = down - 1; i >= up; i--) {
                nums[i][left] = val;
                val++;
            }
            left++;
        }
        return nums;
    }
};


//缩圈
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>vec(n, vector<int>(n));
        int loop = n / 2;//圈数
        int val = 1;
        int startX = 0, startY = 0;
        int offset = 1;//控制每条边的遍历长度
        while (loop--) {
            int i = startX;
            int j = startY;
            for (; j < n - offset; j++)vec[i][j] = val++;
            for (; i < n - offset; i++)vec[i][j] = val++;
            //此时i j已经是n-offset,循环中不用再写
            for (; j > startY; j--)vec[i][j] = val++;
            for (;i>startX; i--)vec[i][j] = val++;
            //走完一圈以后边界向内缩小
            startX++;
            startY++;
            offset++;
        }
        //填充中心点
        if (n % 2 != 0) {
            vec[n / 2][n / 2] = val;
        }
        return vec;
    }
};