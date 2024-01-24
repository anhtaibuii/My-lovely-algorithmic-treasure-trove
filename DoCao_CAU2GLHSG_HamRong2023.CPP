/*cho số tự nhiên N, hãy tìm số tự nhiên
sát sau N có cùng độ cao!!*/

/*input *dòng thứ nhất đọc vào một số k là số chữ số của N
        *dòng thứ hai đọc vào một số N*/
/*ouput *in ra số vừa tìm được, nếu không có số thỏa mãn in ra -1*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,a[10005],v;bool tang=true,giam=true;//tạo hai biến tăng và giảm với kiểu value để lưu lại xem việc thay đổi chữ số đã được thực hiện chưa
string s;
int main(){
    cin>>n;
    cin>>s;
    for(ll i=n-1;i>=0;i--){//duyệt ngược xâu s
        a[i]=s[i]-'0';//push các chữ số của n vào dãy a
        if(giam&&s[i]>'0'){
            a[i]-=1;//nếu a[i] lớn hơn 0 thì thực hiện thao tác giảm a[i] xuống 1 đơn vị
            v=i;//nếu thao tác giảm được thực hiện thì lưu vị trí i lại (muốn biết tại sao thì xem lại dòng 24:)) )
            giam=false;
        }
        if(tang&&!giam&&s[i]<'9'&&i<v){
            /*nếu thao tác giảm đã được thực hiện
            và vị trí hiện tại khác vị trí v (cái này để tránh việc thao tác giảm và tăng được thực hiện cùng 1 vị trí)*/
            a[i]+=1;//thì tăng chữ số này lên 1 đơn vị
            k=i;//lưu vị trí k lại để thực hiện xắp sếp
            tang=false;
        }
    }
    if(tang){
        cout<<-1;
        return 0;
    }
    sort(a+k+1,a+n);//giờ chúng ta chỉ cần sắp xếp tăng dần từ vị trí k là xong hehe:))
    for(ll i=0;i<n;i++)cout<<a[i];
}
