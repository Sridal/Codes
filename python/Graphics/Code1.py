import pygame
pygame.init()
dW = 500
dH = 500
surface=pygame.display.set_mode((dW,dH))
pygame.display.set_caption("Image")
dI=pygame.image.load(r'/home/shridal/Pictures/kisspng-arch-linux-installation-btrfs-computer-software-archery-5ad1b76b915298.4679673115236934195953.png')
while True:
    surface.fill((255,255,255))
    surface.blit(dI,(250,250))

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()
        pygame.display.update()