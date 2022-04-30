#include <iostream>

int main()
{
    int num{};
    std::cout << "숫자를 입력하세요" << std::endl;
    std::cin >> num;
    std::string a = "수";
    std::string b = "박";

    std::string ans{};

    for (int i=0; i < num; i++)
    {
        if ((i % 2) == 0)
        {
            ans += a;
        }
        else
        {
            ans += b;
        }
        
    }
    std::cout << ans << std::endl;
}

