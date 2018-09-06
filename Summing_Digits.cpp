/* **************************************************************************

    * File Name : Summing_Digits.cpp

    * Creation Date : 2018-09-03 22:27:32

    * Last Modified : 2018-09-06 10:06:23

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int f(long long n)
{
    int total = 0; //加總

    if(n >= 1 && n <= 9)
        return n; //假設n為個位數，則直接回傳
    else //否則每位數一個一個加總，並用遞迴方式回傳
    {
        for(int i = 0; n != 0; i++)
        {
            total += (n % 10);
            n /= 10;
        }
        return f(total);
    }
}

int main()
{
    long long inputNum; //輸入的數

    while(cin >> inputNum)
    {
        if(inputNum == 0)
            break; //若輸入0則結束
        else
            cout << f(inputNum) << endl; //將輸入的數呼叫f函式，並輸出
    }
    return 0;
}
