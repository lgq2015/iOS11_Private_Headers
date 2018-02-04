/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTableCell : CPChunk <CPDisposable> {
    struct CGColor { } * backgroundColor;
    unsigned int  backgroundGraphicCount;
    id * backgroundGraphics;
    /* Warning: unhandled struct encoding: '{?={CGRect={CGPoint=dd}{CGSize=dd}}^{CGColor}I^@}' */ struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGColor {} *x2; unsigned int x3; id *x4; } * borders;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cellBounds;
    struct { 
        long long location; 
        long long length; 
    }  columnSpan;
    struct { 
        long long location; 
        long long length; 
    }  rowSpan;
}

@property (nonatomic, readonly) unsigned int backgroundGraphicCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cellBounds;
@property (nonatomic) struct { long long x1; long long x2; } columnSpan;
@property (nonatomic) struct { long long x1; long long x2; } rowSpan;

- (struct CGColor { }*)backgroundColor;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (unsigned int)backgroundGraphicCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfBorder:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cellBounds;
- (struct CGColor { }*)colorOfBorder:(int)arg1;
- (struct { long long x1; long long x2; })columnSpan;
- (long long)compareCellOrdinal:(id)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (unsigned int)graphicCountOfBorder:(int)arg1;
- (id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned int)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { long long x1; long long x2; })rowSpan;
- (void)setBackgroundGraphics:(id)arg1;
- (void)setBorder:(int)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 graphics:(id)arg3;
- (void)setColumnSpan:(struct { long long x1; long long x2; })arg1;
- (void)setRowSpan:(struct { long long x1; long long x2; })arg1;

@end
