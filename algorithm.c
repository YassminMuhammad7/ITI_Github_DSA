#include<stdio.h>
/*
int linear_search(int* ptr, int size, int number)
{
	int found_index=-1;
	for(int i=0;i<size;i++)
	{
		if((ptr+i)==number)
		{
			found_index = i;
			break;
		}
	}
	return found_index;
}
*/
/*
void bubble_sort(int arr, int size)
{
	//int iteration= size-1;
	int i,j,swap;
	
	for(i=0;i<=size-1;i++)
	{
		for(j=0;j<=size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
	
				
			}
		}

	}
				for (int i =0;i<size;i++)
	{
		printf(" %d, ",arr[i]);
	}
	
}
*/
/*
void swap_func(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
void selection_sort(int arr , int size)
{
	int min_i;
	for(int i=0;i<size-1; i++)
	{
		min_i=i;
		for(int j =i+1; j<size;j++)
		{
			if(arr[j]< arr[min_i])
			{
				min_i =j;
				
			}
			swap_func(&arr[i],&arr[min_i]);
		}
		
	}
}
*/
/*
void insertion_sort(int arr[], int size)
{
	int min_indx;
	for(int i=0;i<size-1; i++)
	{
		
		if(arr[i]>arr[i+1])
		{
			min_indx=i+1;
			last_indx=i
			while(arr[min_i]<arr[last_indx])
			{
				for(int j=last_indx-1; j>=0;j++)
				{
					
					if(arr[last_indx]>arr[min_i])
					{
						swap
					}
				}
			
			min_i=i;
			if
		    }	
			swap= arr[i];
			arr[i]=arr[+1];
			arr[j+1]=swap;
		}
}
*/


typedef struct node
{
	int data ;
	struct node*Next;
}Node;

Node* LinkedList_Creat(int  copy_u8Data)
{
	Node* Head = (Node*)malloc(sizeof(Node));
	if(Next!=Null)
	{
		Head->Data = copy_u8Data;
		Head->Next = Null;
		
	}
}
Node* LinkedList_prepend(Node* Head, int  copy_u8NewData)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
		
	if(Next!=Null)
	{
		NewNode->Data = copy_u8NewData;
		NewNode->Head = Head;
		Head= New_Node;
	}
	return Head;
		
}
void LinkedList_append(Node* Head, int  copy_u8NewData)
{
	Node* List_Node = head;
	Node* NewNode = (Node*)malloc(sizeof(Node));
	while(1)
	{
		
		if(List_Node->Next==NULL)
		{
			
	
	while(List_Node->Next!=NULL)
	{
		List_Node=List_Node->Next;
		
	}		

	if(Next!=NULL)
	{
		
		NewNode->Data = copy_u8NewData;
		NewNode->Next = NULL;
		List_Node->Next= New_Node;
	}
	return Head;
		
}
/*
void LinkedList_append(Node* Head, int  copy_u8NewData)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	Node* List_Node = (Node*)malloc(sizeof(Node));
		
	while(List_Node->Next!=NULL)
	{
		List_Node=List_Node->Next;
		
	}		

	if(Next!=NULL)
	{
		NewNode->Data = NULL;
		Head= New_Node;

		NewNode->Search_Node = Head;
	}
	return Head;
		
}
*/
Node* LinkedList_InsertAfter(Node* Prev_Node, int value)
{
	Node* New_Node = (Node*)malloc(sizeof(Node));
	if(Prev_Node!= NULL)
	{
	while(Next!=NULL)
	{
		New_Node=New_Node->Next;
		if(New_Node==value)
		{
			New_Node->Data= value;
			New_Node->Next=Prev_Node->Next;
			Prev_Node->Next=New_Node;
			
		}
		
	}
	}
	return Prev_Node;
}

Node* LinkedList_search(Node* Head,int  copy_u8Value)
{
	Node* Search_Node = Head;
	while(Search_Node!=NULL && Search_Node!=copy_u8Value )
	{
		Search_Node=Search_Node->Next;
		
	}
	
	return Search_Node;
}
/*
Node* LinkedList_search(Node* Head,int  copy_u8Value)
{
	Node* Search_Node = Head;
	while(Search_Node!=NULL)
	{
		Search_Node=Search_Node->Next;
		if(Search_Node==copy_u8Value)
		{
			break;
		}
		
	}
	
	return Search_Node;
}
*/
Node* LinkedList_DeleteNext(Node* Prev_Node, u8 copy_u8Data)
{
	Node* Search_Node = (Node*)malloc(sizeof(Node));

	Node* New_Prev_Node= Prev_Node->Next;

	while(Next!=NULL)
	{
		
		Search_Node=Search_Node->Next;
		if(Search_Node==copy_u8Data)
		{
			Prev_Node->Next = Search_Node->Next;
			free()
			
		}
	}
	Prev_Node->Next = 
}
void LinkedList_Sort(Node* Head)
{
	Node* node_i;
	Node* node_j;

	//no-iteration
	for( node_i=Head;node_i-> Next != NULL; node_i=node_i->Next)
	{
		// no-passes
		for(j =i+1; j<size;j++)
		{
			if(node_j->Data < node_i->Data)
			{
				swap_func(&(node_i->Data),&(node_j->Data));//focus on parasecss () to piorty if &node_i->Data(& implementaion or ->) whose 1st
			}
		}
		
	}
}

void LinkedList_print(Node* Head)
{
	Node* Search_Node = (Node*)malloc(sizeof(Node));
		
	while(Next!=NULL)
	{
		printf("%d\n",*Search_Node);
		Search_Node=Search_Node->Next;
		
	}
	printf("--------------\n");
}
int main()
{
	/*
	int size =10;
	int arr[10]={23,77,9,10,33,55,8,26,34,2};
	//selection_sort(arr[10], size);
	insertion_sort(arr[10], size);
					for (int i =0;i<size;i++)
	{
		print
		f(" %d, ",arr[i]);
	}
	
	*/
	/*input data from user*/
	int x,y;
	Node* Head= LinkedList_Creat(10);//add 1st value;
	/*x_value=scanf("Enter 1st value= %d",&x);
	New_Head=LinkedList_prepend(Head,x_value);
	y_value=scanf("Enter 1st value= %d",&y);
	New_Head=LinkedList_prepend(Head,y_value);
	*/
	scanf("%d%d",&x,&y);
	New_Head=LinkedList_prepend(Head,x);
	New_Head=LinkedList_prepend(Head,x);
	LinkedList_print(Head);

	
	
}
