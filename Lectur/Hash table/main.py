book = dict()
book['apple'] = 0.67
book['milk'] = 1.49
# print(book)
# print(book['milk'])

phone_book = {}
phone_book["jenny"] = 8675309
phone_book["emergency"] = 911

# print(phone_book["jenny"])

voted = {}
def check_voted(name):
    if voted.get(name):
        print("Kick them out!")
    else:
        voted[name] = True
        print("let them vote!")

check_voted("tom")
check_voted("mike")
check_voted("tom")

