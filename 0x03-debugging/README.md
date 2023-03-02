

## DEBBUGING

### Introduction
Testing a program against a well-chosen set of input tests gives the programmer confidence that the program is correct. During the testing process, the programmer observes input-output relationships, that is, the output that the program produces for each input test case. If the program produces the expected output and obeys the specification for each test case, then the program is successfully tested.

But if the output for one of the test cases is not the one expected, then the program is incorrect -- it contains errors (or defects, or "bugs"). In such situations, testing only reveals the presence of errors, but doesn't tell us what the errors are, or how the code needs to be fixed. In other words, testing reveals the effects (or symptoms) of errors, not the cause of errors. The programmer must then go through a debugging process, to identify the causes and fix the errors

#### Debbuging process 

	-Examine the error symptoms, 
	-Identify the cause, 
	-Fix the error
