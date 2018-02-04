/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPHighlighter : NSObject {
    CPZone * boundingZone;
    struct CGColor { } * color;
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; } * highlightedStyle;
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; } * style;
    CPTextLine * textLine;
}

@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic) struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; }*highlightedStyle;
@property (nonatomic) struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; }*style;

+ (bool)reconstructHighlightFor:(id)arg1;

- (struct CGColor { }*)color;
- (void)highlight;
- (struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; }*)highlightedStyle;
- (id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(struct CGColor { }*)arg3;
- (void)setHighlightedStyle:(struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; }*)arg1;
- (void)setStyle:(struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; }*)arg1;
- (struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; struct CGPDFObject {} *x12; struct CGPDFObject {} *x13; struct CGColor {} *x14; struct CPPDFStyle {} *x15; }*)style;

@end
