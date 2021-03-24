//---------------------------------------------------------------------------

#ifndef Main_FormH
#define Main_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Viewport3D.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.Objects3D.hpp>
#include <System.Math.Vectors.hpp>
#include <FMX.MaterialSources.hpp>
#include <FMX.Types3D.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
    __published:	// IDE-managed Components
        TViewport3D *Viewport3D1;
        TButton *Button1;
    TColorMaterialSource *ColorMaterialSource1;
    TLight *Light1;
    void __fastcall Button1Click(TObject *Sender);
    private:	// User declarations
        TList *CVobj_CubeList;


    public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        __fastcall ~TForm1();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
