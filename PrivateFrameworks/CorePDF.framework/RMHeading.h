/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface RMHeading : NSObject {
    struct CGPDFNode { } * _node;
    struct CGPDFPage { } * _page;
    struct { 
        long long location; 
        long long length; 
    }  _textRange;
}

@property (readonly) struct CGPDFPage { }*page;
@property struct { long long x1; long long x2; } textRange;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)initWithNode:(struct CGPDFNode { }*)arg1 onPage:(struct CGPDFPage { }*)arg2;
- (struct CGPDFPage { }*)page;
- (void)setTextRange:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })textRange;

@end
