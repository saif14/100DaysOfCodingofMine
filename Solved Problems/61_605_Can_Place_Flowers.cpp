#include <bits/stdc++.h>

using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
     if (n == 0) return true;
        for (int i = 0; i < flowerbed.size(); i ++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) { // can place?
                -- n;
                if (n == 0) return true;
                flowerbed[i] = 1; // place!
            }
        }
        return false;
}

int main()
{
    vector<int> flowerbed = {0,0,1,0,0};
    cout << "True or False " << canPlaceFlowers(flowerbed, 1);
}