#include <unistd.h>


void ft_print_combn(int n) {
    // check allowed values for n, exit if not allowed
    if (0 >= n || n >=10) return;

    // space of possible characters for each position
    int space = 11 - n;
    char characters[n][space];
    // Build possible characters for each position (index in N positions)
    // with N=1 characters = M(1 x 10) = {0123456789}
    // with N=2 characters = M(2 x  9) = {012345678,123456789}
    // with N=9 characters = M(9 x  2) = {01,12,23,34,45,56,67,78,89}
    for (int index = 0; index < n; index++) {
        // build characters for position (index)
        for (int x = 0; x < space; x++) {
            // all possible characters for position starting from index + x
            // TIP: directly write characters instead int to avoid later conversion
            characters[index][x] = index + x + '0';
        }
        // x Debug: show characters for each position
        // write(1, characters[index], size);
        // write(1, "\n", 1);
    }

    // the combination array to use filling all its positions
    char combination[n];
    // the stack to use to build the combinations
    // used to store the current index for each position
    int stack[n];
    for (int i=0; i<n; i++){
        stack[i]=0;
    }
    // build combinations
    // counting the combinations found
    int count = 0;
    int index = 0;
    while (index >= 0) { // while not back to the first position
        if (index < n) {
            // building the combination at index position
            int x = stack[index]++; // increase anyway the current index
            // possible characters at this position ended
            if (x >= space){
                // reset the current indexes to the prev index
                int prev=stack[index-1]-1;
                // reset the index for all next columns
                for (int i=index; i<n; i++){
                   stack[i]=prev;
                }
                // back to the previous index
                index--;
                continue;
            }
            if (index == 0 || characters[index][x] > combination[index - 1]) {
                // write in current index a new possible char
                combination[index] = characters[index][x];
                // go to configure the next index
                index++;
            }
        } else {
            // found a combination!
            // Print a comma from the 2nd combination onwards
            if (count++ > 0) write(1, ", ", 2);
            // Print the combination found
            write(1, combination, n);
            // back to the previous index
            index--;
        }
    }
}

int main() {
    for (int i=1; i<=9; i++){
        ft_print_combn(i);
        write(1, "\n", 1);
    }

    return 0;
}


