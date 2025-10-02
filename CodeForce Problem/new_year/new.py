import turtle

# Set up the turtle screen
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor('#000000')  # Black background
t.pencolor('#FFFFFF')  # White pen color
t.speed(100)  # Speed of the turtle

# Define colors (only white for this case)
col = ('#FFFFFF', '#FFFFFF', '#FFFFFF', '#FFFFFF')

# Drawing the flower
for n in range(5):
    for x in range(8):
        t.speed(x + 10)
        for i in range(2):
            t.pensize(2)
            t.circle(80 + n * 20, 90)
            t.lt(90)
        t.lt(45)
        t.pencolor(col[n % 4])
        print("Flower Such Like As Hosu")
# Exit on click
s.exitonclick()
