original_price = float(raw_input())
tip = int(raw_input())
tax = int(raw_input())
final_price = original_price + float(original_price * tip) / 100. + float(original_price * tax) / 100.
if final_price - int(final_price) < 0.5:
    final_price = int(final_price)
else:
    final_price = int(final_price + 1)

print 'The final price of the meal is $%d.' % (final_price)