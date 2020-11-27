import pygame
pygame.mixer.init()
pygame.mixer.music.load('exe021.mp3')
pygame.mixer.music.play()
print('ouve o som')
input()
pygame.event.wait()
print('ouve o som')
n = input('aperte enter para finalizar >>>')
