#include <iostream>

using namespace std;

class dikdortgen {
 public:
    int en;
    int boy;
    int f_alan()
     {
         int alan = en * boy;
         return alan;
     }

    int f_cevre()
     {
         int cevre = 2 * (en + boy);
         return cevre;
     } 
};

int main()
{
    dikdortgen ilkd;
    ilkd.en = 50;
    ilkd.boy = 100;
    cout << "cevre: " << ilkd.f_cevre() << " alan: " << ilkd.f_alan() << endl;

    dikdortgen ikincid;
    ikincid.en = 150;
    ikincid.boy = 200;
    cout << "cevre: " << ikincid.f_cevre() << " alan: " << ikincid.f_alan() << endl;

    return(0);
}