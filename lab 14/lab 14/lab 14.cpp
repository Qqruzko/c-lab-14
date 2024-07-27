#include <iostream>
#include <vector>

//template <typename T>
//double average(const T* MAS, const size_t SIZE)
//{
//    double sum = 0;
//    for (int i = 0; i < SIZE; i++)
//        sum += MAS[i];
//
//    return sum / SIZE;
//}


//template <typename T>
//void Print(vector<T>Ar, std::string razdel)
//{
//    cout << endl << " vecor<Vehicle> is Show " << endl << endl;
//
//    for (int i = 0; i < Ar.size(); i++) //вивід ветора
//    {
//        cout << Ar.at(i) << "|\n";
//    }
//}
template<typename T> void Print(std::vector<T> t, std::string razdel);

int main(void)
{
    /*const int SIZE = 10;
    int MAS[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

    std::cout << "Average: " << average(MAS, SIZE);
    std::cout << std::endl;
*/


    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", ");
   
    return 0;
};

template <typename T> void Print(std::vector<T> t, std::string razdel)
{
    for (auto it : t)
        std::cout << it << razdel;
}