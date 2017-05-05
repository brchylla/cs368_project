# cs368_project

This is Ben Chylla and Roz Stengle's final project for CS368.
It reads in one file with questions and potential answers, processes them,
asks them of the user one by one and stores their answers. It then calculates
the user's score based on potential outcomes given by the read in file.

The input file should be of the format:

The first portion has questions and their respective answers,
with the first answer being towards one end of the spectrum of 
answers and the second being on the other end.

	<Question>? Enter <answer1> or <answer2>.

The second portion, which is separated by a blank line, holds
the values between which users results may lie. Following our
attatched example, one end of this results spectrum may be 
"atheistic" and the other end "theistic" with potential values 
in between. These answer ranges should be formated like this:

	<value> : <result>

The outer most range of these values should be -1 and 1, allowing
any number of answers in between.

We understand that this is relatively specific formating, but it does
allow whoever is conducting the quiz to run it for any kind of
'personality'.
