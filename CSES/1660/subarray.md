While right is less than n. (right is expanding, therefore our upper bounds check is done by comparing size of array n to expanding variable)

First, Save right, then, Move Right Forward (expand)

While (Condition check, does sum exceed x?)
    Cond True: Subtract left value from sum, Move Left Forward(Catch up), Goto condition check, does sum exceed x?
    Cond False: Skip while loop

Condition Check, is sum value, equal to target x value?
    Cond True: Move Counter Forward (increment counter), Goto Start
    Cond False: Goto Start