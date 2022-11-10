#include <iostream>
#include <string>

struct Adress
{
    std::string City;
    std::string Street;
    int Building;
    int Flat;
    unsigned long long Index;
};

void ViewAdress(Adress& adress) {
    std::cout << "Город: " << adress.City << "\n";
    std::cout << "Улица: " << adress.Street << "\n";
    std::cout << "Номер дома: " << adress.Building << "\n";
    std::cout << "Номер квартиры: " << adress.Flat << "\n";
    std::cout << "Индекс: " << adress.Index << "\n\n";
}

int main()
{
    std::setlocale(LC_ALL, "Russian");
    const int n = 2;
    Adress* adreses = new Adress[n];

    adreses[0].City = "Москва";
    adreses[0].Street = "Арбат";
    adreses[0].Building = 12;
    adreses[0].Flat = 8;
    adreses[0].Index = 123456;

    adreses[1].City = "Ижевск";
    adreses[1].Street = "Пушкина";
    adreses[1].Building = 59;
    adreses[1].Flat = 143;
    adreses[1].Index = 953769;

    for (int i = 0; i < n; ++i) {
        ViewAdress(adreses[i]);
    }
}
