  public int maximumWealth(int[][] accounts) {
      int max = 0;
      int rows = accounts.length, cols = accounts[0].length;
        for(int i = 0; i < rows; i++) {
             int sum = 0;
           for(int j = 0; j < cols; j++) {
               sum += accounts[i][j];
               max = Math.max(max ,sum);
           }
        }
        return max;
       }