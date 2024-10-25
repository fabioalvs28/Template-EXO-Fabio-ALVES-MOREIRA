#include "projectiles.h"
#include "arrows.h"
#include "nono.h"

int main()
{
	Projectiles<int> Arrow(5, 2, 3, 4, 1, 2, 0);
	Projectiles<float> Nono(1.2f, 10.5f, 8.3f, 4.5f, 20.0f, 2.0f, 10.0f);
	Projectiles<double> Rock(1.2, 2.5, 3.4, 8.5, 3.4, 3.5, 1);

	Arrow.PrintCoordinates();
	Nono.PrintCoordinates();
	Rock.PrintCoordinates();

	Arrow.Move();
	Nono.Move();
	Rock.Move();
};