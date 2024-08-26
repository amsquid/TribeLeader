namespace tribeleader {
	class Entity {
	public:
		sf::Vector2f position;
		sf::Vector2f velocity;

		void move() {
			position.x += velocity.x;
			position.y += velocity.y;
		}
	};

	class Camera : public Entity {
	public:
		float zoom = 100.0f;
	};
}