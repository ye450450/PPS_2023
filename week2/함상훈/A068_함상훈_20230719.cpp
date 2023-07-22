#includeiostream
#includestdio.h
#includequeue
#define SPEEDUP iossync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int N, x;
string s;
queueint q;



int main()
{
	SPEEDUP

	cin  N;

	for (int i = 0; i  N; i++)
	{
		cin  s;

		if (s == push)
		{
			cin  x;
			q.push(x);
		}
		else if (s == pop)
		{
			if (!q.empty())
			{
				cout  q.front()  'n';
				q.pop();
			}
			else cout  -1  'n';

		}
		else if (s == size)
		{
			cout  q.size()  'n';
		}
		else if (s == empty)
		{
			cout  q.empty()  'n';
		}
		else if (s == front)
		{
			if (!q.empty()) cout  q.front()  'n';
			else cout  -1  'n';
		}
		else
		{
			if (!q.empty()) cout  q.back()  'n';
			else cout  -1  'n';
		}
	}

}