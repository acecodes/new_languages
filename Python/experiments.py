import collections
from random import choice

Card = collections.namedtuple('Card', ['rank', 'suit'])


class CardDeck:

    """
    A deck of cards
    """
    ranks = [str(n) for n in range(2, 11) + list('JQKA')]
    suits = ['spades', 'diamonds', 'clubs', 'hearts']

    def __init__(self):
        self._cards = [Card(rank, suit) for suit in self.suits
                       for rank in self.ranks]

    def __len__(self):
        return len(self._cards)

    def __getitem__(self, position):
        return self._cards[position]

    @staticmethod
    def get_random(deck):
        return choice(deck)

if __name__ == '__main__':
    cards = CardDeck()
    print(cards[0])  # Testing __getitem__
    print(CardDeck.get_random(cards))
    print(Card('Q', 'spades') in cards)
