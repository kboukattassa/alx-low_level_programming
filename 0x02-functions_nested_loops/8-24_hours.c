#include "main.h"
/**
 * jack_bauer - Prints every minute and hour
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar("%02d:%02d\n", hour, minute);
}
