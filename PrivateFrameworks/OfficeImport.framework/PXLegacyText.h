/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXLegacyText : NSObject

+ (void)readLegacyTextFromData:(id)arg1 toShape:(id)arg2 state:(id)arg3;
+ (void)readLegacyTextGlobalsFromData:(id)arg1 state:(id)arg2;
+ (struct PptTextMasterStyleAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; struct ChVector<PptTextMasterStyleAtom::Level *> { struct Level {} **x_7_1_1; struct Level {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; }*)textMasterStyleOfType:(int)arg1 state:(id)arg2;

@end
