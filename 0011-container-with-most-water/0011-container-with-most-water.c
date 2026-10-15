int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1, best = 0;
    while (left < right) {
        int h = height[left] < height[right] ? height[left] : height[right];
        if (h * (right - left) > best) best = h * (right - left);
        if (height[left] < height[right]) left++;
        else right--;
    }
    return best;
}
