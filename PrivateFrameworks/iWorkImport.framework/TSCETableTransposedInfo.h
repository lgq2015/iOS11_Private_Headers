/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCETableTransposedInfo : NSObject {
    unsigned short  _numberOfFooterRows;
    struct TSCERangeCoordinate { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mTopLeft; 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mBottomRight; 
    }  _transposedBodyRange;
}

@property (nonatomic) unsigned short numberOfFooterRows;
@property (nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; } transposedBodyRange;

- (unsigned short)numberOfFooterRows;
- (void)setNumberOfFooterRows:(unsigned short)arg1;
- (void)setTransposedBodyRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })transposedBodyRange;

@end
