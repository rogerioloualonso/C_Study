
float dist(float x1, float y1, float x2, float y2){

  float result;
  result = (((x2 - x1)*(x2 - x1)) - ((y2 - y1)*(y2 - y1))/2);

  return result;
}

