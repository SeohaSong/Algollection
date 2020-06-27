(
    if [[ ! -f TC.txt ]]
    then
        echo 5000000 >> TC.txt
        idx=1
        while [[ $idx -le 10 ]]
        do
            echo $idx >> TC.txt
            idx=$(( $idx + 1 ))
        done
    fi
    ddd build main.cpp
    ./a.out < TC.txt
)