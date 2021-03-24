//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Main_Form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner)
{
    this->CVobj_CubeList = new TList;
}

__fastcall TForm1::~TForm1()
{
    TCube *obj_Cube;
    int   mi_c;

    for(mi_c = 0; mi_c < this->CVobj_CubeList->Count; mi_c++)
    {
        obj_Cube = (TCube *)this->CVobj_CubeList->Items[mi_c];
        delete (TCube *)obj_Cube;
    }

}


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    TCube *obj_Cube;

    obj_Cube = new TCube(Viewport3D1);
    obj_Cube->Position->X = 1.0;
    obj_Cube->Position->Y = 1.0;
    obj_Cube->Position->Z = 1.0;
    obj_Cube->Scale->X = 1.0;
    obj_Cube->Scale->Y = 1.0;
    obj_Cube->Scale->Z = 1.0;

    obj_Cube->MaterialSource = ColorMaterialSource1;
    this->CVobj_CubeList->Add((TCube *)obj_Cube);


    obj_Cube = new TCube(Viewport3D1);
    obj_Cube->Position->X = 2.0;
    obj_Cube->Position->Y = 2.0;
    obj_Cube->Position->Z = 2.0;
    obj_Cube->Scale->X = 3.0;
    obj_Cube->Scale->Y = 3.0;
    obj_Cube->Scale->Z = 3.0;
    obj_Cube->MaterialSource = ColorMaterialSource1;
    this->CVobj_CubeList->Add((TCube *)obj_Cube);

}
//---------------------------------------------------------------------------
