#include <agar/core.h>
#include <agar/gui.h>
#include <stdlib.h>
#include <stdio.h>

void
Selected(AG_Event *event)
{
	AG_TlistItem *item = AG_TLIST_ITEM_PTR(1);
	
	AG_TextMsg(AG_MSG_INFO, "Selected item: %s", item->text);
}

int main(int argc, char *argv)
{        
  if (AG_InitCore(NULL, 0) == -1 ||
      AG_InitGraphics(0) == -1
     ) 
  {
		  fprintf(stderr, "Init failed: %s\n", AG_GetError());
		  return (1);
	}

  AG_Window *win = AG_WindowNew(0);

  /*====================================================*/

  AG_Combo *com = AG_ComboNew(win, 0, "Item: ");
  AG_TlistAdd(com->list, NULL, "Foo");
  AG_TlistAdd(com->list, NULL, "Bar");
  AG_SetEvent(com, "combo-selected", Selected, NULL);

  /*======================================================*/
  
  AG_WindowShow(win);
  AG_EventLoop();
  return (0);
}