//3 item homework, lesson3, Valentin Tagaev
#include <iostream>
#include "item3_file2.h" //файл  первой формы
extern int a;
extern int b;
extern int c;
extern int d;

int main() {


    float x;
    x=a*(b+(c/d));
    std::cout<<"a="<<a  <<",b="<<b  <<",c="<<c  <<",d="<<d <<"\n";
    std::cout<<"before conversion, a*(b+(c/d))= "<< x<<"\n"<<"\n";

    float y = (float)(a)*((float)b+((float)c/(float)d));
    std::cout<<"after conversion to float, a*(b+(c/d))= "<< y<<"\n"<<"\n";

    float z = static_cast<float>(a)*static_cast<float>(b)+(static_cast<float>(c)/static_cast<float>(d));
    std::cout<<"2 example conversion to float, a*(b+(c/d))= "<< z<<"\n"<<"\n";

    return 0;
}

