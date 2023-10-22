//
//  main.c
//  表达式与运算符编程代码
//
//  Created by Brian on 2023/10/22.
//

/*  从键盘输入一个华氏温度F，计算对应的摄氏温度C。计算公式：C=5×(F-32)/9，C和F均定义为double型变量。（10分）
 
 *  题目内容:
 *  从键盘输入一个华氏温度F，计算对应的摄氏温度C。计算公式：C=5×(F-32)/9，C和F均定义为double型变量。
 *
 *  输入格式:
 *  scanf中的格式控制串为"%lf"
 *  说明：scanf之前不能用printf提示输入内容
 *
 *  输出格式:
 *  参照输出样例给出printf语句，对应于C变量的格式控制串为"%lf"
 *
 *  输入样例:
 *  150.7
 *
 *  输出样例:
 *  Celsius=65.944444
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    double F,C;
    scanf("%lf",&F);
    C = 5*(F-32)/9;
    printf("Celsius=%lf\n",C);
    return 0;
}
