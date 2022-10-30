/*
// q1.1
#include <stdio.h>

int	main(void)
{
	int	a;
	int b;
	int sum;

	a = 15;
	b = 37;
	sum = a + b;
	printf("整数値%dと%dの和は%d\n", a, b, sum);
	return (0);
}
*/

/*
// q1.2
#include <stdio.h>

int main(void)
{
	int	a;
	int b;
	int dif;

	a = 15;
	b = 37;
	dif = a - b;
	printf("整数値%dから%dを引いた値は%d\n", a, b, dif);
	return (0);
}
*/

/*
// q1.3
#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	while (i < 3)
	{
		printf("風林火山\n");
		i++;
	}
	return (0);
}
*/

/*
// q1.3
#include <stdio.h>

int main(void)
{
	printf("風\n林\n火\n山\n");
	return (0);
}
*/

/*
// q1.4
#include <stdio.h>

int main(void)
{
	printf("もしもし。\nこんにちは。\n\nそれでは。\n");
	return (0);
}
*/

/*
// q1.5
#include <stdio.h>
   
int main(void)
{
	int i = 0;
	while (i < 3)
	{
		printf("\a警報!! ");
		i++;
	}
	return (0);
}
*/

/*
// q1.6
#include <stdio.h>

int main(void)
{
	int num;

	num = 42;
	printf("%d\n", 42);
	return (0);
}
*/

/*
// q1.7
#include <stdio.h>

int main(void)
{
	int no;
	printf("noの値を入力してください: ");
	scanf("%d", &no);
	printf("noの値は%dとなっています\n", no);
	return (0);
}
*/

/*
// q1.8
#include <stdio.h>

int main(void)
{
	int num;
	int sum;

	printf("整数を入力してください: ");
	scanf("%d", &num);
	sum = num + 10;
	printf("その値に10を加えると%dです\n", sum);
	return (0);
}
*/

/*
// q1.9
#include <stdio.h>

int main(void)
{
	int	num;
	int dif;

	printf("整数を入力してください: ");
	scanf("%d", &num);
	dif = num - 10;
	printf("その値から10を減ずると%dです\n", dif);
	return (0);
}
*/

/*
// q1.10
#include <stdio.h>

int main(void)
{
	puts("風\n林\n火\n山");
	return (0);
}
*/

/*
// q1.11
#include <stdio.h>

int main(void)
{
	int input_cnt;
	int *num;
	int i;
	int product = 1;

	printf("何回、値を入力しますか?: ");
	scanf("%d", &input_cnt);
	i = 0;
	while (i < input_cnt)
	{
		printf("整数%d: ", i + 1);
		scanf("%d", &num[i]);
		product = product * num[i];
		i++;
	}
	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("これらの積は%dです", product);
	return (0);
}
*/

/*
// q1.12
未解答
*/

// 錬成1
/*
// 1.1
#include <stdio.h>
#include <string.h>

int main(void)
{
	char one_ch[1][3] = {"漢"};
	char str[2][126] = {"風林火山"};
	int i;

	char ch_output[5] = {0};
	int one_ch_len; // one_chの文字長
	int ch_position=1; // チェックする文字の位置
	one_ch_len = strlen(one_ch[0]);
	strncpy(ch_output, &str[0][(ch_position - 1) * one_ch_len], one_ch_len);
	i = 0;
	while (ch_output[i] != '\0')
	{
		strncpy(ch_output, &str[0][(ch_position - 1) * one_ch_len], one_ch_len);
		printf("%s\n", ch_output);
		ch_position++;
	}
	puts("風\n林\n火\n山");
	return 0;
}
*/

/*
// 1.2
#include <stdio.h>

int main(void)
{
	int i = 0;
	while (i < 2)
	{
		printf("\a");
		i++;
	}
	return (0);
}
*/

/*
// 1.3
#include <stdio.h>

int main(void)
{
	char	*greet1 = "こんにちは。";
	char	*greet2 = "はじめまして。";
	printf("\n%s\n\n%s\n\n", greet1, greet2);
	char str[256];
	puts("表示したい文字列を入力してください。");
	while (scanf("%s", str) == 1) // 読み込めるあいだ繰り返す
	{
		printf("ctrl + cで終了 < ");
		printf("	%s\n", str); // ひとつずつ関数に渡す
	}
	return (0);
}
*/

/*
// 1.4
#include <stdio.h>

int main(void)
{
	int num;
	int product;

	printf("整数を入力してください: ");
	scanf("%d", &num);
	product = num * 5;
	printf("その和の5倍は%dです\n", product);
	return (0);
}
*/

/*
// 1.5
#include <stdio.h>

int main(void)
{
	int num_of_times;
	int i;
	int num[32];
	int product;

	product = 1;
	printf("何番まで入力しますか?: ");
	scanf("%d", &num_of_times);
	i = 0;
	while (i < num_of_times)
	{
		printf("%d番目: ", i + 1);
		scanf("%d", &num[i]);
		product = product * num[i];
		i++;
	}
	printf("入力した値の積は%dです\n", product);
	return (0);
}
*/

/*
// 2.1
// 未解答
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num;
	int sum;
	int dif;
	int product;
	int quotient;
	int remainder;
	//printf("整数を入力してください: ");
	//scanf("%d", &num);
	sum = num + 10;
	dif = num - 10;
	product = num * 10;
	quotient = num / 10;
	remainder = num % 10;

	char one_ch[1][3] = {"漢"};
	char str[2][126] = {"和差積商余"};
	int i;

	char ch_output[5] = {0};
	int one_ch_len; // one_chの文字長
	int ch_position=1; // チェックする文字の位置
	one_ch_len = strlen(one_ch[0]);
	strncpy(ch_output, &str[0][(ch_position - 1) * one_ch_len], one_ch_len);
	i = 0;
	while (ch_output[i] != '\0')
	{
		strncpy(ch_output, &str[0][(ch_position - 1) * one_ch_len], one_ch_len);
		printf("10との%sは%dです\n", ch_output, sum);
		ch_position++;
	}
}
*/

