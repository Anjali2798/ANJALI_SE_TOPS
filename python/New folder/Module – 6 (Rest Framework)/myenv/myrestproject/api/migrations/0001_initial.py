# Generated by Django 5.1.1 on 2024-09-30 10:00

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = []

    operations = [
        migrations.CreateModel(
            name="Book",
            fields=[
                (
                    "id",
                    models.BigAutoField(
                        auto_created=True,
                        primary_key=True,
                        serialize=False,
                        verbose_name="ID",
                    ),
                ),
                ("Title", models.CharField(max_length=20)),
                ("Author", models.CharField(max_length=20)),
                ("Isbn", models.CharField(max_length=20)),
                ("Publisher", models.CharField(max_length=20)),
            ],
        ),
    ]
