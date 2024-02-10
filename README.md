For Slope less than 1:
  The change rate of X is greater than the change rate of Y. Therefore, at each step for X, Y is incremented by at most 1
  Therefore at each step, we are checking whether we are to increment the value of Y by one or not .
  For this, we are using this equation
  pCurr = 2 * dy * currX - 2 * dx * currY + 2 * dx * c + 2 * dx * y + dx;
  However, 2 * dx * c + 2 * dx * y + dx is constant, moreover c might hold a floating point value, which increases compuatational
  complexity. Which is why, for simplicity and efficiency we reduce it to,
  pCurr = 2 * dy * currX - 2 * dx * currY
  if pCurr is greater than 0, Y gets incremented
For Slope greater than 1:
  The change rate of Y is greather than the change rate of X. At each step of Y, X is incremented by at most 1. Therefore, to 
  adjust to this change, we reverse what we did in case 1. Now, iterating through the values of Y in increasing order, at each 
  step we are deciding whether to increment X by one or not.
  For this reason, we have adjusted the equation in this way
  pCurr = 2 * dx * currY - 2 * dy * currX
  if pCurr is greater than 0, X gets incremented
  
