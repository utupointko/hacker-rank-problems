string dayOfProgrammer(int year)
{

    int day;

    // by jullian calendar
    if (year >= 1700 && year <= 1917)
        day = year % 4 == 0 ? 12 : 13;
    // transition
    else if (year == 1918)
        day = 26;
    // by gregorian calendar
    else
    {
        bool isLeapYear = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
        day = isLeapYear ? 12 : 13;
    }
    return to_string(day) + ".09." + to_string(year);
}