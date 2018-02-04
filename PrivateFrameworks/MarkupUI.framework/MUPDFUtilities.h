/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPDFUtilities : NSObject

+ (id)createDictionaryFromPDFDictionary:(struct CGPDFDictionary { }*)arg1;
+ (id)createPDFDateString:(id)arg1;
+ (long long)exifOrientationOfPage:(struct CGPDFPage { }*)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })flattenRotationTransformForPage:(struct CGPDFPage { }*)arg1 outMediaBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 outCropBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
+ (unsigned long long)indexOfDictionary:(struct CGPDFDictionary { }*)arg1 inArray:(struct CGPDFArray { }*)arg2;
+ (unsigned long long)normalizedRotationAngleOfPage:(struct CGPDFPage { }*)arg1;

@end
