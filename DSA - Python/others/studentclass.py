class Student:
    # [assignment] Skeleton class. Add your code here
    def __init__(self, name, age, tracks = None, score = 0):
        self.name = name
        self.age = age
        if tracks is None:
            self.tracks = []
        else:
            self.tracks = tracks
        self.score = float(score)
    def change_name(self, new_name):
        return self.name.replace(self.name, new_name)

    def Change_age(self, new_age):
        self.new_age = new_age
        print(new_age)

    def Add_Track(self, new_track):
            if new_track not in self.tracks:
                self.tracks.append(new_track)

    def get_score(self):
        return self.score
#
Bob = Student(name="Bob", age=26, tracks=["FE","BE"],score=20.90)

print(Bob.change_name("Peter"))
print(Bob.Change_age(34))
Bob.Add_Track("UI/UX")
print(Bob.tracks)
print(Bob.get_score())














# Bob = Student(name="Bob", age=26, tracks=["FE","BE"],score=20.90)
#
# # Expected methods
# Bob.change_name("Peter")
# Bob.change_age(34)
# Bob.add_track("UI/UX")
# Bob.get_score()

