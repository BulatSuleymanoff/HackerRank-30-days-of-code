main = do
    originalPriceS <- getLine
    tipS <- getLine
    taxS <- getLine
    let originalPrice = read originalPriceS :: Float
    let tip = read tipS :: Float
    let tax = read taxS :: Float
    let res = originalPrice * (1 + tip / 100 + tax / 100)
    let finalPrice = round res
    let finalPriceS = show finalPrice :: String
    putStrLn ("The final price of the meal is $" ++ finalPriceS ++ ".")