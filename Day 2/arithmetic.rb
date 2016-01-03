_original_price = gets().to_f
_tip = gets().to_i
_tax = gets().to_i
_res = _original_price * (1 + 1.0 * _tax / 100 + (1.0 * _tip / 100))
puts ("The final price of the meal is $#{ _res.round }.")