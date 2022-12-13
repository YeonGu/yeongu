#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

//char *itoa_no_digui(int n,char *string);
char *itoa_recursive(int n, char *string)
{
    int digit;
    for (digit = 1; n / pow(10.0, double(digit)) != 0; digit++);
    *(string + digit - 1) = char(n % 10) + 0x30;
    cout << *(string + digit - 1) << endl;
    if (n / 10 != 0) itoa_recursive(n / 10, (string + 1));
    return string;
}

int main()
{
    int n;
    char str1[5] = "\0\0\0\0", str2[5] = "\0\0\0\0";
    cout << "give n" << endl;
    cin >> n;
    itoa_recursive(n, str1);
    cout << "RECURSIVE: n=" << itoa_recursive(n, str1) << endl;
    //cout<<"非递归：n="<<itoa_recursive(n,str2)<<endl;
    system("pause");
    return 0;
}