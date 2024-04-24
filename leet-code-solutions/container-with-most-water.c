int maxArea(int *height, int heightSize) {
  int i = 0;
  int j = heightSize - 1;
  heightSize = 0;
  while (i < j) {
    if (height[i] < height[j] && (height[i] * (j - i)) > heightSize) {
      heightSize = (height[i] * (j - i));
      i++;
    } else if (height[j] < height[i] && (height[j] * (j - i)) > heightSize) {
      heightSize = (height[i] * (j - i));
      j--;
    } else if (height[j] < height[i]) {
      j--;
    } else if (height[i] < height[j]) {
      i++;
    }
  }
  return heightSize;
}
