timer
=====

High Precision Timer Class

This class calculates the time of execution of a code snippet in seconds, milliseconds or microseconds.                 It is using the new C++11 standard header file chrono (namespace chrono).

Handled exceptions (where the two conflicting calls to timer are done);

Removed cerr as it was also taking up some time.

getElapsedTime() method gives elapsed time at any instance, whether arbitrarily during the process or final.

I have also added a php script for further use.

just use <?php include 'timer.php' ?>
