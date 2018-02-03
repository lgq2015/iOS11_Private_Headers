/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIImageVectorImageSupport : NSObject {
    struct CGPDFPage { } * _CGPDFPage;
    UIColor * _flatColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _paddingInsets;
    double  _scale;
}

@property (nonatomic) struct CGPDFPage { }*CGPDFPage;
@property (nonatomic, retain) UIColor *flatColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingInsets;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (struct CGPDFPage { }*)CGPDFPage;
- (void)dealloc;
- (id)flatColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingInsets;
- (double)scale;
- (void)setCGPDFPage:(struct CGPDFPage { }*)arg1;
- (void)setFlatColor:(id)arg1;
- (void)setPaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScale:(double)arg1;

@end