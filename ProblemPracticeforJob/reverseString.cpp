#include <bits/stdc++.h>

using namespace std;

/**
 * @brief
 *
 * @param str
 * @param startIdx
 * @param endIdx
 * @return string
 *
 * explantion
 * let x = a, y =b
 * (i) x = x^y --> a^b
 *
 * (ii) y = x^y
 * --> (a^b)^b
 * --> a^(b^b) ;[b^b = 0]
 * --> a^0
 * --> a ;[a^0 = 0]
 *
 * (iii) x = x^y
 * -->(a^b)^a
 * --> b
 */

string reverseString(string str, int startIdx, int endIdx)
{
    while (startIdx < endIdx)
    {
        str[startIdx] ^= str[endIdx];
        str[endIdx] ^= str[startIdx];
        str[startIdx] ^= str[endIdx];
        startIdx++;
        endIdx--;
    }

    return str;
}

string reverseStringandChangeCase(string str, int startIdx, int endIdx)
{
    while (startIdx < endIdx)
    {

        str[startIdx] ^= str[endIdx];
        str[endIdx] ^= str[startIdx];
        str[startIdx] ^= str[endIdx];

        // changing case, upper to lower and lower to upper

        if (str[startIdx] != ' ')
        {
            if (str[startIdx] < 97)
                str[startIdx] = str[startIdx] + 32;
            else
                str[startIdx] = str[startIdx] - 32;
        }
        if (str[endIdx] != ' ')
        {
            if (str[endIdx] < 97)
                str[endIdx] = str[endIdx] + 32;
            else
                str[endIdx] = str[endIdx] - 32;
        }
        startIdx++;
        endIdx--;
    }

    return str;
}

int main()
{
    string str = "I Am A String";
    string revStr = reverseString(str, 0, str.length() - 1);
    string revStrchngCaSE = reverseStringandChangeCase(str, 0, str.length() - 1);

    cout << str << endl
         << revStr << endl
         << revStrchngCaSE << endl;
    ;
}