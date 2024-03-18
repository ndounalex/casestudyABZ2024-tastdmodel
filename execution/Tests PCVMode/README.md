# PCVMode test casestudyABZ2024-tastdmodel
Mechanical Lung Ventilator ABZ2024 Case Study

## Description

This file contains 5 cases of execution of the breathing cycle in PCV mode
- The first case corresponds to the test of the normal breathing cycle in PCV mode with activation of an inspiratory_pause_on, an inspiratory_pause_off as well as an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test1_PCVMode.txt file contains the input commands and the Test1_PCVMode_output.txt file contains the expected outputs.
- The second case corresponds to the test of the normal breathing cycle in PCV mode with activation of a recruitment_maneuver_on, a recruitment_maneuver_off as well as an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test2_PCVMode.txt file contains the input commands and the Test2_PCVMode_output.txt file contains the expected outputs.
- The third case corresponds to the test of the normal breathing cycle in PCV mode with no action from the user at the end of the inspiration phase here simulated by the "no_action" action (see the command input file) but with expiratory_pause_on and expiratory_pause_off commands at the end of the cycle. the Test3_PCVMode.txt file contains the input commands and the Test3_PCVMode_output.txt file contains the expected outputs.

- The fourth  case corresponds to the test of the normal breathing cycle in PCV mode with no action from the user at the end of the inspiration phase here simulated by the "no_action" action (see the command input file) but with expiratory_pause_on without expiratory_pause_off commands at the end of the cycle. the Test4_PCVMode.txt file contains the input commands and the Test4_PCVMode_output.txt file contains the expected outputs.
- The fifth case corresponds to the test of the normal breathing cycle in PCV mode with activation of an inspiratory_pause_on without an inspiratory_pause_off as well as an expiratory_pause_on and an expiratory_pause_off at the end of the cycle. the Test5_PCVMode.txt file contains the input commands and the Test5_PCVMode_output.txt file contains the expected outputs.




## ReadTheDocs

Check our full documentation [online](https://castd.readthedocs.io/).

## Slack channel

Join project discussions [here](https://astd-cse.slack.com/)