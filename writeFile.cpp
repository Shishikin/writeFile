// writeFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    
    std::ifstream in;
    std::ofstream out;
    out.open("result.txt");
    std::string nameFile = "test.txt";
    in.open(nameFile);
    std::string testString;
    std::vector <std::string> test;
    if (in.is_open())
    {
        int i = 0;
        while (!in.eof())
        {
            getline(in, testString);
            test.push_back(testString);
//            out << testString;
            (i+1) % 3 == 0 ? out << test[i] << '\n': out << test[i] << '\t';
            printf("%s", test[i]);
            i = i + 1;
        }
        for (auto& a : test)
        {
            std::cout << a;
//            out << a << '\t';
        }
    }
    else
    {
        std::cout << "error";
    }
    std::cout << "Hello World!\n";
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
