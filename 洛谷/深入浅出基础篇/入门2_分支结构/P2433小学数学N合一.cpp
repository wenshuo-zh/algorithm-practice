#include<iostream>
// 填上你觉得需要的其他头文件
#include<cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    }
    else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3) {
        // 请自行完成问题 3 的代码
        cout << 3 << endl;
        cout << 12 << endl;
        cout << 2 << endl;
    }
    else if (T == 4) {
        // 请自行完成问题 4 的代码
        //"%.6g"保留六位有效数字
        printf("%.6g\n", 500.0 / 3);
    }
    else if (T == 5) {
        // 请自行完成问题 5 的代码
        cout << (260 + 220) / (20 + 12) << endl;
    }
    else if (T == 6) {
        // 请自行完成问题 6 的代码
        double ans6 = sqrt(9 * 9 + 6 * 6);
        cout << ans6 << endl;
    }
    else if (T == 7) {
        // 请自行完成问题 7 的代码
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0 << endl;
    }
    else if (T == 8) {
        // 请自行完成问题 8 的代码
        const double pai = 3.141593;
        int r = 5;
        cout << 2 * pai * r << endl;
        cout << pai * r * r << endl;
        cout << 4.0 / 3 * pai * r * r * r << endl;
        //printf("%lf\n%lf\n%lf\n", 2 * pai * 5, pai * 5 * 5, 4.0 * pai * 5 * 5 * 5 / 3);
    }
    else if (T == 9) {
        // 请自行完成问题 9 的代码
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2  << endl;
    }
    else if (T == 10) {
        // 请自行完成问题 10 的代码
        // y+30x = 8*30;
        // y+ 6x = 10*6;
        // 求y+10x=n*10；
        //每个机器每分钟完成的任务量
        double x = 1.0 * (8 * 30 - 10 * 6) / (30 - 6);
        //原有任务量；
        double y = 8 * 30 - 30 * x;
        int n = (y + 10 * x) / 10;
        cout << n << endl;
    }
    else if (T == 11) {
        // 请自行完成问题 11 的代码
        cout << 100.0 / (8 - 5) << endl;
    }
    else if (T == 12) {
        // 请自行完成问题 12 的代码
        cout << (int)('M' - 'A'+ 1) << endl;
        cout << char('A' + 17) << endl;
    }
    else if (T == 13) {
        // 请自行完成问题 13 的代码
        const double pai = 3.141593;
        double v1 = 4.0 * pai * 4 * 4 * 4 / 3;
        double v2 = 4.0 * pai * 10 * 10 * 10 / 3;
        //开三次方的函数cbrt()  平方sqrt()
        int ans13 = cbrt(v1 + v2);
        cout << ans13 << endl;
    }
    else if (T == 14) {
        // 请自行完成问题 14 的代码
        cout << 50 << endl;
    }
    return 0;
}
