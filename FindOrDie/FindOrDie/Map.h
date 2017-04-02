#pragma once
#include "SFML\Graphics.hpp"
#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
#include <string>
#include<math.h>
#include "Player.h"
#include <vector>

#define SIZE 64

using namespace std;

class Map
{
public:
	Map();
	~Map();
	void drawMap(sf::RenderWindow& window);
	pair <float, float> convert2DToIso(pair<float, float> pair);
	pair <float, float> convertIsoTo2D(pair<float, float> pair);
	bool isWalkable(pair<int, int> pair);
	pair <float, float> getTileCenterFromTileCoordinate(pair<float, float> pair);
	bool containsPoint(pair<float, float> point, pair<float, float> tileCenter);
	bool rectContainsPoint(pair<float, float> point, pair<float, float> tileCoords);

public:
	sf::Texture tileTexture;
	pair<sf::Sprite, bool> tile;
	sf::Vector2i loadcounter = sf::Vector2i(0, 0);
	vector<pair<float, float>> tilesCoords;
	vector <pair<sf::Sprite, bool>> tiles;
	pair <int, int> mapSizes = { 0,0 };
};
