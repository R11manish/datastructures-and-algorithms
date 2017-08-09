/*
    A sample of a radioactive substance is expected to decay 
    by 15 percent each hour. What is the weight w(t) of the 
    sample at t hours later in the experiment, where w(0) = 100 
    is the initial weight. Design a recursive algorithm to find 
    the weight after 7 hours.
*/

#include <stdio.h>

float weight(float w, float t)
{
	if(t>0) 
		return weight(w-(w*0.15), --t);
	else 
		return w;
}


int main()
{
	float n;
	int t, m;
	printf("Enter sample weight and time: ");
	scanf("%d", &m);
	scanf("%d", &t);
	n=weight(m,t);
	printf("%f\n", n);
	return 0;
}
