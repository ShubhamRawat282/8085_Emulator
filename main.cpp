#include "../8085_Emulator/HeaderFiles/header.h"
    private:
        map<string,string>memory;
        bool flag[5];
        string reg[7];
    public:
        Emulator()
        {
            flag[5]={false};
            reg[7]={NULL};
        }
};
int main()
{
    string pc;
    cout<<"Enter the address from where you want to start : ";
    cin>>pc;

}