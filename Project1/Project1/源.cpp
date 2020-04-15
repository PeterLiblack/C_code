//#include <stdafx.h>
#include <iostream> 
using namespace std;
#include <math.h>
//定义所需要用到的变量及数组
char S[100], A[10]; 
float P[10], f[10], gFs;
//编码程序
void bianma(int a, int h)
{
	int i, j;
	float fr;
	float ps = 1;
	float Fs = 0;
	float Sp[100], b[100], F[100];
	//以待编码的个数和字符个数为循环周期，将待编码的字符所对应的概率存入到Fs中
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (S[i] == A[j])
			{
				Sp[i] = P[j];
				fr = f[j]; //将划分好的[0,1)区间的对应点赋值给fr
			}
		}
		Fs = Fs + ps* fr; //从选择的子区间中继续进行下一轮的分割。不断的进行这个过程，直到所有符号编码完毕。
		ps *= Sp[i]; //求Ps
	}

	std::cout << "Fs=" << Fs << std::endl; //显示最终的算术编码
	gFs = Fs;
	float l = log(1 / ps) / log(2); //计算算术编码的码字长度1
	if (l > (int)l)
		l = (int)l + 1;
	else 
		l = int(l);
	// 将Fs转换成二进制的形式
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
	int z = m;//解决有关算术编码的进位问题，给二进制数加1
	if(m>=l)
	{
		while (1)
		{
			d[m - 1] = (d[m - 1] + 1) % 2;//最后位加l
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
//解码程序:
void jiema(int a, int h)
{
	int i, j;
	float Ft, Pt;
	float Fs = 0, Ps = 1;
	for (i = 0; i<h; i++)//以编码个数和符号个数为循环周期，对其进行解码
	{
		for (int j = a - 1; j>-1; j--)
		{
			Ft = Fs;
			Pt = Ps;

			Ft += Pt*f[j];//对进行逆编码
			Pt *= P[j];
			if (gFs >= Ft)//对其进行判断，并且将值存入到数组A中
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
	std::cout << "输入所要编码的符号的个数，并按回车跳转: " << std::endl;
	int a, i, h = 0;
	cin >> a;
	std::cout << "请输入符号及其相对应的概率值,并按回车跳转 : " << std::endl;
	for (i = 0; i < a; i++)
	{
		char x;
		float y;
		cin >> x;
		A[i] = x; //将字符依次存入数组A中
		cin >> y;
		P[i] = y;//将字符所对应的概率依次存入到数组P中
	}
	for (i = 1; i < a; i++)
	{
		f[0] = 0;
		f[i] = f[i - 1] + P[i - 1];//将要编码的数据映射到一个位于[0,1)的实数区间中
	}
	std::cout << "请输入所要编码的符号序列，并以*结尾: " << std::endl;
	while (1) //这个while语句的作用是将要编码的字符存入到数组S中
	{
		char ss;
		cin >> ss;
		if (ss == '*')
			break;//在以“*为结尾的时候结束存储
		S[h++] = ss;
	}

	std::cout << "输入的字符经过算术编码之后为: " << std::endl;
	bianma(a, h);
	std::cout << "由上述所对应的解码为:" << std::endl;
	jiema(a, h);

}