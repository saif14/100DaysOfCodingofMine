bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int count = 0;

    for (int i = 0; i < flowerbed.size(); i++)
    {

        if (flowerbed[i] == 0)
        {
            if ((i - 1 < 0 && flowerbed[i + 1] == 0) ||
                (i + 1 == flowerbed.size() && flowerbed[i - 1] == 0) ||
                (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) || 
                (i-1 < 0 && i+1==flowerbed.size()))
            {
                flowerbed[i] = 1;
                count++;
            }
        }
    }
    if (count == n)
        return true;
    else
        return false;
}