#include <SFML/Graphics.hpp>
#include "MapaZawartosc.h"
#include "Mapa.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 1024), "Labirynt");
    MapaZawartosc zawartoscMapy;
    Mapa mapa1("assets/mapa2.png");
    mapa1.WypiszPola();

    if (!zawartoscMapy.load("assets/paleta.png", sf::Vector2u(32, 32), mapa1.MapaJednowymiarowa, mapa1.szerokosc, mapa1.wysokosc))
        throw std::exception("Nie mozna zaladowac palety!");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(zawartoscMapy);
        window.display();
    }
    return 0;
}