// Preprocessor Section
#include<stdio.h> // <> means use standard library path to locate stdio.h  

// Global variables section

// Function prototype section
//int main(void);

// Function definition
int main(void)
{
	// local variables for input
	int grade = 0;
	
	printf("Enter grade: \n");
	scanf("%d", &grade);
	
	if ( grade >= 90 ) {
		printf( "A" );
		} // end if
		else {
			if ( grade >= 80 ) {
			printf("B");
			} // end if
			else {
				if ( grade >= 70 ) {
					printf("C");	
				} // end if
				else {
					if ( grade >= 60 ) {
					printf( "D" );
					} // end if
					else {
					printf( "F" );
				} // end else
			} // end else
		} // end else
	} // end else

	
    return 0;
}
