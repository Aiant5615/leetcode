int trap(int* height, int heightSize) {
    int left = 0, right = heightSize - 1, leftMax = 0, rightMax = 0, water = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] > leftMax) leftMax = height[left];
            water += leftMax - height[left++];
        } else {
            if (height[right] > rightMax) rightMax = height[right];
            water += rightMax - height[right--];
        }
    }
    return water;
}
