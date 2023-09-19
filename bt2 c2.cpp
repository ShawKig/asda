#include<iostream>
using namespace std;
class DATE{
    private:
    int ngay, thang ,nam;
    public:
    DATE(int ngay,int thang,int nam);
    void nhap();
    void in();
    void normalize();
    void daysln(int);
    void advance(int nam, int thang, int ngay);
    void songay();
    void reset();
}
void DATE::nhap(int ngay, int thang ,int nam){
    cout << "nhap ngay thang nam: ";
    cin<< ngay << thang << nam ;
}
void DATE::in(int ngay,int thang,int nam){
    cout << ngay <<"/"<<thang<<"/"<<nam;
}
void DATE::normalize(int ngay, int thang, int nam){
    if (ngay>30)
    {
        thang = ngay/30;
        ngay = ngay - 30;
    }
    if (thang >= 12)
    {
        nam = thang /12;
        thang = thang -12; 
    }
    if (nam>=0)
    {
        nam = nam;
    }
}
void DATE::daysln(int ngay){
    this -> ngay = ngay;
    normalize();
    cout << ngay;
}
void DATE::advance(int nam, int thang, int ngay){
    this->nam+=nam;
    this->thang+=thang;
    this->ngay+=ngay ;
    normalize(); 
}
void DATE::songay(int ngay, int thang, int nam){
    ngay=this->ngay + this->thang*30 + this->nam*365;
    cout<<ngay;
}
void DATE::reset(int ngay, int thang, int nam){
    this->ngay=ngay;
    this ->thang=thang;
    this->nam=nam;
    normalize();
}
int main(){
    nhap();
    normalize();
    in();
    

}