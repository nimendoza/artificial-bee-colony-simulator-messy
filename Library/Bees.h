#pragma once
#include "Bee.h"
#include "Base.h"
class Bees : public Base {
private:
	Bees();

	static Bees* instance;

	void cleanup();
public:
	~Bees();

	void update(const double& time) override;
	void render(Window& window) override;
	void spawn(const Point& position, Hive& hive, const BeeType& primary);
	void spawn(const Point& position, Hive& hive, const BeeType& primary, const BeeType& secondary);

	static Bees* get();

	std::map<BeeType, std::vector<Bee*>> list;
};