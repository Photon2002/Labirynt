#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

class Mapa
{
public:
	Mapa(const std::string& sciezkaPliku);
	unsigned int szerokosc;
	unsigned int wysokosc;
	void WypiszPola();
	std::vector<int> MapaJednowymiarowa;
	std::vector<int> MapaKolizji;
private:
	sf::Image mapa;
	std::vector<std::vector<int>> TablicaWartosci;
	void WczytajMape();
};