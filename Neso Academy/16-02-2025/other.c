int increment()
{
        static int count;
        ++count; // -> same as: count = count + 1
        return count;
}