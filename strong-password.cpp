int find_it(string str, string ch){

    for (int i = 0; i < str.size(); i++)
        for (int j = 0; j < ch.size(); j++)
            if (str[i] == ch[j])
                return 0;
    return 1;
}

int minimumNumber(int n, string password) {
    string str[] = {"0123456789",
                    "abcdefghijklmnopqrstuvwxyz",
                    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
                    "!@#$%^&*()-+"
    };
    int counter = 0;

    for (int i = 0; i < 4; i++)
        if (find_it(str[i], password))
            counter++;
    return max(counter, 6 - n);
}
