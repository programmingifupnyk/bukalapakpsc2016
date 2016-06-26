#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

double hasil, h, R, H;

double cari_hasil(double x);
double bisection(double a, double b);

int T;
int main()
{
    cin >> T;
    while(T--)
    {
        cin >> R >> H;

        if(cari_hasil(H) < 0)
        {
            printf("%.6f",H);
        }else
        {
            printf("%.6f\n",bisection(1,H));
        }
    }
}

double cari_hasil(double x)
{
      hasil = (R*pow(x,3.000000))+3*((pow(x,2.000000)*pow(R*R+H*H,0.500000))-(2*pow(H,2.000000)*pow(R*R+H*H,0.500000))); ///= 5.874692 --> sing tepat
      /// kesimpulan : hindari pembagian desimal yang membuat hasil kurang presisi, contoh 1.0/3.0, 2.3/4.5 dst
      /// turunkan persamaan ke bentuk paling sederhana sehingga didapati rumusan yang minim operasi
      return hasil;
}
double bisection(double a, double b)
{
    double c;
    double fa, fb, fc;
    c = (a+b)/2;
    fa = cari_hasil(a);
    fb = cari_hasil(b);
    fc = cari_hasil(c);

    if(abs(fa-fb)<=0.000319) /// dipilih angka ketelitian galat ~ 0.0000319 berdasarkan eksperimen
    {
        return c;
    }else
    {
        if(fa*fc<0)
        {
            return bisection(a,c);
        }else
        if(fb*fc<0)
        {
            return bisection(c,b);
        }
    }

}
