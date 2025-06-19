//this function iterates over the candles vector and saves the tallest candle it has seen with a counter
//whenever we see a taller candle, we reset the counter to 1 and update the tallest candle
int birthday_candles(vector<int>& candles){
  int counter = 0;
  int tallest = -1;

  for(auto c : candles){
    if(c > tallest){
      counter = 1;
      tallest = c;
    }
    else if(c == tallest){
      counter++;
    }
  }
  return counter;
}
