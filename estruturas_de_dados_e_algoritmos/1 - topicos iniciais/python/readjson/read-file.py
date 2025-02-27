import json
from dateutil import parser

# pip install python-dateutil

with open('file.json', 'r') as file:
    jsonData = json.load(file)

def parse_timestemp(timestemp):
    return parser.isoparse(timestemp)


for course in jsonData:
    print(f"Curso: {course['title']}")

    for lesson in course['lessons']: 
        print(f"    Aula {lesson['id']} - {lesson['title']}")
        print(f"        Media: {lesson['media']}")
        print(f"        timestemp: {parse_timestemp(lesson['timestamp'])}")