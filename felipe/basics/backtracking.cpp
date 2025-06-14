/*
Queen problem - example
consider the problem of calculating the number of ways n queen can be placed on an nxn chessboard so that
no two queens attack each other.
*/

void search(int y)
{
  if (y == n){
    count++;
    return;
  }

  for(int x = 0; x < n; x++){
    if (column[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
    column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
    search(y+1);
    column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
  }
}