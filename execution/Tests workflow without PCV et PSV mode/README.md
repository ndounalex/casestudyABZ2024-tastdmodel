# Test Workflow without PSVMode and PCVMode test casestudyABZ2024-tastdmodel
Mechanical Lung Ventilator ABZ2024 Case Study

## Source Code
the source file could not be uploaded to Git due to its very large size and has been placed in an external repository accessible via this link: [code](https://usherbrooke-my.sharepoint.com/:f:/r/personal/ndoa2501_usherbrooke_ca/Documents/Mechanical%20Ventilator?csf=1&web=1&e=TuqerS)
The source file corresponding to the workflow tests excluding PCV and PSV modes is testastd.cpp

## Description


this folder contains the test case for the controller start-up workflow, excluding the PCV and PSV modules. the events.txt file contained in the folder contains the input commands. these commands are used to test all the controller start-up stages, i.e. Start-up, SelfTest, VentilationOff, Resume ventilation, and also include commands for modifying the controller configuration data to simulate the sensors and also commands for displaying the status of certain attributes to simulate requests for information from the user. the expected outputs are contained in the output.txt file.



## ReadTheDocs

Check our full documentation [online](https://castd.readthedocs.io/).

## Slack channel

Join project discussions [here](https://astd-cse.slack.com/)
