import sys

number_of_contacts = input()
phone_book = {}

for i in range(number_of_contacts):
    name = raw_input()
    phone_number = raw_input()
    phone_book[name] = phone_number
    
queries = []
    
for query in sys.stdin:
    query = query.strip('\n')
    if query in phone_book:
        print query + '=' + phone_book[query]
    else: print 'Not found'