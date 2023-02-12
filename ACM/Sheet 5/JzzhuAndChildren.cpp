#include<iostream>
#include<queue>
#include<map>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int>mp; //stores index of each children in the array & counter
    /*
    * input : 5 2 
             1 3 1 4 2 
             map :
                  <0, 0>
                  <1, 0>
                  <2, 0>
                  <3, 0>
                  <4, 0>
    *
    */
    queue<int>q;
    int ar[105];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        q.push(i);
    }
    int ans;
    while (!q.empty())
    {
        int z = q.front();
        ans = z + 1; //keep track of the number of the last child
        
        //checks if (counter + m) >= number of cadndies each children want ? if yes go home otherwise add that m to counter and push index of that child in the queue again
        if (mp[z] + m >= ar[z]) 
        {
            q.pop(); 
        }
        else
        {
            q.pop();
            mp[z] += m;
            q.push(z);
        }

    }
    cout << ans << endl;
    return 0;
}
//int main()
//{
//	int n, m;
//	int arr[105];
//	deque<pair<int, int >> d;
//	queue<pair<int, int >> q;
//	cin >> n >> m;
//	int counter = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i]; //1 3 1 4 2
//		q.push({ arr[i] , i + 1});
//		//d.push_front({ arr[i] , i + 1 });
//	}
//	while (!q.empty())
//	{
//
//		if ((q.front().first - m) == 0 || (q.front().first - m < 0))
//		{
//			q.pop();
//			counter = q.front().second;
//		}
//			
//		else
//		{
//			q.push({(q.front().first - m), (q.front().second)});
//			q.pop();
//			//counter = q.front().second;
//		}
//
//		cout << d.back().second << endl;
//		/*cout << q.size()<< endl;*/
//
//		/*cout << q.front() << endl;
//		q.pop();*/
//	}
//
//
//}