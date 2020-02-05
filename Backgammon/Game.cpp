#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
#include<ctime>
using namespace std;
void ruch(char piony[27][5], int* tg,bool* got, int* zbiteo, int* zbiteg);
void zmiany_k1(char piony[27][5], int* tg, int* k1, int y, bool* got, int *zbiteo, int *zbiteg);
void pokazzbite(int* zbiteo, int* zbiteg);

void poczatek(char piony[27][5])
{
	for(int i=0;i<5;i++)
		piony[6][i] = '*';
	for (int i = 0; i < 3; i++)
		piony[8][i] = '*';
	for (int i = 0; i < 5; i++)
		piony[13][i] = '*';
	for (int i = 0; i < 2; i++)
		piony[24][i] = '*';
	for (int i = 0; i < 2; i++)
		piony[1][i] = 'o';
	for (int i = 0; i < 5; i++)
		piony[19][i] = 'o';
	for (int i = 0; i < 3; i++)
		piony[17][i] = 'o';
	for (int i = 0; i < 5; i++)
		piony[12][i] = 'o';
}
void plansza(char piony[27][5],int* zbiteo,int* zbiteg)
{
	char a = 219, v = 196;
	
	cout << endl;
	cout << a << " 1 1 1 . . .   . . . . . . " << a << endl;
	cout << a << " 2 1 0 9 8 7   6 5 4 3 2 1 " << a << endl;
	
	cout << a<<"|" << piony[12][0] << "|" << piony[11][0] << "|" << piony[10][0] << "|" << piony[9][0] << "|" << piony[8][0] << "|" << piony[7][0] << "|" << a << "|";
	cout << piony[6][0] << "|" << piony[5][0] << "|" << piony[4][0] << "|" << piony[3][0] << "|" << piony[2][0] << "|" << piony[1][0] << "|" << a << endl;

	cout << a << "|" << piony[12][1] << "|" << piony[11][1] << "|" << piony[10][1] << "|" << piony[9][1] << "|" << piony[8][1] << "|" << piony[7][1] << "|" << a << "|";
	cout << piony[6][1] << "|" << piony[5][1] << "|" << piony[4][1] << "|" << piony[3][1] << "|" << piony[2][1] << "|" << piony[1][1] << "|" << a << endl;

	cout << a << "|" << piony[12][2] << "|" << piony[11][2] << "|" << piony[10][2] << "|" << piony[9][2] << "|" << piony[8][2] << "|" << piony[7][2] << "|" << a << "|";
	cout << piony[6][2] << "|" << piony[5][2] << "|" << piony[4][2] << "|" << piony[3][2] << "|" << piony[2][2] << "|" << piony[1][2] << "|" << a << endl;

	cout << a << "|" << piony[12][3] << "|" << piony[11][3] << "|" << piony[10][3] << "|" << piony[9][3] << "|" << piony[8][3] << "|" << piony[7][3] << "|" << a << "|";
	cout << piony[6][3] << "|" << piony[5][3] << "|" << piony[4][3] << "|" << piony[3][3] << "|" << piony[2][3] << "|" << piony[1][3] << "|" << a << endl;

	cout << a << "|" << piony[12][4] << "|" << piony[11][4] << "|" << piony[10][4] << "|" << piony[9][4] << "|" << piony[8][4] << "|" << piony[7][4] << "|" << a << "|";
	cout << piony[6][4] << "|" << piony[5][4] << "|" << piony[4][4] << "|" << piony[3][4] << "|" << piony[2][4] << "|" << piony[1][4] << "|" << a << endl;

	cout << a << v << v << v << v << v << v << v << v << v << v << v << v << v << a << v << v << v << v << v << v << v << v << v << v << v << v << v << a;
	pokazzbite(zbiteo, zbiteg);

	cout << a << "|" << piony[13][4] << "|" << piony[14][4] << "|" << piony[15][4] << "|" << piony[16][4] << "|" << piony[17][4] << "|" << piony[18][4] << "|" << a << "|";
	cout << piony[19][4] << "|" << piony[20][4] << "|" << piony[21][4] << "|" << piony[22][4] << "|" << piony[23][4] << "|" << piony[24][4] << "|" << a << endl;

	cout << a << "|" << piony[13][3] << "|" << piony[14][3] << "|" << piony[15][3] << "|" << piony[16][3] << "|" << piony[17][3] << "|" << piony[18][3] << "|" << a << "|";
	cout << piony[19][3] << "|" << piony[20][3] << "|" << piony[21][3] << "|" << piony[22][3] << "|" << piony[23][3] << "|" << piony[24][3] << "|" << a << endl;

	cout << a << "|" << piony[13][2] << "|" << piony[14][2] << "|" << piony[15][2] << "|" << piony[16][2] << "|" << piony[17][2] << "|" << piony[18][2] << "|" << a << "|";
	cout << piony[19][2] << "|" << piony[20][2] << "|" << piony[21][2] << "|" << piony[22][2] << "|" << piony[23][2] << "|" << piony[24][2] << "|" << a << endl;

	cout << a << "|" << piony[13][1] << "|" << piony[14][1] << "|" << piony[15][1] << "|" << piony[16][1] << "|" << piony[17][1] << "|" << piony[18][1] << "|" << a << "|";
	cout << piony[19][1] << "|" << piony[20][1] << "|" << piony[21][1] << "|" << piony[22][1] << "|" << piony[23][1] << "|" << piony[24][1] << "|" << a << endl;

	cout << a << "|" << piony[13][0] << "|" << piony[14][0] << "|" << piony[15][0] << "|" << piony[16][0] << "|" << piony[17][0] << "|" << piony[18][0] << "|" << a << "|";
	cout << piony[19][0] << "|" << piony[20][0] << "|" << piony[21][0] << "|" << piony[22][0] << "|" << piony[23][0] << "|" << piony[24][0] << "|" << a << endl;

	cout << a << " 1 1 1 1 1 1   1 2 2 2 2 2 " << a << endl;
	cout << a << " 3 4 5 6 7 8   9 0 1 2 3 4 " << a << endl;
	cout << "_____________________________" << endl;
}
void kostki(int* k1,int* k2)
{
	*k1 = rand() % 6 + 1;
	*k2 = rand() % 6 + 1;
	cout <<"Kostka 1:   "<< *k1 << endl <<"Kostka 2:   "<< *k2 << endl;
}
void pokazzbite(int* zbiteo, int* zbiteg)
{
	cout << "	Zbite o: " << *zbiteo;
	cout << "	Zbite *: " << *zbiteg << endl;
}
void ruch(char piony[27][5], int* tg, bool* got, int* zbiteo, int* zbiteg)
{
	int p = 2;		//p=ilosc ruchow do wykorzystania
	int y = 0;
	int x = 0;
	int q = 0;
	int kosc1 = 0;
	int kosc2 = 0;
	int* k1;
	int* k2;
	k1 = &kosc1;
	k2 = &kosc2;
	int kostkadof = 0;
	int* kostka;
	kostka = &kostkadof;
	bool tak = 1;		//jezeli zly wybor kostki to powtarza pytanie
	kostki(k1, k2);
	if (kosc1 == kosc2)
		p += 2;
	int unikosc = *k1;

	if (*(tg) == 1 && *zbiteo != 0)
	{
		if (*k1 != *k2)
		{
			cout << "Ktorej kostki uzyjesz aby wyjsc z bandy?: ";
			cin >> x;
		}
		else
		{
			x = 1;
		}
	while (p != 0 && *(zbiteo) != 0)
	{
		if (x == 1)
		{
			unikosc = *k1;
		}
		else if (x == 2)
		{
			unikosc = *k2;
		}
		if (piony[unikosc][0] == 0)
		{
			piony[unikosc][0] = 'o';
			p--;
			*zbiteo -= 1;
			continue;
		}
		for (q = 0; q < 2; q++)
		{
			if (piony[unikosc][0] == '*')
			{
				if (piony[unikosc][1] == '*')
				{
					cout << "Przeciwnik ma tam przynajmniej dwa piony!" << endl;   //!!!!
					if (unikosc == *k1)
						unikosc = *k2;
					if (unikosc == *k2)
						unikosc = *k1;
					if (q == 1)
					{
						cout << "Nie mozesz zrobic zadnego ruchu! Za chwile rozpocznie sie tura nastepnego gracza" << endl;//to chyba gdzie indziej
						Sleep(5000);
						break;
					}
					continue;
				}
				if (piony[unikosc][1] == 0)
				{
					piony[unikosc][0] = 'o';
					*(zbiteo) -= 1;
					*(zbiteg) += 1;
					p--;
					continue;
				}
			}
		}
		if (piony[unikosc][0] == 'o')
		{
			for (int wys = 1; wys < 5; wys++)
			{
				if (wys == 4)
				{
					if (piony[unikosc][4] == 'o')
					{
						piony[unikosc][4] = '2';
						p--;
						*(zbiteo) -= 1;
						continue;
					}
					if (piony[unikosc][4] < 57 && piony[unikosc][4]>49)
					{
						piony[unikosc][4] += 1;
						p--;
						*(zbiteo) -= 1;
						continue;
					}
					if (piony[unikosc][4] == '9')
					{
						piony[unikosc][4] = 'A';
						p--;
						*(zbiteo) -= 1;
						continue;
					}
					if (piony[unikosc][4] == 'A')
					{
						piony[unikosc][4] = 'B';
						p--;
						*(zbiteo) -= 1;
						continue;
					}
				}
				if (piony[unikosc][wys] == 'o')
					continue;
				else if (piony[unikosc][wys] == 0)
				{
					*(zbiteo) -= 1;
					piony[unikosc][wys] = 'o';
					p--;
					continue;
				}
			}
		}
		if (*k1 != *k2)
		{
			if (x == 1)
				unikosc = *k2;
			if (x == 2)
				unikosc = *k1;
		}
	}
	}
	if ((*(tg) == 1 && *(zbiteo) == 0 && p!=0) || (*(tg) == -1 && *(zbiteg) == 0))
	{
		if (*k1 != *k2)
		{
			for(int q=0;q<1;q++)
			{
				if (x == 1)
				{
					x = 2;
					break;
				}
				if (x == 2)
				{
					x = 1;
					break;
				}
			}
			do
			{
				tak = 1;
				if (p > 1) 
				{
					cout << "Wybierz kostke: ";
					cin >> x;
				}
				if (x == 1)
				{
					do
					{
						*kostka = *k1;
						cout << "Z jakiego pola poruszysz sie o " << *k1 << " ?: ";
						cin >> y;
						zmiany_k1(piony, tg, kostka, y, got, zbiteo, zbiteg);
					} while (*got == 0);
					p--;
					if (p != 0)
					{
						do
						{
							*kostka = *k2;
							cout << "Z jakiego pola poruszysz sie o " << *k2 << " ?: ";
							cin >> y;
							zmiany_k1(piony, tg, kostka, y, got, zbiteo, zbiteg);
						} while (*got == 0);
					}
				}
				else if (x == 2)
				{
					do
					{
						*kostka = *k2;
						cout << "Z jakiego pola poruszysz sie o " << *k2 << " ?: ";
						cin >> y;
						zmiany_k1(piony, tg, kostka, y, got, zbiteo, zbiteg);
					} while (*got == 0);
					p--;
					if (p != 0)
					{
						do
						{
							*kostka = *k1;
							cout << "Z jakiego pola poruszysz sie o " << *k1 << " ?: ";
							cin >> y;
							zmiany_k1(piony, tg, kostka, y, got, zbiteo, zbiteg);
						} while (*got == 0);
					}
				}
				else if (x != 1 && x != 2)
				{
					cout << "Kostki sa dwie! Wybierz 1 lub 2" << endl;
					tak = 0;
				}
			} while (tak == 0);
		}
		else if (*k1 == *k2)
		{
			cout << "Masz 4 ruchy!" << endl;
			for (int b = 0; b < 4; b++)
			{
				do
				{
					if (p == 0)
						break;
					*kostka = *k1;
					cout << "Z jakiego pola poruszysz sie o " << *k1 << " ?: ";
					cin >> y;
					zmiany_k1(piony, tg, kostka, y, got, zbiteo, zbiteg);
					if (*got == 1)
						p--;
				} while (*got == 0);
			}
		}
	}
}

