int pointValue = a[left];
        int point = right;
        int check = 1;
        while (left < right){
            check = 1;
            while ((check == 1) && (left < right))
            {
                if (pointValue > a[right]){
                    a[left] = a[right];
                    left++;
                    check = 0;
                }
                else if(pointValue < a[right]){
                    right--;
                }
            }
            check = 1;
            while ((check == 1) && (left < right))
            {
                if (pointValue < a[left]){
                    a[right] = a[left];
                    right--;
                    check = 0;
                }
                else if(pointValue > a[left]){
                    left++;
                }
            }
            a[left] = pointValue;
            