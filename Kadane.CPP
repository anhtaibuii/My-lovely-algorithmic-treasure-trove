/*Thuật toán Kadane:
Kadane là một thuật toán được phát triển bởi Jay Kadane từ Đại học Carnegie-Mellon vào năm 1984. Nó được dùng để giải quyết một bài toán được đề xuất bởi Ulf Grenander từ Đại học Brown vào 14 năm trước đó.
Nội dung bài toán như sau:
Cho một mảng a có N phần tử bao gồm các số nguyên, hãy tìm dãy con có tổng lớn nhất trong mảng đó.
Nội dung thuật toán Kadane:
Tạo hai biến, một biến để lưu tổng lớn nhất của các phần tử trước tới phần tử hiện tại. Biến còn lại để cập nhật giá trị lớn nhất tìm được.
Đại khái là thế này:)))
*Khởi tạo một biến Score với giá trị ban đầu là 0, và một biến HighScore với giá trị ban đầu là nhỏ nhất có thể.
*Sau đó duyệt qua từng phần tử của mảng, cập nhật giá trị của biến Score tăng lên a[i] đơn vị mỗi lần duyệt qua một phần tử i nào đó. Nếu Score bé hơn 0 thì reset về 0.
*Biến HighScore sẽ được cập nhật nếu giá trị của biến Score lớn hơn giá trị của nó hiện tại.
*Kết thúc vòng lặp chúng ta in ra giá trị của HighScore chính là tổng của dãy con có tổng lớn nhất trong mảng.
P/s: Jay Kadane chỉ mất 1 phút để nghĩ ra thuật toán này:))*/
#include<bits/stdc++.h>
#define ll long long
#define N 1000006
using namespace std;
ll n,a[N],score=0,highscore=LLONG_MIN;
int main(){
    if(fopen("Kadane.INP","r")){
        freopen("Kadane.INP","r",stdin);
        freopen("Kadane.OUT","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++){
        score+=a[i];
        highscore=max(score,highscore);
        if(score<0)score=0;
    }
    cout<<highscore;
}

