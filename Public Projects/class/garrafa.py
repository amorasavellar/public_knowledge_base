class Garrafa:
    
    #Metodo construtor
    def __init__(self, cor, volume, marca) -> None:
        self.cor = cor
        self.volume = volume
        self.marca = marca
        
    
    #Ação 1
    def abrir(self) -> None:
        return f'Pode beber'
    
    #Ação 1
    def fechar(self) -> None:
        return f'Não sai nenhum liquido'