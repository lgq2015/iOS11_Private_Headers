/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBStyleSheet : NSObject

+ (void)initializeStyles:(id)arg1 with:(struct WrdStyleSheet { int (**x1)(); unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; struct WrdStyle {} *x6; struct ChVector<WrdStyle *> { struct WrdStyle {} **x_7_1_1; struct WrdStyle {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct WrdPredefinedStyleInfo { unsigned int x_8_1_1 : 1; } x8[156]; unsigned short x9; }*)arg2 reader:(id)arg3;
+ (void)readFrom:(id)arg1 styleSheet:(id)arg2;

@end
