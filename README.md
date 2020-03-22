# BlinkName
SIT210 T1 2020 - Task 2.1P - Dan Jeffs 

Dan Jeffs S215475485
SIT210 Task 2.1P

Q1: Describe the steps required to modify the code to blink your last name instead?
I originally coded the board to flash both my first and last name to start with accidentally. I also wrote several smaller functions separate to the main loop that can be called to make a “Dit” or a “Dash”. Therefore, any letters can be added using their corresponding dits and dashes easily, I also added a couple of other small functions to do the spacing at the end of each letter correctly and also for a space between words according the timings listed on the website provided. 

 Q2: Discuss on the effectiveness of your modifications. Reflect on how you should modify your code to be reusable and modular to adapt quickly to changes in requirements. 
As stated above, the code has already been made modular. The next step would be to make a separate function for each letter and then you would be able to type a string and convert it to morse code by assigning each letter in the string to a function. There is also a single variable at the top of the code to change the timing throughout the code. 

Q3: Create a repository named BlinkName on Github. Upload your code to the repository. Include the link to your repository here. 
https://github.com/DanJeffs/BlinkName

Q4: Take a five second video of your Photon board with the LED blinking your first name and upload it to youtube. Include the link here.

https://youtu.be/tng-6hCZtbg
