original_price = input("");
tip = input("");
tax = input("");
res = original_price * (1 + tip / 100 + tax / 100);
final_price = round(res);
disp(strcat("The final price of the meal is $", num2str(final_price), "."));