#include <iostream>
#include <stack>
#include <queue>
using namespace std;
queue<int> revers(queue<int> st)
{
    stack<int> v;
    while (!st.empty())
    {
        v.push(st.front());
        st.pop();
    }
    while (!v.empty())
    {
        int cur = v.top();
        st.push(cur);
        v.pop();

    }
    return st;
}
int main()
{
    queue<int> q;
    for (int i = 1; i < 6; i++)
    {
        q.push(i);
    }

    queue<int> result = revers(q);

    while (!result.empty())
    {
        cout << result.front() << " ";
        result.pop();
    }

    return 0;
} 