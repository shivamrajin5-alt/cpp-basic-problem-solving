import turtle
import math
import random

# ---------- Screen Setup ----------
screen = turtle.Screen()
screen.title("Happy Teacher's Day")
screen.setup(width=850, height=650)
screen.tracer(0)

WIDTH, HEIGHT = 850, 650

# ---------- Background gradient (drawn once) ----------
bg_pen = turtle.Turtle()
bg_pen.hideturtle()
bg_pen.speed(0)
bg_pen.penup()

def hex_to_rgb(h):
    h = h.lstrip('#')
    return tuple(int(h[i:i+2], 16) for i in (0, 2, 4))

def lerp_color(c1, c2, t):
    r1, g1, b1 = hex_to_rgb(c1)
    r2, g2, b2 = hex_to_rgb(c2)
    r = int(r1 + (r2 - r1) * t)
    g = int(g1 + (g2 - g1) * t)
    b = int(b1 + (b2 - b1) * t)
    return (r, g, b)

def draw_gradient_background(top_color, bottom_color, strips=60):
    screen.colormode(255)
    strip_h = HEIGHT / strips
    for i in range(strips):
        t = i / strips
        color = lerp_color(top_color, bottom_color, t)
        y = HEIGHT / 2 - i * strip_h
        bg_pen.goto(-WIDTH / 2, y)
        bg_pen.setheading(0)
        bg_pen.color(color)
        bg_pen.begin_fill()
        for _ in range(2):
            bg_pen.forward(WIDTH)
            bg_pen.right(90)
            bg_pen.forward(strip_h)
            bg_pen.right(90)
        bg_pen.end_fill()

draw_gradient_background("#0f0c29", "#302b63")

# ---------- Pens ----------
heart_pen = turtle.Turtle()
heart_pen.hideturtle(); heart_pen.speed(0); heart_pen.width(2)

glow_pen = turtle.Turtle()
glow_pen.hideturtle(); glow_pen.speed(0)

star_pen = turtle.Turtle()
star_pen.hideturtle(); star_pen.speed(0); star_pen.penup()

confetti_pen = turtle.Turtle()
confetti_pen.hideturtle(); confetti_pen.speed(0); confetti_pen.penup()

float_pen = turtle.Turtle()
float_pen.hideturtle(); float_pen.speed(0); float_pen.penup()

icon_pen = turtle.Turtle()
icon_pen.hideturtle(); icon_pen.speed(0); icon_pen.penup()

text_pen = turtle.Turtle()
text_pen.hideturtle(); text_pen.penup(); text_pen.color("white")

sub_pen = turtle.Turtle()
sub_pen.hideturtle(); sub_pen.penup(); sub_pen.color("#ffe08a")

# ---------- Heart shape ----------
def heart_point(t, scale):
    x = 16 * math.sin(t) ** 3
    y = (13 * math.cos(t) - 5 * math.cos(2 * t) -
         2 * math.cos(3 * t) - math.cos(4 * t))
    return x * scale, y * scale

def get_heart_points(scale):
    pts = []
    t = 0
    while t <= 2 * math.pi:
        x, y = heart_point(t, scale)
        pts.append((x, y))
        t += 0.05
    return pts

def draw_heart(scale):
    # soft glow behind
    glow_pen.clear()
    glow_pen.color("#ff8fa3")
    glow_pen.penup()
    pts = get_heart_points(scale * 1.15)
    glow_pen.goto(pts[0][0], pts[0][1] - 30)
    glow_pen.pendown()
    glow_pen.begin_fill()
    for x, y in pts:
        glow_pen.goto(x, y - 30)
    glow_pen.end_fill()

    # main heart
    heart_pen.clear()
    heart_pen.color("#ff4d6d", "#ff4d6d")
    heart_pen.penup()
    pts = get_heart_points(scale)
    heart_pen.goto(pts[0][0], pts[0][1] - 30)
    heart_pen.pendown()
    heart_pen.begin_fill()
    for x, y in pts:
        heart_pen.goto(x, y - 30)
    heart_pen.end_fill()

# ---------- Twinkling stars ----------
star_colors = ["white", "#ffe08a", "#c39bd3", "#7ec8e3"]
stars = [[random.randint(-410, 410), random.randint(-320, 320),
          random.uniform(0.5, 1.4), random.choice(star_colors),
          random.randint(0, 20)] for _ in range(45)]

