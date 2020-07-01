#ifndef TIMER_FUNC
#define TIMER_FUNC

#include <time.h>

void set_timer( int h, int m, int s )
{
	time_t cur;
	struct tm point, *cur_str;

	point.tm_hour = h;
	point.tm_min = m;
	point.tm_sec = s;

	cur = time(NULL);

	cur_str = localtime(&cur);

	for ( ;; )
	{
		if ( point.tm_hour == cur_str->tm_hour && point.tm_min == cur_str->tm_min && point.tm_sec == cur_str->tm_sec )
			break;

		cur = time(NULL);
		cur_str = localtime(&cur);
	}

}

#endif
