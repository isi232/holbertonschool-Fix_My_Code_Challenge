#!/usr/bin/python3

class User:
    """User class"""

    def __init__(self):
        self.__password = None

    def set_password(self, password):
        """Set password"""
        self.__password = password

    def is_valid_password(self, password):
        """Check if password is valid"""
        if password is None or self.__password is None:
            return False
        return password == self.__password
