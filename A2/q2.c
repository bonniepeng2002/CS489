
int getValueFromArray(int *array, int len, int index) {
    // Retrieve the element from the array at the specified index
    return array[index];
}


int getValueFromArray2(int *array, int len, int index) {
    if (index < 0 || index >= len) {
        // Handle invalid index (e.g., return an error code)
        return -1; // Alternatively, you could print an error message or handle differently
    }
    return array[index];
}

