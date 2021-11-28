ifstream input("3.2.1.txt");
    int n;
    input>>n;
    input.ignore(1);
    for(int i=1;i<=n;i++) {
        string str;
        getline(input,str);
        str = str+' ';
        for(int i=0;i<str.length()-1;i++) {
            if (str[i] >= 'A' && str[i]<='Z')
                  str[i]+=32;
        }

        xu_li(str);
        cout<<endl;
    }
    input.close();