#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        string line;
        getline(cin, line);
        if (!line.size())
            break;
        short val = stoi(line);
        
        if (val % 2 || val < 4)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}
