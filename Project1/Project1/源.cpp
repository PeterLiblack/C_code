//#include <stdafx.h>
#include <iostream> 
using namespace std;
#include <math.h>
//��������Ҫ�õ��ı���������
char S[100], A[10]; 
float P[10], f[10], gFs;
//�������
void bianma(int a, int h)
{
	int i, j;
	float fr;
	float ps = 1;
	float Fs = 0;
	float Sp[100], b[100], F[100];
	//�Դ�����ĸ������ַ�����Ϊѭ�����ڣ�����������ַ�����Ӧ�ĸ��ʴ��뵽Fs��
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (S[i] == A[j])
			{
				Sp[i] = P[j];
				fr = f[j]; //�����ֺõ�[0,1)����Ķ�Ӧ�㸳ֵ��fr
			}
		}
		Fs = Fs + ps* fr; //��ѡ����������м���������һ�ֵķָ���ϵĽ���������̣�ֱ�����з��ű�����ϡ�
		ps *= Sp[i]; //��Ps
	}

	std::cout << "Fs=" << Fs << std::endl; //��ʾ���յ���������
	gFs = Fs;
	float l = log(1 / ps) / log(2); //����������������ֳ���1
	if (l > (int)l)
		l = (int)l + 1;
	else 
		l = int(l);
	// ��Fsת���ɶ����Ƶ���ʽ
	int d[20];
	int m = 0;
	while (l > m)
	{
		Fs = 2 * Fs;
		if (Fs > 1)
		{
			Fs = Fs - 1;
			d[m] = 1;
		}
		else if (Fs < 1)
			d[m] = 0;
		else 
		{ 
			d[m] = 1; 
		break; 
		}
		m++;
	}
	int z = m;//����й���������Ľ�λ���⣬������������1
	if(m>=l)
	{
		while (1)
		{
			d[m - 1] = (d[m - 1] + 1) % 2;//���λ��l
			if (d[m - 1] == 1)
				break;
			else m--;
		}
	}
	std::cout << "s=";
	for (int e = 0; e < z + 1; e++)
		std::cout << d[e];
	std::cout << std::endl;
}
//�������:
void jiema(int a, int h)
{
	int i, j;
	float Ft, Pt;
	float Fs = 0, Ps = 1;
	for (i = 0; i<h; i++)//�Ա�������ͷ��Ÿ���Ϊѭ�����ڣ�������н���
	{
		for (int j = a - 1; j>-1; j--)
		{
			Ft = Fs;
			Pt = Ps;

			Ft += Pt*f[j];//�Խ��������
			Pt *= P[j];
			if (gFs >= Ft)//��������жϣ����ҽ�ֵ���뵽����A��
			{
				Fs = Ft;
				Ps = Pt;
				std::cout << A[j];
				break;
			}
		}
	}
	std::cout << std::endl;
}
void main()
{
	std::cout << "������Ҫ����ķ��ŵĸ����������س���ת: " << std::endl;
	int a, i, h = 0;
	cin >> a;
	std::cout << "��������ż������Ӧ�ĸ���ֵ,�����س���ת : " << std::endl;
	for (i = 0; i < a; i++)
	{
		char x;
		float y;
		cin >> x;
		A[i] = x; //���ַ����δ�������A��
		cin >> y;
		P[i] = y;//���ַ�����Ӧ�ĸ������δ��뵽����P��
	}
	for (i = 1; i < a; i++)
	{
		f[0] = 0;
		f[i] = f[i - 1] + P[i - 1];//��Ҫ���������ӳ�䵽һ��λ��[0,1)��ʵ��������
	}
	std::cout << "��������Ҫ����ķ������У�����*��β: " << std::endl;
	while (1) //���while���������ǽ�Ҫ������ַ����뵽����S��
	{
		char ss;
		cin >> ss;
		if (ss == '*')
			break;//���ԡ�*Ϊ��β��ʱ������洢
		S[h++] = ss;
	}

	std::cout << "������ַ�������������֮��Ϊ: " << std::endl;
	bianma(a, h);
	std::cout << "����������Ӧ�Ľ���Ϊ:" << std::endl;
	jiema(a, h);

}