# mp6_slb
Code repository for shutdown loop board

This code reads in 8bits of memory from specified pins from the shutdown loop checking for pin activation status. Information sent out through CAN. The variables sent out are the safety states of the board and if any go off  out of desired order the system will shut down.