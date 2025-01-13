// https://www.geeksforgeeks.org/problems/middle-of-three2926/1

class Solution
{
public:
  int middle(int A, int B, int C)
  {

    if (B < A && A < C || C < A && A < B)
      return A;
    else if (A < B && B < C || C < B && C < A)
      return B;
    else
      return C;
  }
};
