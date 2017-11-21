main = do
    input <- getLine
    putStrLn (show (proof (read input :: Int) 0))

proof :: Int -> Int -> Int
proof n step 
    | n == 1 = step
    | n `mod` 2 == 0 = proof (n `div` 2) (step + 1)
    | otherwise = proof ((n * 3 + 1) `div` 2) (step + 1)
