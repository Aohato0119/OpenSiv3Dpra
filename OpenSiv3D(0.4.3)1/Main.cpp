
# include <Siv3D.hpp> // OpenSiv3D v0.4.3

void Main()
{
	Scene::SetBackground(ColorF(0.25));
	while (System::Update())
	{
		if (Periodic::Square0_1(2s))
		{
			Circle(Scene::Center(), 200).draw();
		}
	}
}

