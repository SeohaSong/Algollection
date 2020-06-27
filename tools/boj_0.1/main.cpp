#include <iostream>


using namespace std;


int main()
{
    long long ret = 0;
    int num = 0;
    char line[1000000];
    size_t size = 1000000;
    while (size == 1000000)
    {
        size = fread(line, sizeof(char), 1000000, stdin);
        for (int idx = 0; idx < size; idx++)
        {
            int num_ = line[idx] - '0';
            if (num_ >= 0)
            {
                num = num * 10 + num_;
                continue;
            }
            ret += num;
            num = 0; 
        }
    }
    cout << 5000000 << endl;
    cout << ret - 5000000 << endl;
    return 0;
}
