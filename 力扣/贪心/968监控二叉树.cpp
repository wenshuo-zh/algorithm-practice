class Solution {
public:
    int res = 0;
    //0无覆盖，1有摄像头，2有覆盖
    int traversal(TreeNode* cur){
        if(cur == nullptr)return 2;//空节点为有覆盖
        int left = traversal(cur->left);
        int right = traversal(cur->right);
        if(left == 0 || right == 0){//孩子有没被覆盖的，要加一个摄像头，返回当前为摄像头
            res++;
            return 1;
        }
        if(left == 1 || right == 1)return 2;//孩子有摄像头，当前会被覆盖
        if(left == 2 && right == 2)return 0;//左右孩子都覆盖，覆盖不到当前节点
        return -1;
    }
    int minCameraCover(TreeNode* root) {
        if(traversal(root) == 0)res++;//如果根为为无覆盖，在根处加摄像头
        return res;
    }
};
