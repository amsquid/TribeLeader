#include <SFML/System/Vector2.hpp>

#pragma once

namespace tribeleader {
	class Tile {
	public:
		sf::Vector2i position;

		float hardness = 1.0f;
		float health = 1.0f;
	};
}