class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        int lastone = 1;
        int secondlast = 1;
        int cur = lastone + secondlast;
        for (int i = 3; i <= n; i++)
        {
            int temp = secondlast; //1
            int temp2 = lastone;   //1
            int temp3 = cur;

            secondlast = lastone; //1
            lastone = cur;
            cur = temp3 + temp2;
        }
        return cur;
    }
};