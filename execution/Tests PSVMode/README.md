# PSVMode test casestudyABZ2024-tastdmodel
Mechanical Lung Ventilator ABZ2024 Case Study

## Source Code
The source file could not be uploaded to Git due to its very large size and has been placed in an external repository accessible via this link: [code](https://usherbrooke-my.sharepoint.com/:f:/r/personal/ndoa2501_usherbrooke_ca/Documents/Mechanical%20Ventilator?csf=1&web=1&e=TuqerS)
The source file corresponding to the PSV mode tests is psvmode.cpp

## Description

This file contains 5 cases of execution of the breathing cycle in PSV mode
- The first case corresponds to the test of the normal breathing cycle in PSV mode with no action from the user at the end of the inspiration phase here simulated by the "no_action" action (see the command input file) but with expiratory_pause_on and expiratory_pause_off commands at the end of the cycle. the Test1_PSVMode.txt file contains the input commands and the Test1_PSVMode_output.txt file contains the expected outputs.
- The second case corresponds to the test of the normal breathing cycle in PSV mode with activation of an inspiratory_pause_on, an inspiratory_pause_off as well as an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test2_PSVMode.txt file contains the input commands and the Test2_PSVMode_output.txt file contains the expected outputs.
- The third case corresponds to the test of the normal breathing cycle in PSV mode with activation of a recruitment_maneuver_on, a recruitment_maneuver_off as well as an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test3_PSVMode.txt file contains the input commands and the Test3_PSVMode_output.txt file contains the expected outputs.
- The fourth case corresponds to the test of the normal breathing cycle in PSV mode with activation of a recruitment_maneuver_on, without recruitment_maneuver_off followed by an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test4_PSVMode.txt file contains the input commands and the Test4_PSVMode_output.txt file contains the expected outputs.
- The fifth case corresponds to the test of the normal respiratory cycle in PSV mode with activation of a recruitment_maneuver_on, without recruitment_maneuver_off followed by an expiratory_pause_on without expiratory_pause_off at the end of the cycle. The Test5_PSVMode.txt file contains the input commands and the Test5_PSVMode_output.txt file contains the expected outputs.




## ReadTheDocs

Check our full documentation [online](https://castd.readthedocs.io/).

## Slack channel

Join project discussions [here](https://astd-cse.slack.com/)
