#include <stdio.h>

#define PROGRAM		main()
#define FLOAT		float
#define FORMATIN	"%f"
#define WHILE		while (
#define DO			)
#define BEGIN		{
#define END			}
#define FORMATOUT	"The sum is %8.2f\n"

PROGRAM
BEGIN
	FLOAT data, sum = 0.0;

	scanf(FORMATIN, &data);
	WHILE data >= 0.0 DO
	BEGIN
		sum += data;
		scanf(FORMATIN, &data);
	END

	printf(FORMATOUT, sum);
END
	

