#include<stdio.h>
int main()
{
	int ctr; /* crt is  global */
	void blk1(void);
	void blk2(void);
	void main(void)
	{
		ctr = 10;
		blk1 ();
		
		
	}
	void blk1(void)
	{
		int rtc;
		if (crt>8)
		{
			ctr = rtc +1;
			blk1();
		}
	}
	void blk2(void)
	{
		int ctr;
		ctr = 0;
	}
	
}
