class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        sort(begin(arr1), end(arr1)), sort(begin(arr2), end(arr2));
        int result = 0, i = 0;
        for (int j = 0; i < arr1.size() && j < arr2.size();)
        {
            if (arr1[i] - arr2[j] > d)
            {
                ++j;
                continue;
            }
            result += arr2[j] - arr1[i] > d;
            ++i;
        }
        return result + arr1.size() - i;
    }
};



class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int count = arr1.size();
        for (int a : arr1)
        {
            for (int b : arr2)
            {
                if (abs(a - b) <= d)
                {
                    count--;
                    break;
                }
            }
        }

        return count;
    }
};