/*
// 2.2
#include <stdio.h>

int main(void)
{
	int n_of_times;
	int num[32];
	int no;
	int i;
	int quontient;
	int remainder;
	char sign[32];

	printf("noの値を入力してください: ");
	scanf("%d", &no);
	// printf("いくつ整数を入力しますか?: ")
	// scanf("%d", &n_of_times);
	// i = 0;
	// while (i < n_of_times)
	// {
	// 	printf("%d番目: ", i + 1);
	// 	scanf("%d", &num[i]);
	// 	i++;
	// }
	quontient = no / 5;
	remainder = no % 5;
	sign[0] = '%';
	sign[1] = '/';
	//puts("%d");
	printf("no %c 5は%dです\n", sign[0], quontient);
	printf("no %c 5は%dです\n", sign[1], remainder);
	return (0);
}
*/

/*
// 2.3
#include <stdio.h>

int main(void)
{
	int i;
	int num[32];
	int per;
	int larger;
	int smaller;

	i = 0;
	while (i < 2)
	{
		printf("整数%d: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	if (num[0] < num[1])
	{
		per = num[0] * 100 / num[1];
		larger = num[1];
		smaller = num[0];
	}
	else
	{
		per = num[1] * 100 / num[0];
		larger = num[0];
		smaller = num[1];
	}
	printf("整数%dは整数%dの%d％です", smaller, larger, per);
	return (0);
}
*/

/*
// 2.4
#include <stdio.h>

int main(void)
{
	int i;
	int num[32];
	int sum;
	int product;

	i = 0;
	while (i < 2)
	{
		printf("整数%d: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	sum = 0;
	product = 1;
	sum = num[0] + num[1];
	product = num[0] * num[1];
	printf("これらの和は%dで積は%dです", sum, product);
	return (0);
}
*/

/*
// 2.5
#include <stdio.h>

int main(void)
{
	int i;
	double num[32];
	double n_of_times;
	double ave;
	int n_to_div;

	printf("いくつ整数を入力しますか?: ");
	scanf("%lf", &n_of_times);
	i = 0;
	ave = 0;
	while (i < n_of_times)
	{
		printf("整数%d: ", i + 1);
		scanf("%lf", &num[i]);
		n_to_div = n_of_times - 1;
		ave = (ave + num[i]) / n_to_div;
		printf("%f\n", ave);
		i++;
	}
	ave = ave * (-1);
	printf("少数切り捨て平均値の符号を反転した値は%.0fです\n", ave);
	return (0);
}
*/

/*
// 2.6
#include <stdio.h>

int main(void)
{
	double num;

	printf("実数を入力してください\n");
	scanf("%lf", &num);
	printf("あなたは%lfと入力しましたね", num);
	return (0);
}
*/

/*
// 2.7
#include <stdio.h>

int main(void)
{
	double num;
	double sum;
	double dif;
	double prod;
	double quot;

	puts("実数を入力してください: ");
	scanf("%lf", &num);
	sum = num + 0.1;
	dif = num - 0.1;
	prod = num * 0.1;
	quot = num / 0.1;
	printf("0.1を加えると%lf\n", sum);
	printf("0.1を減ずると%lf\n", dif);
	printf("0.1を乗じると%lf\n", prod);
	printf("0.1を叙すと%lf\n", quot);
	return (0);
}
*/

/*
// 2.8
#include <stdio.h>

int main(void)
{
	double len;
	double inch = 0.393701;

	puts("長さをcmで入力してください: ");
	scanf("%lf", &len);
	len = len * inch;
	printf("それは%lfinchです\n", len);
	return (0);
}
*/

/*
// 2.9
#include <stdio.h>

int main(void)
{
	float num2;
	int num3;
	double num4;

	const int num1 = 3;
	num2 = 2.4;
	num3 = 4.0;
	num4 = 3.3;
	printf("%d\n", num1 * num3);
	printf("%lf\n", num4 * num3);
	printf("%f\n", num4 * num3);
	printf("%f\n", num2 * num3);
	printf("%d\n", num1 / num3);
	printf("%lf\n", num4 / num3);
	printf("%f\n", num4 / num3);
	printf("%f\n", num2 / num3);
	printf("%d\n", num1 % num3);
	printf("%d\n", (int)(num4) % (int)num3);
	printf("%d\n", (int)(num4) % (int)num3);
	printf("%d\n", (int)(num2) % (int)num3);
	return (0);
}
*/

/*
// 2.10
#include <stdio.h>

int main(void)
{
	int num[32];
	double sum;
	double ave;
	int i;

	printf("3つの整数を入力してください\n");
	sum = 0.0;
	ave = 1.0;
	i = 0;
	while (i < 3)
	{
		printf("整数%d: ", i + 1);
		scanf("%d", &num[i]);
		sum = sum + num[i];
		i++;
	}
	ave = sum / i;
	printf("合計は%.0lf平均は%.1lfです", sum, ave);
	return (0);
}
*/

