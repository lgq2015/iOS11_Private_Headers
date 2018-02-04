/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBConditionalFormat : NSObject

+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)arg1;
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)arg1;
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)arg1;
+ (int)convertXlConditionalFmtTypeEnumToED:(int)arg1;
+ (void)readXlConditionalFormat:(struct XlConditionalFormat { int (**x1)(); struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord {} **x_1_2_1; struct XlRecord {} **x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; struct XlCondFmt {} *x3; }*)arg1 toEDConditionalFormatting:(id)arg2 state:(id)arg3;
+ (bool)validXlCf:(struct XlCf { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; int x3; int x4; short x5; short x6; struct XlDXf {} *x7; char *x8; char *x9; }*)arg1;

@end
