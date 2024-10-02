from django.shortcuts import render
from rest_framework.decorators import api_view
from rest_framework.response import Response
from rest_framework import status
from .models import *
from .serializers import BookSerializer
# Create your views here.

@api_view(["POST"])
def Bookadd(request):
    serializers = BookSerializer(data=request.data)
    if serializers.is_valid():
        serializers.save()
        return Response(serializers.data, status=status.HTTP_201_CREATED)
    else:
        return Response(serializers.data,status=status.HTTP_400_BAD_REQUEST)

@api_view(["GET"])   
def booklist(request):
    if request.method == "GET":
        students = Book.objects.all()
        serializers = BookSerializer(students,many = True)
        return Response(serializers.data)
    
@api_view(["GET"])
def bookspecific(request,pk):
    if request.method == "GET":
        students = Book.objects.get(id = pk)
        serializers = BookSerializer(students)
        return Response(serializers.data)
    
@api_view(["DELETE"])    
def bookdelete(request,pk):
    if request.method =="DELETE":
        students = Book.objects.get(id=pk)
        # serializers = StudentSerializer(students)  
        students.delete()

