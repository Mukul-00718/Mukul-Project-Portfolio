import webbrowser
import random

# 🎵 Define song links (fill with your own YouTube links)
happy_songs = [
    "https://youtu.be/oLgzs8nut3A?si=gAELn2rT3pOv2ud8",
    "https://youtube.com/shorts/_ORgU2Z1F0U?si=3oV4DfIubDxwU1I3",
    "https://youtu.be/T-upgqYnILk?si=ECBv4J-uYyP6F5CR"
]

sad_songs = [
    "https://youtube.com/shorts/H_KMxVhT4aQ?si=R3vRBDbDAHh9dyq1",
    "https://youtu.be/EtGh9oC2SZ0?si=17gcBkM0CFpBOz4b",
    "https://youtu.be/cO4eJxbCedc?si=M5OKlyH0f4S_TVEs"
]

neutral_songs = [
    "https://youtube.com/shorts/J-Lg2t6kVWU?si=coKRDTkaXGG4GYfn",
    "https://youtube.com/shorts/MywCmeZW24Y?si=WuftH1v2smk1JQrJ",
    "https://youtube.com/shorts/VcTm_lEJwCc?si=5gpmKxxG0YX9tgef"
]

# 🎤 Take user input
mood = input("Enter your current mood (happy / sad / neutral): ").lower()

# 🎲 Play a random song from the selected mood
if mood == "happy":
    song = random.choice(happy_songs)
    print(f"Playing a happy song: {song}")
    webbrowser.open(song)

elif mood == "sad":
    song = random.choice(sad_songs)
    print(f"Playing a sad song: {song}")
    webbrowser.open(song)

elif mood == "neutral":
    song = random.choice(neutral_songs)
    print(f"Playing a neutral song: {song}")
    webbrowser.open(song)

else:
    print("❌ Your mood is not defined. Please enter: happy, sad, or neutral.")
