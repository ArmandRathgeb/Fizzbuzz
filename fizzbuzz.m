for i = 1:100
    if mod(i,15) == 0
        disp("fizzbuzz")
    elseif mod(i,3) == 0
        disp("fizz")
    elseif mod(i,5) == 0
        disp("buzz")
    else
        disp(i)
    end
end