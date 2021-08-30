    #include  <iostream>
    using  namespace  std;

    int  main()
    {
        int  N, count = 0;
        cin  >>  N;
        clock_t startTime = clock();
        for (int  i =  2; i < N;  ++i)
        {
            for (int  j =  2;  j < i;  ++j)
            {
                if (i  % j ==  0)
                {
                    count++;
                    break ;
                }
            }
            
        }
        cout  <<  count  <<  "\n";
        cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " Segundos." << endl;
        return  0;
    }