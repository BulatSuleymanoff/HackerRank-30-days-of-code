original_price = float(raw_input())
tip = int(raw_input())
tax = int(raw_input())
final_price = original_price + float(original_price * tip) / 100. + float(original_price * tax) / 100.

print 'The final price of the meal is $%d.' % (int(round(final_price)))