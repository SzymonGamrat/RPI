#include <stdio.h>
#include <writingPi.h>

int main() {
	printf("First project\n");
	if (wiringPiSetup()==1)
	{
		return 1;
	}

	pinMode(0, OUTPUT);

	while (1)
	{
		digitalWrite(0, 1); //dioda on
		delay(100);
		digitalWrite(0, 0); //dioda off
		delay(100);
	}

	return 0;
}