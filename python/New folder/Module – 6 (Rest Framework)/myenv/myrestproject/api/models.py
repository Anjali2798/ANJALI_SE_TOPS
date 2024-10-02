from django.db import models

# Create your models here.

class Book(models.Model):
    Title=models.CharField(max_length=20)
    Author=models.CharField(max_length=20)
    Isbn=models.CharField(max_length=20)
    Publisher=models.CharField(max_length=20)
