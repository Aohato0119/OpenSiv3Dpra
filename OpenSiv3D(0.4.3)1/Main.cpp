
# include <Siv3D.hpp> // OpenSiv3D v0.4.3

void Main()
{
	Scene::SetBackground(Palette::White);
	const Vec2 center = Scene::Center();
	Stopwatch stopwatch(true);
	while (System::Update())
	{
		if (MouseL.down())
		{
			if (stopwatch.isRunning())
			{
				stopwatch.pause();
			}
			else
			{
				stopwatch.resume();
			}
		}
		const double t = stopwatch.sF();
		Circle(center, 120).drawArc(t * 140_deg, 240_deg, 60, 0, ColorF(0.4));
		Circle(center, 180).drawArc(t * 90_deg, 160_deg, 60, 0, ColorF(0.6));
		Circle(center, 240).drawArc(t * 50_deg, 120_deg, 60, 0, ColorF(0.8));

	}
}

//
// = アドバイス =
// Debug ビルドではプログラムの最適化がオフになります。
// 実行速度が遅いと感じた場合は Release ビルドを試しましょう。
// アプリをリリースするときにも、Release ビルドにするのを忘れないように！
//
// 思ったように動作しない場合は「デバッグの開始」でプログラムを実行すると、
// 出力ウィンドウに詳細なログが表示されるので、エラーの原因を見つけやすくなります。
//
// = お役立ちリンク =
//
// OpenSiv3D リファレンス
// https://siv3d.github.io/ja-jp/
//
// チュートリアル
// https://siv3d.github.io/ja-jp/tutorial/basic/
//
// よくある間違い
// https://siv3d.github.io/ja-jp/articles/mistakes/
//
// サポートについて
// https://siv3d.github.io/ja-jp/support/support/
//
// Siv3D ユーザコミュニティ Slack への参加
// https://siv3d.github.io/ja-jp/community/community/
//
// 新機能の提案やバグの報告
// https://github.com/Siv3D/OpenSiv3D/issues
//
