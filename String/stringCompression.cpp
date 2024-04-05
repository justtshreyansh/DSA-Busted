#include <bits/stdc++.h>
using namespace std;

    int compress(vector<char> &chars)
    {
        int count = 1;
        int j = 0;

        for (int i = 0; i < chars.size() - 1; i++)
        {
            // if value is equal then we just count
            if (chars[i] == chars[i + 1])
            {
                count++;
            }
            else
            {
                // otherwise first we push the char value
                chars[j++] = chars[i];
                // and if the count is not equal to 1 then we insert the total count in array
                if (count != 1)
                {
                    int rev = 0;
                    int num = 0;
                    while (count != 0)
                    {
                        int digit = count % 10;
                        rev = rev * 10 + digit;
                        count /= 10;
                        num++;
                    }
                    int revNum = 0;
                    while (rev != 0)
                    {
                        int digit = rev % 10;
                        char ch = digit + 48;
                        chars[j++] = ch;
                        rev /= 10;
                        revNum++;
                    }
                    // this is for checking if anynumber has occurence which is divisble by 10
                    if (num != revNum)
                    {
                        int a = num - revNum;
                        while (a--)
                        {
                            chars[j++] = char(48);
                        }
                    }
                    count = 1;
                }
            }
        }
        // agar aakhri wale element ka count insert na ho paye uske liye
        chars[j++] = chars[chars.size() - 1];
        if (count != 1)
        {
            int rev = 0;
            int num = 0;
            while (count != 0)
            {
                int digit = count % 10;
                rev = rev * 10 + digit;
                count /= 10;
                num++;
            }
            int revNum = 0;
            while (rev != 0)
            {
                int digit = rev % 10;
                char ch = digit + 48;
                chars[j++] = ch;
                rev /= 10;
                revNum++;
            }
            if (num != revNum)
            {
                int a = num - revNum;
                while (a--)
                {
                    chars[j++] = char(48);
                }
            }
        }

        return j;
    }

int main()
{
    vector<char> chars = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
    cout << compress(chars) << endl;
    return 0;
}