/*
// 2.11
#include <stdio.h>

int main(void)
{
	double per;
	int i;
	int num_tag;
	double num[i];
	puts("2つの整数を入力してください");
	i = 0;
	num_tag = 'A';
	//per = A / B;
	while (i < 2)
	{
		printf("整数%c: ", num_tag);
		scanf("%lf", &num[i]);
		printf("%lf\n", num[i]);
		i++;
		num_tag++;
	}
	printf("%lf\n", (num[0] / num[1]) * 100);
	printf("Aの値はBの値の%lf％です\n", (num[0] / num[1]) * 100);
	return (0);
}
*/

/*
//2.12
#include <stdio.h>

int main(void)
{
	double std_weight;
	double height;
	printf("身長を入力してください: ");
	scanf("%lf", &height);
	std_weight = (height * height * 22) / 10000;
	printf("標準体重は%.1lfです", std_weight);
	return (0);
}
*/

/*
//rensei
//r2.1

#include <stdio.h>

int main(void)
{
	int num;
	int last_digit;

	printf("整数を入力してください: ");
	scanf("%d", &num);
	if (num < 0)
	{
		num = num * (-1);
	}
	last_digit = num % 10;
	printf("最も下の桁は%dです", last_digit);
	return (0);
}
*/

/*
//r2.2
#include <stdio.h>

int main(void)
{
	double num[32];
	int i;
	double ave;

	ave = 0;
	i = 0;
	while (i < 2)
	{
		puts("2つの整数を入力してください");
		scanf("%lf", &num[i] );
		ave = (ave + num[i]) / (i + 1);
		i++;
	}
	printf("これらの平均は%.1lfです\n", ave);
	return (0);
}
*/

/*
//r2.3
#include <stdio.h>

int main(void)
{
	int num1 = 1234;
	double num2 = 123.45;

	printf("%04d\n", 12);    // 0012
	printf("%08d\n", 12);    // 00000012
	printf("%09f\n", 3.14);  // 03.140000
	printf("%4d\n", 12);   // "  12"
	printf("%2d\n", 1234); // "1234"（数値の桁数が優先される）
	printf("%4d\n", -12);  // " -12"（符号も含まれる）
	printf("%9f\n", 3.14); // " 3.140000"（符号や小数点も含まれる）	
	printf("[%07d]\n", 1234);
	printf("[%7d]\n", 1234);
	printf("[%-7d]\n", 1234);
	printf("[%lf]\n", num2);
	printf("[%-9.2lf]\n", num2);
	//printf("[%.2(-9)lf]\n", num2);
	printf("[%7.2lf]\n", num2);
	return (0);
}
*/

/*
//3.1
#include <stdio.h>

int main(void)
{
	int num;
	int checker_multiple;
	
	checker_multiple = 10;

	printf("input integer!");
	scanf("%d", &num);
	if (!(num % 10 == 0))
		printf("その数は10の倍数ではありません");
	else
		printf("その数は10の倍数です");
	return (0);
}
*/

/*
//整数5までの最大値判定関数
#include <stdio.h>

int indicate_max(integer1, integer2, integer3, integer4, integer5)//この行からreturn(keep_max)までが、最大値を表す関数

	int keep_max;

	keep_max = integer1;
	if (keep_max < integer2)
	{
		keep_max = integer2;
	}
	if (keep_max < integer3)
	{
		keep_max = integer3;
	}
	if (keep_max < integer4)
	{
		keep_max = integer4;
	}
	if (keep_max < integer5)
	{
		keep_max = integer5;
	}
	return (keep_max);
}

//整数5までの最大値判定関数
int main(void)
{
	int integer1;
	int integer2;
	int integer3;
	int integer4;
	int integer5;
	int answer;

	puts("5つの整数を入力してください");
	printf("整数1: ");
	scanf("%d", &integer1);
	printf("整数2: ");
	scanf("%d", &integer2);
	printf("整数3: ");
	scanf("%d", &integer3);
	printf("整数4: ");
	scanf("%d", &integer4);
	printf("整数5: ");
	scanf("%d", &integer5);
	//scanf("%d%d%d%d%d", &integer1, &integer2, &integer3, &integer4, &integer5);
	answer = indicate_max(integer1, integer2, integer3, integer4, integer5);//"最大値を表す関数"を呼び出す
	printf("最大値は%dです\n", answer);
	return (0);
}
*/

