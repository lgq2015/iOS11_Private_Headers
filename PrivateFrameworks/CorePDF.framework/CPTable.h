/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
    struct CGColor { } * backgroundColor;
    unsigned int  backgroundGraphicCount;
    id * backgroundGraphics;
    unsigned int  columnCount;
    double * columnX;
    bool  disposed;
    unsigned int  rowCount;
    double * rowY;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  tableBounds;
    unsigned int  usedGraphicCount;
}

@property (nonatomic, readonly) unsigned int backgroundGraphicCount;
@property (nonatomic) unsigned int columnCount;
@property (nonatomic, readonly) double*columnX;
@property (nonatomic) unsigned int rowCount;
@property (nonatomic, readonly) double*rowY;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } tableBounds;

- (struct CGColor { }*)backgroundColor;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (unsigned int)backgroundGraphicCount;
- (unsigned int)columnCount;
- (double*)columnX;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)incrementUsedGraphicCount;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned int)rowCount;
- (double*)rowY;
- (void)setBackgroundGraphics:(id)arg1;
- (void)setColumnCount:(unsigned int)arg1;
- (void)setRowCount:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tableBounds;
- (unsigned int)usedGraphicCount;

@end
