# class - команда создающая класс.
# self - текущий обьект класса.
name = 'Kaplan'
hp = int(input('HP '))
armor = int(input('ARMOR '))
power = int(input('ATK ')) 
weapon = input('WEAPON ')
class Hero(): 

    def __init__(self, name, health, armor, power, weapon):
        self.name = name
        self.hp = hp
        self.armor = armor
        self.power = power
        self.weapon = weapon

    def print_info(self):
        print(f'greetings, {self.name}')
        print(f'HP: {self.hp}')
        print(f'ARMOR: {self.armor}')
        print(f'ATK: {self.power}')
        print(f'WEAPON: {self.weapon}')

    def hit(self, enemy):
        print(f'{self.name} hits {enemy.name}')

hera = Hero(name, hp, armor, power, weapon)
hera.print_info()