/*
#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int max;

	puts("5つの整数を入力してください。");
	printf("整数1:"); scanf("%d",&num1);
	printf("整数2:"); scanf("%d",&num2);
	printf("整数3:"); scanf("%d",&num3);
	printf("整数4:"); scanf("%d",&num4); 
	printf("整数5:"); scanf("%d",&num5);
    //scanf("%d",&num1);
    max = num1;
    //scanf("%d",&num2);
    if(max < num2)
    {
        max = num2;
    }
    //scanf("%d",&num3);
	if(max < num3)
    {
        max = num3;
    }
    //scanf("%d",&num4);
   if(max < num4)
    {
        max = num4;
    }
    //scanf("%d",&num5);
   if(max < num5)
    {
        max = num5;
    }
    printf("最大値 is %d\n",max);
    return 0;
}
*/
/*
//3.2
#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	printf("input two integer!: ");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		if (num1 % num2 == 0)
		{
			 printf("B is A's divisor!");
		}
		else
		 	printf("B is A's divisor!");
	}
	else
	{
		if (num2 % num1 == 0)
			printf("A is B's divisor!");
		else
			printf("A is not B's divisor!");
	}
	return (0);
}
*/
//3.3
/*
#include <stdio.h>
int main(void)
{
	int num;

	printf("input integer!");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("The number is even!");
	else
		printf("The number is odd!");
	return (0);
}
*/
/*
//3.4
#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 1;
	int c = 2;
	
	printf("a == b: %d, b == c: %d\n", a == b, b == c);
	printf("a != b: %d, b != c: %d\n", a != b, b != c);
	printf("a >= b: %d, b >= c: %d\n", a >= b, b >= c);
	printf("a <= b: %d, b <= c: %d\n", a <= b, b <= c);
	return (0);
}
*/
/*
//3.5
#include <stdio.h>
int main(void)
{
	int num;

	printf("input integer!: ");
	scanf("%d", &num);
	if (num < 0)
		num = num * (-1);
	printf("Absolute value is %d\n", num);
	return (0);
}
*/
/*
//3.6
#include <stdio.h>
int main(void)
{
	int num;

	printf("input integer!: ");
	scanf("%d", &num);
	if (num == 0)
		printf("You entered zero value!");
	else
		printf("You entered non-zero value!");
	return (0);
}
*/
/*
//3.7
#include <stdio.h>
int main(void)
{
	int num[32];
	int i;
	int distinguish;

	printf("Input two integer!\n");
	
	distinguish = 'A';
	i = 0;
	while (i < 2)
	{
		printf("integer[%c]: ", distinguish);
		scanf("%d", &num[i]);
		i++;
		distinguish++;
	}
	
	if (num[0] > num[1])
		printf("A is larger than B!");
	else
		printf("B is larger than A!");
	return (0);
}
*/
/*
//3.8
#include <stdio.h>
int main(void)
{
	int num[32];
	int num_of_times;
	int i;
	int max;

	max = 0;
	printf("How many integer do you wanna input?: ");
	scanf("%d", &num_of_times);
	while (i < num_of_times)
	{
		printf("num%d: ", i + 1);
		scanf("%d", &num[i]);
		if (num[i] > max)
		{
			max = num[i];
		}
		i++;
	}
	printf("max is %d!\n", max);
	return (0);
}
*/
//3.9
//3.10
/*
#include <stdio.h>
int main(void)
{
	int num[32];
	//int num_of_times;
	int i;
	int ans;

	i = 0;
	puts("Input two integer!");
	while (i < 2)
	{
		printf("num%d: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	(num[0] > num[1]) ? (ans = num[0] - num[1]) : (ans = num[1] - num[0]);
	printf("These diff is %d!\n", ans);
	return (0);
}
*/
/*
//3.11
#include <stdio.h>
int main(void)
{
	int num[32];
	//int num_of_times;
	int i;
	int ans;

	i = 0;
	puts("Input two integer!");
	while (i < 2)
	{
		printf("num%d: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	if (num[0] > num[1])
		ans = num[0] - num[1];
	else
		ans = num[1] - num[0];
	printf("These diff is %d!\n", ans);
	return (0);
}
*/
/*
//3.12
#include <stdio.h>
int main(void)
{
	int num[32];
	int i;
	int max;
	int dummy;

	dummy = 0;
	max = 0;
	printf("Input three integer!\n");
	i = 0;
	while (i < 3)
	{
		printf("num%d: ", i + 1);
		scanf("%d", &num[i]);
		dummy = max;
		max < num[i] ? max = num[i] : printf("\a");
		i++;
	}
	printf("max is %d\n", max - 0);
	return (0);
}
*/
/*
//3.13
#include <stdio.h>
int main(void)
{
	int num[32];
	int i;

	i = 0;
	puts("Input two integer!");
	while(i < 2)
	{
		printf("num%d: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	if (num[0] == num[1])
		printf("These numbers are same value!");
	else if (num[0] > num[1])
		printf("Larger is %d\nSmaller is %d\n", num[0], num[1]);
	else
		printf("Larger is %d\nSmaller is %d\n", num[1], num[0]);
	return (0);
}
*/
/*
//3.14
#include <stdio.h>
int main(void)
{
	int num[32];
	int i;

	puts("Input three integer!");
	i = 0;
	while (i < 3)
	{
		printf("num%d: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	i = 0;
	if ((num[0] == num[1]) && (num[0] == num[2]))
		i = 3;
	if ((num[0] == num[1]) || (num[0] == num[2]) || (num[2] == num[1]))
		i = 2;
	printf("The %d numbers are equal!", i);
	return (0);
}
*/
/*
//3.15
#include <stdio.h>
int main(void)
{
	int num[32];
	int i;
	int dif;

	puts("Input two integer!");
	i = 0;
	while (i < 2)
	{
		printf("num%d: ", i);
		scanf("%d", &num[i]);
		i++;
	}
	if (num[0] > num[1])
	{
		dif = num[0] - num[1];
		if (dif >= 11)
			printf("The diff between these number is more than 11!");
		else
			printf("The diff between these number is less than 10!");
	}
	else
	{
		dif = num[1] - num[0];
		if (dif >= 11)
			printf("The diff between these number is more than 11!");
		else
			printf("The diff between these number is less than 10!");
		return (0);
	}
}
*/
/*
//3.16
#include <stdio.h>
int main(void)
{
	int score;
	int eval;
	int i;

	score = 0;
	printf("Input your score!: ");
	scanf("%d", &score);
	if (score >= 80)
		puts("Excellent!");
	else if (70 <= score && score <= 79)
		puts("Good!");
	else if (60 <= score && score <= 69)
		puts("Passing!");
	else
		puts("Failing!");
	return (0);
}
*/
//3.17
/*
#include <stdio.h>
int main(void)
{
	int num;

	printf("input integer!");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("The number is even!");
	else
		printf("The number is odd!");
	return (0);
}
*/
/*
#include <stdio.h>
int main(void)
{
	int num;

	printf("input integer!: ");
	scanf("%d", &num);
	switch (num % 2)
	{
		case 0:
		printf("The number is even!");
		break;
		//case 1:
		//printf("The number is odd!");
		//break;
		default:
		printf("The number is odd!");
	}
	return (0);
}
*/
/*
//3.18
#include <stdio.h>
int main(void)
{
	int month;

	printf("What month is it?: ");
	scanf("%d", &month);
	if (3 <= month && month <= 5)
		printf("It's spring!\n");
	if (6 <= month && month <= 8)
		printf("It's summer!\n");
	if (9 <= month && month <= 11)
		printf("It's autumn!\n");
	if (12 == month || month == 1 || month == 2)
		printf("It's winter!\n");
	else
		printf("It's wrong!");
	return (0);
}
*/
/*
//3.19
#include <stdio.h>
int main(void)
{
	int month;
	printf("What month is it?: ");
	scanf("%d", &month);
	switch (month)
	{
		case 12:
		case 1:
		case 2:
		printf("It's winter!\n");
		break;
		case 3:
		case 4:
		case 5:
		printf("It's spring!\n");
		break;
		case 6:
		case 7:
		case 8:
		printf("It's summer!\n");
		break;
		case 9:
		case 10:
		case 11:
		printf("It's autumn!\n");
		break;
		default:
		printf("It's wrong!");
	}
	return (0);
}
*/
/*
//4.1
#include <stdio.h>
int main(void)
{
	int num;
	char decision;

	do
	{
		printf("Input integer!: ");
		scanf("%d", &num);
		if (num % 10 == 0)
		{
			printf("This number is divisible by 10!\n");
		}
		else
			printf("This number is not divisible by 10...\n");
		printf("Try again? y/n: ");
		scanf("%s", &decision);
	}
	while (decision == 'y');
	return (0);
}
*/
/*
//4.2
#include <stdio.h>
int main(void)
{
	char	*str;
	int		i;

	printf("Input positive integer!: ");
	scanf("%s", str);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		printf("%c", str[i]);
		i--;
	}
	puts("");
	return (0);
}
*/
/*
#include<stdio.h>
int main(void)
{
	char *str;
	int i = 0;
	int count = 0;
	printf("テキストを入力してください\n");
	scanf("%s", str);
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	i = count - 1;
	while (i>= 0)
	{
		printf("%c", str[i]);
		i--;
	}
	printf("\n");
	return (0);
}
*/
/*
#include<stdio.h>
int main(void)
{
	char *str;
	int i = 0;
	int count = 0;
	printf("テキストを入力してください\n");
	scanf("%s", str);
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		printf("%c", str[i]);
		i--;
	}
	printf("\n");
	return (0);
}
*/
/*
//4.3
#include <stdio.h>	
int  main(void)
{
	char	*str;
	int		i;

	printf("input positive integer!: ");
	scanf("%s", str);
	i = 0;
	while (str[i] != '\0')
	{
		 i++;
	}
	printf("the number is %d digigs!", i);
	return (0);
}
*/
/*
//4.4
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int sum;

	i = 0;
	sum = 0;
	printf("input positive integer!: ");
	scanf("%d", &num);
	while (i <= num)
	{
		sum = sum + i;
		i++;
	}
	printf("The value added from 1 to %d is %d\n", i - 1, sum);
}
*/
/*
//4.5
#include <stdio.h>
int main(void)
{
	int *num;
	int i;
	int sum;
	int tmp;

	printf("input two integer!\n");
	i = 0;
	while (i < 2)
	{
		printf("integer%d: ", i + 1);
		scanf("%d", &num[i]);
		i++;
	}
	if (num[0] > num[1])
	{
		tmp = num[0];
		num[0] = num[1];
		num[1] = tmp;
	}
	sum = num[0];
	i = num[0];
	while (i < num[1])
	{
		i++;
		sum = sum + i;
	}
	printf("The sum of all integers between %d and %d is %d.\n", num[0], num[1], sum);
	return (0);
}
*/
//4.6
//?
//4.7
//?
/*
//4.8
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("input a integer!: ");
	scanf("%d", &num);
	i = 0;
	while (i <= num)
	{
		printf("%d ", num);
		num--;
	}
	puts("");
	return (0);
}
*/
/*
//4.9
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("input a integer!: ");
	scanf("%d", &num);
	i = 0;
	while (i < num)
	{
		printf("%d ", num);
		num--;
	}
	puts("");
	return (0);
}
*/
/*
//4.10
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("input a integer!: ");
	scanf("%d", &num);
	i = 1;
	while (i <= num)
	{
		printf("%d ", i);
		i++;
	}
	puts("");
	return (0);
}
*/
/*
//4.11
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("input a integer!: ");
	scanf("%d", &num);
	i = 2;
	while (i <= num)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
		i++;
	}
	puts("");
	return (0);
}
*/
/*
//4.12
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("input a integer!: ");
	scanf("%d", &num);
	i = 2;
	while (i <= num)
	{
		printf("%d ", i);
		i = i * 2;
	}
	return (0);
}
*/
/*
//4.13
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("input a integer!: ");
	scanf("%d", &num);
	i = 0;
	while (i < num)
	{
		printf("*\n");
		i++;
	}
	return (0);
}
*/
/*
//4.14
#include <stdio.h>
int main(void)
{
	int num[99999];
	int i;
	double sum;
	double ave;

	printf("input integers!\n");
	i = 0;
	sum = 0;
	while (1)
	{
		printf("No.%d: ", i + 1);
		scanf("%d", &num[i]);
		//printf("%d\n", num[i]);
		if (num[i] == 9999)
		{
			break;
		}
		sum = sum + num[i];
		i++;
	}
	ave = sum / i;
	printf("The total is %d and the average is %.2f!", (int)sum, ave);
}
*/
//4.15
//?
//4.16
/*
#include <stdio.h>
int main(void)
{
	int i;
	int sum;
	
	sum = 0;
	i = 0;
	while (i <= 5)
	{
		sum = sum + i;
		i++;
	}
	printf("The value obtained by adding 1 through 5 is %d.\n", sum);
	return (0);
}
*/
/*
//4.17
#include <stdio.h>
int main(void)
{
	int i;
	int tencnt;
	int num;
	int tendigi;

	printf("Enter the number of times!: ");
	scanf("%d", &num);
	tendigi = num / 10;
	i = 0;
	tencnt = 0;
	while (i < num - tendigi)
	{
		tencnt = 1;
		while (i < num - tendigi && tencnt < 10)
		{
			printf("%d", tencnt);
			i++;
			tencnt++;
			if (tencnt == 10)
			{
				printf("0");
			}
		}
	}
	return (0);
}
*/
/*
//4.18
#include <stdio.h>

int main(void)
{
	double std_weight;
	double height;
	printf("身長を入力してください: ");
	scanf("%lf", &height);
	std_weight = (height * height * 22) / 10000;
	printf("標準体重は%.1lfです", std_weight);
	return (0);
}
*/
/*
#include <stdio.h>
int main(void)
{
	double std_weight;
	double height;
	printf("input your height!: ");
	scanf("%lf", &height);
	std_weight = (height * height * 22) / 10000;
	printf("your standrd weight is %.1lf", std_weight);
	return (0);
}
*/
/*
#include <stdio.h>
int main(void)
{
	double std_weight;
	double from_height;
	double to_height;
	double every;
	double i;

	printf("from what cm: ");
	scanf("%lf", &from_height);
	printf("to what cm: ");
	scanf("%lf", &to_height);
	printf("every cm: ");
	scanf("%lf", &every);
	i = from_height;
	while (i <= to_height)
	{
		std_weight = (i * i * 22) / 10000;
		printf("%.0lf %.2lf\n", i, std_weight);
		i = i + every;
	}
}
*/
/*
//4.19
#include <stdio.h>
int main(void)
{
	int i;

	i = 1;
	while (i <= 50)
	{
		printf("%2d ", i);
		if (i % 5 == 0)
		{
			printf("\n");
		}
		i++;
	}
	return (0);
}
*/
/*
//4.20
#include <stdio.h>
int main(void)
{
	int row;
	int column;

	column = 1;
	row = 1;
	printf("\n  | 1  2  3  4  5  6  7  8  9\n-----------------------------\n");
	while (column <= 9)
	{
		printf("%d ", column);
		printf("|");
		while (row <= 9)
		{
			printf("%2d ", column * row);
			row++;
		}
		printf("\n");
		column++;
		row = 1;
	}
	puts("");
	return (0);
}
*/
/*
//4.21
#include <stdio.h>
int main(void)
{
	int height;
	int width;
	int column;
	int row;
	printf("Make the rectangle!\nwidht: ");
	scanf("%d", &width);
	printf("height: ");
	scanf("%d", &height);
	column = 1;
	while (column <= height)
	{
		row = 1;
		while (row <= width)
		{
			printf("*");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
//4.22
#include <stdio.h>
int main(void)
{
	int height;
	int width;
	int column;
	int row;
	int tmp;

	printf("Make the rectangle!\nwidht: ");
	scanf("%d", &width);
	printf("height: ");
	scanf("%d", &height);
	if (width == height)
	{
		width = width + 1;
	}
	else if (width < height)
	{
		tmp = width;
		width = height;
		height = tmp;
	}
	column = 1;
	while (column <= height)
	{
		row = 1;
		while (row <= width)
		{
			printf("*");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
4.23
#include <stdio.h>
int main(void)
{
	int row;
	int column;
	int num;

	printf("how many tiers do you want?: ");
	scanf("%d", &num);
	column = 1;
	while (column <= num)
	{
		row = 1; 
		while (row <= column)
		{
			printf("*");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
//4.24
#include <stdio.h>
int main(void)
{
	int num;
	int row;
	int column;

	printf("how many tiers do you want?");
	scanf("%d", &num);
	column = 1;
	while (column <= num)
	{
		row = 1;
		while (row <= num)
		{
			if (num - row >= column)
				printf(" ");
			else
				printf("*");
			//if (num - column <= row - 1)
				//printf("*");
			//else
				//printf(" ");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
//4.26
#include <stdio.h>
int main(void)
{
	int num;
	int row;
	int column;
	
	printf("how many tiers do you want?: ");
	scanf("%d", &num);
	column = 1;
	while (column <= num)
	{
		row = 1;
		while (row <= num)
		{
			if (row >= column)
				printf("*");
			else
				printf(" ");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
#include <stdio.h>
int main(void)
{
	int num;
	int row;
	int column;

	printf("how many tiers do you want?");
	scanf("%d", &num);
	column = 1;
	while (column < num)
	{
		row = 1;
		while (row < num)
		{
			if (num - row < column)
				printf(" ");
			else
				printf("*");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
//4.25
#include <stdio.h>
int main(void)
{
	int num;
	int row;
	int column;

	printf("how many tiers do you want?");
	scanf("%d", &num);
	column = 1;
	while (column <= num)
	{
		row = 1;
		while (row <= num)
		{
			// if (num - column + 1 >= row)
			// 	printf("*");
			// else
			//	printf(" ");
			if (num - column + 1 < row)
				printf(" ");
			else
				printf("*");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
//4.27
#include <stdio.h>
int main(void)
{
	int num;
	int row;
	int column;

	printf("how many tiers do you want?: ");
	scanf("%d", &num);
	column = 1;
	while (column <= num)
	{
		row = 1;
		while (row <= num + 2)
		{
			if ((column + 2 > row) && (row >= num - 1 && row <= num + 1))
				printf("*");
			else
				printf(" ");
			row++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
//4.27
#include <stdio.h>
int main(void)
{
	int column;
	int row;
	int asterisk_area;
	int num;

	printf("how many tiers do you want?: ");
	scanf("%d", &num);
	column = 1;
	while (column <= num)
	{
		row = 1;
		while (row + column <= num)
		{
			printf(" ");
			row++;
		}
		asterisk_area = 1;
		while (asterisk_area <= column * 2 - 1)
		{
			printf("*");
			asterisk_area++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
//アスタリスクの数 = 行数 × 2 - 1
*/
/*
//4.27-2
#include <stdio.h>
int main(void)
{
	int row;
	int column;
	int space_area;
	int asterisk_area;
	int num;

	row = space_area + asterisk_area;
	printf("How many tiers do you want?: ");
	scanf("%d", &num);
	column = 1;
	while (num >= column)
	{
		row = 1;
		while (num >= column + (row))
		{
			printf(" ");
			row++;
		}	
		asterisk_area = 1;
		while (asterisk_area <= column * 2 - 1)
		{
			printf("*");
			asterisk_area++;
		}
		printf("\n");
		column++;
	}
}
*/
/*
//4.28
#include <stdio.h>
int main(void)
{
	int height;
	int width;
	int column;
	int row;
	int times;
	int times_cnt;

	printf("Make the rectangle!\nwidht: ");
	scanf("%d", &width);
	printf("height: ");
	scanf("%d", &height);
	printf("even: ");
	scanf("%d", &times);
	column = 1;
	while (column <= height)
	{
		times_cnt = 1;
		while (times_cnt <= times)
		{
			row = 1;
			while (row <= width)
			{
				printf("*");
				row++;
			}
			printf(" ");
			times_cnt++;
		}
		printf("\n");
		column++;
	}
	return (0);
}
*/
/*
//5.1
#include <stdio.h>
int main(void)
{
	int num[5];
	int i;

	i = 0;
	while (i < 5)
	{	
		num[i] = num[i - 1] + 1;
		printf("%d ", num[i - 1]);
		i++;
	}
	return (0);
}
*/
//5.2 ?
/*
//5.3
#include <stdio.h>
int main(void)
{
	int num[5];
	int i;

	i = 0;
	num[i] = 5;
	while (i < 5)
	{
		printf("%d ", num[i]);
		i++;
		num[i] = num[i - 1] - 1;
	}
	return (0);
}
*/
/*
//5.4
#include <stdio.h>
int main(void)
{
	double num[11];
	int i;

	i = 0;
	while (i < 11)
	{	
		num[i] = num[i - 1] + 0.1;
		printf("%.1f ", num[i - 1]);
		i++;
	}
	return (0);
}
*/
/*
//5.5
#include <stdio.h>
int main(void)
{
	double num[11];
	int i;

	i = 0;
	num[i] = 5;
	while (i < 5)
	{
		printf("%.1f ", num[i]);
		i++;
		num[i] = num[i - 1] - 1.0;
	}
	return (0);
}
*/
/*
//5.6
#include <stdio.h>
int main(void)
{
	double *score;
	int i;
	double sum;
	double ave;

	i = 0;
	sum = 0.0;
	printf("input 5 student's score!\n");
	while (i < 5)
	{
		printf("%dth: ", i + 1);
		scanf("%lf", &score[i]);
		sum = sum + score[i];
		i++;
	}
	//printf("%lf\n", sum);
	ave = sum / i;
	printf("total: %.0f\naverage: %.1f\n", sum, ave);
	return (0);
}
*/
/*
//5.7
#include <stdio.h>
int main(void)
{
	int va[32] = {15, 20, 30, 0, 0};
	int vb[32];
	int i;

	printf(" va vb\n-------\n");
	i = 0;
	while (i < 5)
	{
		vb[i] = va[i];
		printf(" %2d %2d\n", va[i], vb[i]);
		i++;
	}
	return (0);
}
*/
/*
//5.8
#include <stdio.h>
int main(void)
{
	int va[32] = {15, 20, 30, 4, 3};
	int vb[32];
	int i;
	int tmp;

	printf(" va vb\n-------\n");

	i = 0;
	while (i < 5)
	{
		tmp = va[4 - i];
		//printf("\n%2d %2d %2d %2d %2d %2d %2d \n", va[0], va[1], va[2], va[3], va[4], va[5], va[6]);
		//printf("%2d %2d %2d %2d %2d %2d %2d\n", vb[0], vb[1], vb[2], vb[3], vb[4], vb[5], vb[6]);
		va[4 - i] = vb[i];
		vb[i] = tmp;
		va[4 - i] = vb[i];
		printf(" %2d %2d\n", va[i], vb[i]);
		i++;
	}
	return (0);
}
*/
/*
//5.9 success
#include <stdio.h>
int main(void)
{
	int va[32] = {58, 32, 17, 46, 22, 73, 69};
	int vb[32];
	int i;
	int tmp;

	i = 0;
	while (i < 7)
	{
		tmp = va[6 - i];
		//printf("\n%2d %2d %2d %2d %2d %2d %2d \n", va[0], va[1], va[2], va[3], va[4], va[5], va[6]);
		//printf("%2d %2d %2d %2d %2d %2d %2d\n", vb[0], vb[1], vb[2], vb[3], vb[4], vb[5], vb[6]);
		va[6 - i] = vb[i];
		vb[i] = tmp;
		va[6 - i] = vb[i];
		printf("va[%d]: %2d vb[%d]: %2d\n", i, va[i], i, vb[i]);
		i++;
	}
	return (0);
}
*/
/*
//reverse? sort
#include <stdio.h>

#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
void reverse(int* array, size_t size)
{
	int i;

	i = 0;
	while (i < size / 2)
	{
		SWAP(int, array[i], array[size - i - 1]);
		++i;
	}
}

void printArray(const int* array, size_t size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int array1[] = {0, 1, 2, 3, 4};
	int array2[] = {0, 1, 2, 3, 4, 5};

	reverse(array1, SIZE_OF_ARRAY(array1));
	reverse(array2, SIZE_OF_ARRAY(array2));
	printArray(array1, SIZE_OF_ARRAY(array1));
	printArray(array2, SIZE_OF_ARRAY(array2));
	return (0);
}
*/
/*
//5.9 fail
#include <stdio.h>
int main(void)
{
	int va[32] = {58, 32, 17, 46, 22, 73, 69};
	int vb[32];
	int i;
	int tmp;

	i = 0;
	while (i < 7)
	{
		tmp = va[i];
		//printf("%d\n%d\n%d\n\n", va[i], va[6 - i], tmp);
		va[i] = va[6 - i];
		va[7 - i] = tmp;
		printf("%d ", va[i]);
		i++;
	}
	return (0);
}
*/
/*
//5.9 fail
#include <stdio.h>
int main(void)
{
	int va[32] = {58, 32, 17, 46, 22, 73, 69};
	int vb[32];
	int i;
	int tmp;

	i = 0;
	while (i < 7)
	{
		tmp = va[i];
		va[i] = vb[i];
		vb[i] = tmp;
		printf("va%d vb%d\n", va[i], vb[i]);
		i++;
	}
	return (0);
}
*/
//5.10
/*
//5.11
#include <stdio.h>
int main(void)
{
	double height[32];
	int i;
	double sum;
	double ave;

	sum = 0;
	printf("input your height!\n");
	i = 0;
	while (i < 5)
	{
		printf("student%d: ", i + 1);
		scanf("%lf", &height[i]);
		sum = sum + height[i];
		i++;
	}
	ave = sum / i;
	printf("average height: %.2lf", ave);
	return (0);
}
*/
/*
//5.12
#define NUMBER 5
#include <stdio.h>
int main(void)
{
	double height[32];
	int i;
	double sum;
	double ave;

	sum = 0;
	printf("input your height!\n");
	i = 0;
	while (i < NUMBER)
	{
		printf("student%d: ", i + 1);
		scanf("%lf", &height[i]);
		sum = sum + height[i];
		i++;
	}
	ave = sum / i;
	printf("average height: %.2lf", ave);
	return (0);
}
*/
/*
//5.13
#include <stdio.h>
int main(void)
{
	double weight[32];
	double max;
	double min;
	int i;

	printf("input their weight!\n");
	max = 0;
	min = 0;
	i = 0;
	while (i < 5)
	{
		printf("student%d: ", i + 1);
		scanf("%lf", &weight[i]);
		if (min == 0)
			min = weight[i];
		if (max < weight[i])
		{
			max = weight[i];
		}
		if (min > weight[i])
		{
			min = weight[i];
		}
		i++;
	}
	printf("the max weight: %.1lf\n", max);
	printf("the minimum weight: %.1lf\n", min);
	return (0);
}
*/
/*
//5.14
#include <stdio.h>
int main(void)
{
	//double a;
	int a;
	int b;

	a = 1;
	b = 1;
	printf("a = %d\nb = %d\n", a, b);
	//a = b = (double)1.5;
	a = b = 5;
	printf("a = %d\nb = %d\n", a, b);
	b = 7;
	a = b;
	printf("a = %d\nb = %d\n", a, b);
	return (0);
}
*/
/*
//5.15
#include <stdio.h>
int main(void)
{
	int a[32][32] = {{11, 2, 39}, {4, 33, 6}};
	int b[32][32] = {{6, 3, 4}, {5, 1, 2}};
	int i;
	int j;

	printf("a = {");
	i = 0;
	while (i < 2)
	{
		printf("{");
		j = 0;
		while (j < 3)
		{
			printf("%d", a[i][j]);
			if (j < 2)
				printf(", ");
			j++;
		}
		printf("}");
		if (i < 1)
			printf(", ");
		i++;
	}
	printf("}");
	printf("\n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", b[i][j]);
			j++;
		}
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", (a[i][j] + b[i][j]));
			j++;
		}
		i++;
	}
	printf("\n");
}
*/
//5.16
#include <stdio.h>
int main(void)
{
	int a[32][32] = {{1, 2, 3}, {4, 5, 6}};
	int b[32][32][32] = {{1, 5}, {5, 1, 2}};
	int i;
	int j;

	printf("a = {");
	i = 0;
	while (i < 2)
	{
		printf("{");
		j = 0;
		while (j < 3)
		{
			printf("%d", a[i][j]);
			if (j < 2)
				printf(", ");
			j++;
		}
		printf("}");
		if (i < 1)
			printf(", ");
		i++;
	}
	printf("}");
	printf("\n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", b[i][j]);
			j++;
		}
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d ", (a[i][j] + b[i][j]));
			j++;
		}
		i++;
	}
	printf("\n");
}
