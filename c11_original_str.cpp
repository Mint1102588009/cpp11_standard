#include <iostream>
using namespace std;

int main () {
    //before c++ 11 standard
    string str1 = "D:\LXCE_Config\onecli\\US\lnvgy_utl_debug_winsrv_x86-64";
    cout << str1 << endl;

    //after c++ 11 standard
    string str2 = R"Just(D:\LXCE_Config\onecli\\US\lnvgy_utl_debug_winsrv_x86-64)Just";
    //string str2 = R"Just for notification(D:\LXCE_Config\onecli\\US\lnvgy_utl_debug_winsrv_x86-64)Justice"; //error! It must be same!
    cout << str2 << endl;

    return 0;
}
