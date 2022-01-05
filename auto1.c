// Life : till the control remains within the block in which the variable is defined.


#include <stdio.h>
int main()
{
    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            {
                printf("%d\n", i);
            }
        }
        printf("%d\n", i);
    }
    printf("%d\n", i);
}