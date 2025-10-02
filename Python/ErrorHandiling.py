while True:
 try:
     age = int(input("Enter a Number "))
 except ValueError as err:
     print("Enter a Valid Number")
     print(err)
     continue
 except ZeroDivisionError as err:
      print("input Value is ZERO")
      print(err)
 else :
    print("Thank You")
    break
 finally:
    print("OK all Done")
 print ("Good Bye")
 