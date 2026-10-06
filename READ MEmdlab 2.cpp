JAMES HOVAN 
CIS 165-w099
Program/test


Values or pattern checked
Expected result before running
Actual output
Match or correction
diamond.cpp
Seven required lines
Seven lines forming a diamond:
Line 1: 3 spaces, 1 star
Line 2: 2 spaces, 3 stars
Line 3: 1 space, 5 stars
 Line 4: 0 spaces, 7 stars 
 Line 5: 1 space, 5 stars
 Line 6: 2 spaces, 3 stars
 Line 7: 3 spaces, 1 star
ACTUAL 
MATCH
game_time.cpp — assigned values
78 and 144 minutes
1hr 18min 
1hr 18min
Match
game_time.cpp — changed values
185 min
3hr 5 min
3hr 5 min 
Match



EXPLANATION
By highlighting the code you can see what it is even if its hard to see 
2- integer division gets rid of the remainder and leaves the whole number for hours 
It asks to store the values before calculations to make sure the numbers are correct and not wrong 
 
ADD- I used GDB compiler to test the code and it works very well 
I used gemini to verify the code and to make sure it was correct, and i had it correct one of my lines which was in the game time.ccp which was 

level_one_hours = LEVEL_ONE_MINUTES / MINUTES_PER_HOUR;        // 78 / 60 = 1
level_one_rem_minutes = LEVEL_ONE_MINUTES / MINUTES_PER_HOUR; // 78 / 60 = 1
And it corrected it saying that “/ discards the remainder and that % (modulus) must be used to get the remaining minutes.” and gave me the corrected code. 
