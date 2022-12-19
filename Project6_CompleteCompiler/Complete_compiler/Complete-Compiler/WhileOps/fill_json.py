import json
import os
import sys
import time

from dataclasses import dataclass
from build_json import build_json


@dataclass
class WhileOps:
    def __init__(self) -> str:
        self.while_json = self.pre_filling()
        self.var = self.get_var()
        self.condition = self.get_condition()
        self.block = self.get_block()
    
    def fill_all(self):
        self.while_json = self.fill_var(self.var, self.while_json)
        self.while_json = self.fill_condition(self.condition, self.while_json)
        self.while_json = self.fill_block(self.block, self.while_json)

    
    def pre_filling(self) -> dict:
        """
        Builds the json file
        """
        with open("WhileOps/WhileOps.json", "r") as json_file:
            dict = json.load(json_file)
        return dict

    def fill_var(self,var: list, load) -> dict:
        for v in var:
            h = load['while']['var']
            load['while']['var'] = h + v 
        return load
            
        
        
    def get_var(self) -> list:
        """
        gets the variables from the file
        """
        os.chdir("WhileOps/static")
        files = os.listdir()
        for file in files:
            if file.startswith("vars"):
                with open(file, 'r') as f:
                    var = f.readlines()
                var = list(set(var))
        os.chdir("../..")
        print(var)
        return var
                
                

    def fill_condition(self, condition: list, load: dict) -> dict:
        """
        Fills the condition part of the json file
        """
        for c in condition:
            s = load['while']['condition']
            load['while']['condition'] = s + c
        return load


    def get_condition(self)-> list:
        """ 
        Loads the condition from the file
        """
        os.chdir("WhileOps/static")
        files = os.listdir()
        for file in files:
            if file.startswith("cond"):
                with open(file, 'r') as f:
                    cond = f.readlines()
        os.chdir("../..")
        return cond
           

    def fill_block(self, block: list, load: dict) -> dict:
        """
        Fills the block part of the json file
        """
        for line in block:
            f = load['while']['block']
            load['while']['block'] = f + line
        return load


    def get_block(self):
        os.chdir("WhileOps/static")
        files = os.listdir()
        for file in files:
            if file.startswith("block"):
                with open(file, 'r') as f:
                    block = f.readlines()
        os.chdir("../..")
        return block
    
    def while_string_formate(self):
        """
        Writes the while string to the json file
        """
        return f"""{self.while_json["while"]["var"]}\nwhile {self.while_json["while"]["condition"]}:\n{self.while_json["while"]["block"]}"""
    
    
    def exec_while_string(self, string: str):
        my_file = open('WhileOps/resultes/resultes.txt', 'w')
        print(string)
        sys.stdout = my_file

        exec(string)
    


if __name__ == "__main__":
    build_json()
    whiles = WhileOps()
    whiles.fill_all()
    whiles.exec_while_string(whiles.while_string_formate())

    
