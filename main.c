#include <stdio.h>
//計算兩整數間所有整數的總和
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int temp;
    if (num1 > num2) {//let num1 < num2
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int ans = 0;
    for (int i=num1; i<num2+1; i++) {
        ans += i;
    }
    printf("%d\n",ans);
    return 0;
}
