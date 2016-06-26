#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

double hasil, h, R, H;
double cari_hasil(double x);
double bisection(double a, double b);

char a;
int main()
{
    do
    {
        cin >> R >> H;
        printf("%.6f\n",bisection(1,H));
    }while(1);
}
double cari_hasil(double x)
{
//    hasil = (4*pow(x,3));
//    hasil = hasil+(6*pow(13,0.5)*x*x);
//    hasil = hasil-(216*pow(52,0.5));

//     cin >> R >> H;
//    hasil = (2*R*sqrt(R*R + H*H));
//    hasil = hasil-(2*R/H*x*sqrt((R/H*x)*(R/H*x) + x*x));
//    hasil = hasil-(1.0/3.0*pow((R/H*x),2)*x);
//    hasil = (1.0/3.0*(R*R/H*H)*pow(x,3))-(2*R*sqrt(R*R+H*H))+(R/H*x*sqrt(pow(R/H*x,2)+pow(x,2)));
      //hasil = (1.0/3.0*R*pow(x,3))+((pow(x,2)-2*pow(H,2))*sqrt(R*R+H*H));
//      hasil = ((1.000000/3.000000)*R*pow(x,3.000000))+((pow(x,2.000000)*pow(R*R+H*H,0.500000))-(2*pow(H,2.000000)*pow(R*R+H*H,0.500000))); ///= 5.874691
      hasil = (R*pow(x,3.000000))+3*((pow(x,2.000000)*pow(R*R+H*H,0.500000))-(2*pow(H,2.000000)*pow(R*R+H*H,0.500000))); ///= 5.874692 --> sing tepat
      /// kesimpulan : hindari pembagian desimal yang membuat hasil kurang presisi, contoh 1.0/3.0, 2.3/4.5 dst
      //hasil = (1.0/3.0*(R/pow(H,2)*pow(x,3)))+((pow(x,2)-2*pow(H,2))/pow(H,2))*sqrt(R*R+H*H); ///= 5.874706
//    hasil = (1.0/3.0*(R/H*H)*x*x*x);
//    hasil = hasil+(h*h/H*H*sqrt(R*R+H*H));
//    hasil = hasil-(2*sqrt(R*R+H*H));
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

    if(abs(fa-fb)<=0.000319)
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
