#include <stdio.h>
#include <stdbool.h>

/* line styles */
#define SOLID 0
#define DOTTED 1
#define DASHED 2
/* colors */
#define BLUE 4
#define GREEN 2
#define RED 1
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED| GREEN| BLUE)

const char * colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};
struct box_props
{
    
    bool opaque:1; // opaque or transparent
    unsigned int fill_color:3; //color style
    unsigned int :4; //pad by 3
    bool border:1; // border presencse
    unsigned int border_color:3; //color style
    
    unsigned int style:2; // border style
    unsigned int :2;
};
void show_settings(const struct box_props *pb);
int main() 
{
    struct box_props box = {true/*opaque*/, YELLOW/*fill color*/, true/*border*/, GREEN/*border color*/, DASHED/*border style*/};
    printf("box settings:\n");
    show_settings(&box);
    printf("new box settings:\n");
    box.opaque=false;
    box.fill_color=WHITE;
    show_settings(&box);
    return 0;
}
void show_settings(const struct box_props *pb)
{
    printf("Box is %s.\n", pb ->opaque==true? "opaque": "transparent");
    printf("Fill color: %s\n", colors[pb->fill_color]);
    printf("Box has %s. \n", pb ->border==true? "a border": "no border");
    printf("Border color: %s\n", colors[pb->border_color]);
    switch (pb->style)
    {
    case SOLID: printf("Border style: %s\n","solid"); break;
    case DOTTED: printf("Border style: %s\n","dotted"); break;
    case DASHED: printf("Border style: %s\n","dashed"); break;
    default: printf("unknown");
        break;
    }
}