<<<<<<< HEAD
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> res(v);
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    for(int i=0;i<n;i++)
    {
        cout << lower_bound(res.begin(),res.end(),v[i]) -res.begin() << " ";
    }
=======
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n); //���� ����
    // �Է�
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> cv(v); // ���� ���͸� �����Ͽ� �ߺ� �� ���� �����ϰ� ������ ���� �� ����.
    sort(cv.begin(), cv.end()); //�������� ����
    // �ߺ� ����
    cv.erase(unique(cv.begin(), cv.end()), cv.end());
    for (int i = 0; i < n; i++)
    {
        // i��° ��Ұ��� ��ġ���� cv������ ���� �ּҰ��� ���� ���� ��
        cout << lower_bound(cv.begin(), cv.end(), v[i]) - cv.begin() << ' ';
    }

>>>>>>> 3588fcab8f42353b646dbbe3de3050c9af11f2ce
    return 0;
}