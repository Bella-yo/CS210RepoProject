# CS210RepoProject

## Project Summary
Over the course of this project, I began by translating the functional requirements into a clear pseudocode outline, then designed and implemented an object‑oriented C++ solution centered on an InvestmentCalculator class. This class cleanly encapsulates all the data (initial amount, monthly deposit, annual rate, years) and operations (computing year‑end balances and interests, with and without monthly deposits), keeping the main program focused on user interaction and reporting.

## What I Did Particularly Well
I’m particularly proud of how I structured the code for readability and maintainability. Breaking the calculator logic into separate header and implementation files (.h/.cpp) and using descriptive names (e.g. calculateBalancesWithDeposits) makes it easy to navigate. I also wrote robust input‑validation utilities (promptPositiveDouble and promptPositiveInt) to ensure the program gracefully handles invalid user entries, and I sprinkled in inline comments to explain nonobvious calculations.

## Where I Could Enhance My Code
That said, there are a few areas I’d enhance going forward. First, I’d introduce unit tests (e.g. with Google Test) to automatically verify interest‑calculation accuracy across edge cases (zero deposits, very high rates, long durations). Second, I’d refactor the calculator to accept different compounding intervals (quarterly, daily) for greater flexibility. Finally, I’d harden the code against numeric overflow by using long double or arbitrary‑precision libraries, making it more secure and reliable for very large investments.

## Most Challenging Pieces and How I Overcame Them
The most challenging part was implementing the monthly‑deposit compounding logic—calculating interest on a changing balance each month and then rolling that up yearly. I overcame this by sketching out sample scenarios on paper, then incrementally coding and stepping through with a debugger until the outputs matched my hand calculations. Resources like cppreference.com, Stack Overflow, and my instructor’s notes were invaluable in clarifying vector usage and loop boundaries.

## Transferable Skills
From this project I’ve gained transferable skills in OOP design (defining clear interfaces), defensive programming (validating all inputs), and command‐line user interaction. I’ve also cemented best practices in separating concerns (calculation vs. I/O), writing self‑documenting code, and structuring a small codebase so that future features (new compounding options, GUI front‑end) could be slotted in with minimal upheaval.

## Maintainability, Readability, and Adaptability
Overall, this application is readable, adaptable, and sets a solid foundation for more sophisticated financial tools down the road.
