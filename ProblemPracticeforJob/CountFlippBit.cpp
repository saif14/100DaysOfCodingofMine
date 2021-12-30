#include<bits/stdc++.h>

using namespace std;

int countFlippBit(int a, int b)
{
    int count = 0;
    while(a || b)
    {
        int firstBitOfNumber_1 = a & 1;
        int firstBitOfNumber_2 = b & 1;
        if(firstBitOfNumber_1 != firstBitOfNumber_2)
        count++;
        a = a>>1;
        b = b>>1;
    }

    return count;
}

int main()
{
    cout<<"Number of Flipped Bit: "<<countFlippBit(15, 12);

}