#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float vc, vp, r, hc, l, hp;
	cout << " Entre com o raio e a altura do cone: ";
	cin >> r >> hc;
	vc = (1/3.0)*M_PI*pow(r,2)*hc;
	cout << " Volume do cone: " << vc << endl;
	cout << " Entre com o lado e a altura da pirâmide: ";
	cin >> l >> hp;
	vp = (1/3.0)*pow(l,2)*hp;
	cout << "Volume da pirâmide: " << vp << endl;

	if (vp > vc )
		cout << " Pirâmide possui maior volume." << endl;
	if (vc > vp )
		cout << " Cone possui maior volume." << endl;
}