void zmiany_k1(char piony[27][5], int* tg, int* kostka,int y, bool* got,int* zbiteo, int* zbiteg)				//dla kostki 2 tez juz dziala(nazwa zostaje)
{
	int r = *kostka;
	int przypadek = 0;
	bool czydobrze = 1;										//gotowe-czy zrobi sie caly ruch czy trzeba bedzie powtarzac, inicjacja w 'main'
	int j = 0;
	if (*tg == 1)			//gracz o
	{
		for ( j = 4; j >(-1); j--)
		{
			if (piony[y][j] == '*')
			{
				cout << "To nie twoje piony" << endl;			
				czydobrze = 0;
				break;
			}
			if (piony[y][j] == 'o')
			{
				czydobrze = 1;
				przypadek = 1;
				break;
			}
			if (j == 0)
			{
				cout << "Nie masz piona na tym polu" << endl;				
				czydobrze = 0;
				break;													//czydobrze-jak zle sie wybierze
			}
			if (piony[y][4] == '2')
			{
				if (piony[y][3] == '*')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == 'o')
				{
					czydobrze = 1;
					przypadek = 2;
					break;
				}
			}
			if (piony[y][4] < 58 && piony[y][4]>49)
			{
				if (piony[y][3] == '*')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == 'o')
				{
					czydobrze = 1;
					przypadek = 3;
					break;
				}
			}
			if (piony[y][4] == 'A')
			{
				if (piony[y][3] == '*')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == 'o')
				{
					czydobrze = 1;
					przypadek = 4;
					break;
				}
			}
			if (piony[y][4] == 'B')
			{
				if (piony[y][3] == '*')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == 'o')
				{
					czydobrze = 1;
					przypadek = 5;
					break;
				}
			}
		}
		if (czydobrze == 1)													//jesli nie dobrze to jeszcze trzeba else if i do petli dowhile cin y
		{
			for (int i = 0; i < 5; i++)										//sprawdzanie od 1 miejsca([0]) jakie sa piony
			{
				if (piony[y + (*tg * *kostka)][i] == 0)
				{
					piony[y + (*tg * *kostka)][i] = 'o';
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = 'o';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					*got = 1;
					break;
				}
				if (piony[y + (*tg * *kostka)][0] == '*')
				{
					if (piony[y + (*tg * *kostka)][1] == '*')
					{
						cout << "Przeciwnik ma tam przynajmniej 2 piony. Wybierz inne pole" << endl;
						*got = 0;
						break;
					}
					if (piony[y + (*tg * *kostka)][1] == 0)													//zbijanie *
					{
						piony[y + (*tg * *kostka)][0] = 'o';
						(*zbiteg) ++;
						if (przypadek == 1)
							piony[y][j] = 0;
						if (przypadek == 2)
							piony[y][j] = 'o';
						if (przypadek == 3)
							piony[y][j] -= 1;
						if (przypadek == 4)
							piony[y][j] = 57;
						if (przypadek == 5)
							piony[y][j] = 'A';
						*got = 1;
						
						break;
					}
				}
				if (piony[y + (*tg * *kostka)][4] == 'o')
				{
					piony[y + (*tg * *kostka)][4] = '2';
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = 'o';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}
				if (piony[y + (*tg * *kostka)][4] < 57 && piony[y + (*tg * *kostka)][4] >49)
				{
					piony[y + (*tg * *kostka)][4] += 1;
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = 'o';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}														//jak bedzie liczba to zwieksza sie liczba (system 16)
				if (piony[y + (*tg * *kostka)][4] == '9')
				{
					piony[y + (*tg * *kostka)][4] = 'A';
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = 'o';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}
				if (piony[y + (*tg * *kostka)][4] == 'A')
				{
					piony[y + (*tg * *kostka)][4] = 'B';
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = 'o';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}
			}
		}
		else if (czydobrze == 0)
		{
			*got = 0;
		}
	}
	if (*tg == -1)			//gracz *
	{
		for (j = 4; j > (-1); j--)
		{
			if (piony[y][j] == 'o')
			{
				cout << "To nie twoje piony" << endl;
				czydobrze = 0;
				break;
			}
			if (piony[y][j] == '*')
			{
				czydobrze = 1;
				przypadek = 1;
				break;
			}
			if (j == 0)
			{
				cout << "Nie masz piona na tym polu" << endl;
				czydobrze = 0;
				break;													//czydobrze-jak zle sie wybierze
			}
			if (piony[y][4] == '2')
			{
				if (piony[y][3] == 'o')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == '*')
				{
					czydobrze = 1;
					przypadek = 2;
					break;
				}
			}
			if (piony[y][4] < 58 && piony[y][4]>49)
			{
				if (piony[y][3] == 'o')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == '*')
				{
					czydobrze = 1;
					przypadek = 3;
					break;
				}
			}
			if (piony[y][4] == 'A')
			{
				if (piony[y][3] == 'o')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == '*')
				{
					czydobrze = 1;
					przypadek = 4;
					break;
				}
			}
			if (piony[y][4] == 'B')
			{
				if (piony[y][3] == 'o')
				{
					cout << "To nie twoje piony" << endl;
					czydobrze = 0;
					break;
				}
				else if (piony[y][3] == '*')
				{
					czydobrze = 1;
					przypadek = 5;
					break;
				}
			}
		}
		if (czydobrze == 1)													//jesli nie dobrze to jeszcze trzeba else if i do petli dowhile cin y
		{
			for (int i = 0; i < 5; i++)										//sprawdzanie od 1 miejsca([0]) jakie sa piony
			{
				if (piony[y + (*tg * *kostka)][i] == 0)
				{
					piony[y + (*tg * *kostka)][i] = '*';
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = '*';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					*got = 1;
					break;
				}
				if (piony[y + (*tg * *kostka)][0] == 'o')
				{
					if (piony[y + (*tg * *kostka)][1] == 'o')
					{
						cout << "Przeciwnik ma tam przynajmniej 2 piony. Wybierz inne pole" << endl;
						*got = 0;
						break;
					}
					if (piony[y + (*tg * *kostka)][1] == 0)
					{
						piony[y + (*tg * *kostka)][0] = '*';
						(*zbiteo) ++;
						if (przypadek == 1)
							piony[y][j] = 0;
						if (przypadek == 2)
							piony[y][j] = '*';
						if (przypadek == 3)
							piony[y][j] -= 1;
						if (przypadek == 4)
							piony[y][j] = 57;
						if (przypadek == 5)
							piony[y][j] = 'A';
						*got = 1;

						break;
					}
				}
				if (piony[y + (*tg * *kostka)][4] == '*')
				{
					piony[y + (*tg * *kostka)][4] = '2';
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = '*';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}
				if (piony[y + (*tg * *kostka)][4] < 57 && piony[y + (*tg * *kostka)][4] >49)
				{
					piony[y + (*tg * *kostka)][4] += 1;
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = '*';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}														//jak bedzie liczba to zwieksza sie liczba (system 16)
				if (piony[y + (*tg * *kostka)][4] == '9')
				{
					piony[y + (*tg * *kostka)][4] = 'A';
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = '*';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}
				if (piony[y + (*tg * *kostka)][4] == 'A')
				{
					piony[y + (*tg * *kostka)][4] = 'B';
					*got = 1;
					if (przypadek == 1)
						piony[y][j] = 0;
					if (przypadek == 2)
						piony[y][j] = '*';
					if (przypadek == 3)
						piony[y][j] -= 1;
					if (przypadek == 4)
						piony[y][j] = 57;
					if (przypadek == 5)
						piony[y][j] = 'A';
					break;
				}
			}
		}
		else if (czydobrze == 0)
		{
			*got = 0;
		}
	}
}

void tura(int* tg)
{
	for (int p = 0; p < 1; p++)
	{
		if (*tg == 1)
		{
			*tg = -1;
			cout << "Tura gracza: *" << endl;
			break;
		}
		if (*tg == -1)
		{
			*tg = 1;
			cout << "Tura gracza: o" << endl;
			break;
		}
	}
}
int main()
{
	srand(time(NULL));
	int t;
	t = rand() % 2;
	if (t == 0)
	{
		t = -1;
	}
	int zbio = 0;
	int zbig = 0;
	int* zbiteo;
	int* zbiteg;
	zbiteo = &zbio;
	zbiteg = &zbig;
	int* tg;
	tg = &t;
	bool gotowe = 0;										//gotowe-czy zrobi sie caly ruch czy trzeba bedzie powtarzac
	bool* got;
	got = &gotowe;
	char piony[27][5]{};
	bool endgame = 0;
	poczatek(piony);
	while (endgame == 0)
	{
		plansza(piony,zbiteo,zbiteg);
		tura(tg);
		ruch(piony, tg, got, zbiteo, zbiteg);
	}
	system("pause");
}