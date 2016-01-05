main = do
    x_temp <- getLine
    let x = read x_temp :: Int
    if not (mod x 2 == 0)
        then putStrLn "Weird"
        else if x >= 6 && x <= 20
            then putStrLn "Weird"
            else putStrLn "Not Weird"