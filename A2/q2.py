def get_value_from_array(array, index):
    # Retrieve the element from the array at the specified index
    return array[index]

def get_value_from_array2(array, index):
    if index < 0 or index >= len(array):
        # Handle invalid index (e.g., return None or raise an exception)
        return None  # Or use: raise IndexError("Index out of range")
    return array[index]


