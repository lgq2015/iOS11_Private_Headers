/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBNameTable : NSObject

+ (struct XlNameTable { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; struct OcText { int (**x_3_1_1)(); int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; char *x_3_1_6; char *x_3_1_7; bool x_3_1_8; } x3[14]; }*)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2;
+ (id)edNameFromXlName:(struct XlName { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; struct XlString {} *x3; struct XlString {} *x4; struct XlString {} *x5; struct XlString {} *x6; struct XlString {} *x7; char *x8; short x9; short x10; short x11; short x12; unsigned char x13; unsigned char x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; int x22; }*)arg1 name:(struct OcText { int (**x1)(); int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; char *x7; bool x8; })arg2 state:(id)arg3;
+ (void)readFromState:(id)arg1;
+ (struct XlName { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; struct XlString {} *x3; struct XlString {} *x4; struct XlString {} *x5; struct XlString {} *x6; struct XlString {} *x7; char *x8; short x9; short x10; short x11; short x12; unsigned char x13; unsigned char x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; int x22; }*)xlNameFromEDName:(id)arg1 state:(id)arg2;

@end
