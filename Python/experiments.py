import collections
from random import choice

Card = collections.namedtuple('Card', ['rank', 'suit'])
Flashcards = collections.namedtuple('Flashcard', ['question', 'answer'])


class CardDeck:

    """
    A deck of cards.
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


class FlashcardCollection:
    """
    A collection of simple Q&A flashcards.
    """

    def __init__(self, name):
        self._flashcards = []
        self._name = name

    def __getitem__(self, position):
        q = self._flashcards[position][0]
        a = self._flashcards[position][1]
        statement = 'Q: {}, A: {}'.format(q, a)
        return statement

    def __str__(self):
        return 'Flashcards in {} deck: {}'.format(self._name, self._flashcards)

    def __len__(self):
        return len(self._flashcards)

    def add_card(self, question, answer):
        new_card = Flashcards(question, answer)
        self._flashcards.append(new_card)


if __name__ == '__main__':
    cards = CardDeck()
    print(cards[0])  # Testing __getitem__
    print(CardDeck.get_random(cards))
    print(Card('Q', 'spades') in cards)

    flashcards = FlashcardCollection('My Cards')
    flashcards.add_card('What is 1+1?', '2')
    print(flashcards)