def draw_stars(frame):
    star_pen.clear()
    for s in stars:
        x, y, size, color, phase = s
        if (frame + phase) % 20 < 15:
            star_pen.goto(x, y)
            star_pen.dot(size * 6, color)

# ---------- Falling confetti ----------
confetti_colors = ["#ff6b6b", "#ffd93d", "#6bcB77", "#4d96ff", "#c77dff"]
confetti = [[random.randint(-410, 410), random.randint(-320, 320),
             random.uniform(1.5, 3.5), random.choice(confetti_colors),
             random.uniform(3, 6)] for _ in range(35)]

def draw_confetti():
    confetti_pen.clear()
    for c in confetti:
        c[1] -= c[2]  # fall speed
        if c[1] < -325:
            c[1] = 325
            c[0] = random.randint(-410, 410)
        confetti_pen.goto(c[0], c[1])
        confetti_pen.dot(c[4], c[3])

# ---------- Floating small hearts ----------
floaters = [[random.randint(-380, 380), random.randint(-320, -100),
             random.uniform(0.8, 1.6), random.choice(["#ff8fa3", "#ffb3c6", "#ff4d6d"])]
            for _ in range(9)]

def draw_floaters():
    float_pen.clear()
    for f in floaters:
        f[1] += f[2]
        if f[1] > 330:
            f[1] = -330
            f[0] = random.randint(-380, 380)
        float_pen.goto(f[0], f[1])
        float_pen.color(f[3])
        float_pen.dot(10, f[3])

# ---------- Apple & book icons (teacher symbols) ----------
def draw_apple(x, y, bob):
    icon_pen.color("#ff5252")
    icon_pen.goto(x, y + bob - 15)
    icon_pen.setheading(0)
    icon_pen.pendown()
    icon_pen.begin_fill()
    icon_pen.circle(18)
    icon_pen.end_fill()
    icon_pen.penup()
    icon_pen.color("#5c3a21")
    icon_pen.goto(x, y + bob + 3)
    icon_pen.pendown()
    icon_pen.setheading(70)
    icon_pen.forward(12)
    icon_pen.penup()
    icon_pen.color("#4caf50")
    icon_pen.goto(x + 6, y + bob + 10)
    icon_pen.setheading(30)
    icon_pen.pendown()
    icon_pen.begin_fill()
    icon_pen.circle(6, 180)
    icon_pen.circle(6, 180)
    icon_pen.end_fill()
    icon_pen.penup()

def draw_book(x, y, bob):
    icon_pen.color("#4d96ff")
    icon_pen.goto(x - 20, y + bob - 12)
    icon_pen.setheading(0)
    icon_pen.pendown()
    icon_pen.begin_fill()
    for side in (40, 24):
        icon_pen.forward(side)
        icon_pen.left(90)
    for side in (40, 24):
        icon_pen.forward(side)
        icon_pen.left(90)
    icon_pen.end_fill()
    icon_pen.penup()
    icon_pen.color("white")
    icon_pen.goto(x, y + bob - 12)
    icon_pen.pendown()
    icon_pen.goto(x, y + bob + 12)
    icon_pen.penup()

# ---------- Messages ----------
def draw_text(frame):
    text_pen.clear()
    text_pen.goto(0, 250)
    scale_pulse = 1 + 0.05 * math.sin(frame * 0.2)
    size = int(28 * scale_pulse)
    text_pen.color("white")
    text_pen.write("Happy Teacher's Day", align="center",
                    font=("Georgia", size, "bold"))

def draw_sub_text():
    sub_pen.clear()
    sub_pen.goto(0, -270)
    sub_pen.write("Thank you for your patience, guidance",
                   align="center", font=("Arial", 13, "italic"))
    sub_pen.goto(0, -295)
    sub_pen.write("and for making Python so much fun!",
                   align="center", font=("Arial", 13, "italic"))

draw_sub_text()

# ---------- Animation loop ----------
frame = 0

def animate():
    global frame
    scale = 8 + 1.2 * math.sin(frame * 0.15)
    bob = 6 * math.sin(frame * 0.1)

    draw_confetti()
    draw_stars(frame)
    draw_floaters()
    draw_heart(scale)
    icon_pen.clear()
    draw_apple(-230, -20, bob)
    draw_book(230, -20, -bob)
    draw_text(frame)

    screen.update()
    frame += 1
    screen.ontimer(animate, 50)

animate()
screen.mainloop()