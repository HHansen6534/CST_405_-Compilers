import json
import os

def build_json():
    data = {}
    data['while'] = {
        "var":"",
        "condition":"",
        "block":""
    }
    os.chdir("WhileOps")
    outfile = open('WhileOps.json', 'w')
    json.dump(data, outfile, indent=4)
    outfile.close()
    os.chdir("..")
