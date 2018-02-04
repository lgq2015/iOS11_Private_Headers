/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMRowMapper : CMMapper {
    unsigned long long  columnCount;
    double * columnGrid;
    EDRowBlock * mRowBlock;
    struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; } * mRowInfo;
}

+ (void)mapEmptyRowAt:(id)arg1 colspan:(unsigned long long)arg2 height:(double)arg3;

- (void).cxx_destruct;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)cellWithColumnNumber:(unsigned long long)arg1;
- (id)initWithEDRowBlock:(id)arg1 rowInfo:(struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2 parent:(id)arg3;
- (void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned long long)arg2 height:(double)arg3;
- (bool)isColumnHidden:(unsigned long long)arg1;
- (bool)isMergedCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned long long)arg3 lastColumn:(unsigned long long)arg4;

@end
