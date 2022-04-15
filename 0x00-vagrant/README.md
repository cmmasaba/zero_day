The most common tasks when working with Linux is creating
new files, adding necessary permissions to it and then 
opening it in a text editor. These 3 tasks can seem very 
basic at first glance, but if you have to them often then
they become repetitive and boring, and more prone to silly
mistakes.
In the files.sh is a linux script that is meant to 
automate those 3 tasks. The script asks you to enter
the file name, then waits for a 15 second window for you 
to provide the name. If you do, then it proceeds to ask you
the file permissions you want to set, which you're supposed
to enter in absolut mode.
If you don't provide a name within the 15 seconds then the 
script stops execution and takes you back to the terminal. 
This is important because otherwise the script would run
forever while waiting for your input. Not really an ideal 
situation, right?
Assuming you entered the name within the timeframe, the 
script then creates a file using the file name you provided
and assigns the permissions you specified to the file.
Finally, it opens the file in Vim, ready for your input.
No more boring and repetitive tasks for you, less chance of 
making mistakes.
success.txt is a testimony of script.
