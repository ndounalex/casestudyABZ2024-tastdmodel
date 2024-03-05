# PSVMode test casestudyABZ2024-tastdmodel
Mechanical Lung Ventilator ABZ2024 Case Study

## Description

this file contains 5 cases of execution of the breathing cycle in PSV mode
- the first case corresponds to the test of the normal breathing cycle in PSV mode with no action from the user at the end of the inspiration phase here simulated by the "no_action" action (see the command input file) but with expiratory_pause_on and expiratory_pause_off commands at the end of the cycle. the Test1_PSVMode.txt file contains the input commands and the Test1_PSVMode_output.txt file contains the expected outputs.
- the second case corresponds to the test of the normal breathing cycle in PSV mode with activation of an inspiratory_pause_on, an inspiratory_pause_off as well as an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test2_PSVMode.txt file contains the input commands and the Test2_PSVMode_output.txt file contains the expected outputs.
- the third case corresponds to the test of the normal breathing cycle in PSV mode with activation of a recruitment_maneuver_on, a recruitment_maneuver_off as well as an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test3_PSVMode.txt file contains the input commands and the Test3_PSVMode_output.txt file contains the expected outputs.




## ReadTheDocs

Check our full documentation [online](https://castd.readthedocs.io/).

## Slack channel

Join project discussions [here](https://astd-cse.slack.com/)
