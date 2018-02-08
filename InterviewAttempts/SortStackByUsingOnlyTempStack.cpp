/**
 * Sort stack by using only one temp stack
 */
#include <iostream>
#include <bits/stdc++.h>

std::stack<int> sortStack(std::stack<int>& input)
{
    std::stack<int> tmpStack;

    while ( !input.empty() )
    {
        int tmp = input.top();
	input.pop();

	while ( !tmpStack.empty() && tmpStack.top() < tmp)
	{
	    input.push(tmpStack.top());
	    tmpStack.pop();
	}
	tmpStack.push(tmp);
    }
    return tmpStack;
}

int main()
{
    std::stack<int> input;
    input.push(88);
    input.push(8);
    input.push(27);
    input.push(9);
    input.push(28);
    input.push(48);
    input.push(2);
    input.push(18);

    std::stack<int> tmpStack = sortStack(input);
    while ( !tmpStack.empty())
    {
        printf("%d ", tmpStack.top());
	tmpStack.pop();
    }

    return 0;

}
