namespace tribeleader {
	class Entity {
	public:
		sf::Vector2f position;
		sf::Vector2f velocity;

		float health = 1.0f;
		float speed = 1.0f;

		void move() {
			position.x += velocity.x;
			position.y += velocity.y;
		}
	};

	class Camera : public Entity {
	public:
		float zoom = 5.0f;
	};

	class Player : public Entity { };
}