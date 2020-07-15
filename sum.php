<?php


    $numbers = readline ("Enter numbers: ");

    print(sprintf("Numerele sunt: %s\n", $numbers));

    $list = explode(" ", $numbers);

    $sum = 0;
    for( $i = 0; $i < count($list); $i++) {
        if ( is_numeric($list[$i]) ) {
            $sum += intval($list[$i]);
        }
    }

    print(sprintf("Suma este %d\n", $sum));
    

