 for (int i = 0; i < D; i++) {
        // Store the first element
        int temp = arr[0];

        // Shift all elements to the left
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }

        // Move the first element to the end
        arr[n - 1] = temp;
    }