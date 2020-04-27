enum name_tag
{
    BLUEBERRY,
    BANANA,
    PINEAPPLE,
    WATERMELON
};
typedef enum name_tag name_t;

struct fruit_tag
{
    name_t name;
    double size;
};
typedef struct fruit_tag fruit_t;

fruit_t getBigger(fruit_t f, double d)
{
    f.size += d;
    return f;
}

int main(void)
{
    fruit_t myFruit;
    myFruit.name = BANANA;
    myFruit.size = 5.2;
    myFruit = getBigger(myFruit, 3.4);
    printf("This fruit is %.2f grams.\n", myFruit.size);
    return 0;
}