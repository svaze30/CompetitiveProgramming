#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &ar)
    {
        map<int, int> m;
        for (auto x : ar)
            m[x]++;
        map<int, int> rm;
        for (auto x : m)
        {
            rm[x.second] = x.first;
        }
        if (m.size() == rm.size())
            return 1;
        return 0;
    }
};

int main()
{
    int arr[6] = {1,2,2,1,1,3};


    return 0;
}