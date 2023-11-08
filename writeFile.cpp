// writeFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Test
{
    std::string date = "";
    std::string time = "";
    std::string precipitation = "";
    std::string temperature = "";
    std::string humidity = "";
    std::string windSpeed = "";
};

void ChoosePluseStringOfTest(char a, struct Test &testStruct, int count)
{
    switch (count)
    {
    case 0:
        testStruct.date.push_back(a);
        break;
    case 1:
        testStruct.time.push_back(a);
        break;
    case 2:
        testStruct.precipitation.push_back(a);
        break;
    case 3:
        testStruct.temperature.push_back(a);
        break;
    case 4:
        testStruct.humidity.push_back(a);
        break;
    case 5:
        testStruct.windSpeed.push_back(a);
        break;
    }
}

void FillstructTest(int number, struct Test &testStruct, std::vector <std::string> &test)
{
    int count = 0;
    for (auto& a : test[number])
    {
        if (a == ' ' || a == '\t')
        {
            count++;
        }
        else
        {
            ChoosePluseStringOfTest(a, testStruct, count);
        }
    }
}

void PrintStructTest(struct Test &testStruct)
{
    std::cout << testStruct.date << '\t';
    std::cout << testStruct.time << '\t';
    std::cout << testStruct.precipitation << '\t';
    std::cout << testStruct.temperature << '\t';
    std::cout << testStruct.humidity << '\t';
    std::cout << testStruct.windSpeed << '\n';
}

int main()
{
    std::vector <struct Test> testStruct;
    struct Test testingStruct;
    std::ifstream in;
    std::ofstream out;
    out.open("result.txt");
    std::string nameFile = "twofile.txt";
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
            testStruct.push_back(testingStruct);
            FillstructTest(i, testStruct[i], test);
            PrintStructTest(testStruct[i]);
            i = i + 1;
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
