#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> st;
	int mini;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(st.empty())
			{
				st.push(num);
				mini =num;
			}
			else{
				if(st.top()<mini)
				{
					int prev = num;
					num = 2*num - mini;
					st.push(num);
					mini = prev;
				}
				else 
					st.push(num);
			}

		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty()) return -1;

			int x = st.top();
			st.pop();

			if(x<mini)
			{
				int prev=mini;
				mini = 2*mini -x;
				return prev;
			}

			return x;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty()) return -1;

			int x =st.top();

			if(x<mini) return mini;

			return x;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(st.empty()) return -1;

			return mini;
		}
};
