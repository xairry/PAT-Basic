main = do
    input <- getLine
    let sum_result = map (\i -> [i]) $ show . sumString $ input
    putStrLn $ speek sum_result


sumString :: String -> Int
sumString s = sum $ map (\i -> read [i]) $ s ++ ""

speek (x:xs) 
    | xs == [] = pronunciation !! (read x :: Int)
    | otherwise = pronunciation !! (read x :: Int) ++ " " ++ speek xs

pronunciation = ["ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"]

