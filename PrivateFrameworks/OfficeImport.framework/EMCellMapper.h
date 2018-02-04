/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMCellMapper : CMMapper {
    int  columnSpan;
    double  columnWidth;
    struct EDCellHeader { unsigned int x1; unsigned int x2; } * edCell;
    EDReference * edMergedCellReference;
    bool  firstCellFlag;
    int  firstColumn;
    int  lastColumn;
    int  rowNumber;
    bool  spreadLeftFlag;
}

+ (bool)isCellEmpty:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg1;

- (void).cxx_destruct;
- (void)adjustColumnSpanForGrid:(double*)arg1 columnCount:(unsigned long long)arg2 nextCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg3 withState:(id)arg4;
- (int)columnSpan;
- (double)columnWidth;
- (int)firstColumn;
- (id)initWithEDCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg1 rowInfo:(struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2 parent:(id)arg3 state:(id)arg4;
- (id)initWithParent:(id)arg1;
- (bool)isCellEmpty;
- (bool)isCellMerged;
- (bool)isCellSpreading:(id)arg1;
- (bool)isFirstCell;
- (int)lastColumn;
- (void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(struct EDCellHeader { unsigned int x1; unsigned int x2; }*)arg4;
- (id)mapHyperlink:(id)arg1 at:(id)arg2;
- (void)mapRowColSpansAt:(id)arg1 withState:(id)arg2;
- (void)resetColumnSpan:(int)arg1;
- (void)setFirstCellFlag;
- (void)setFirstColumn:(int)arg1;
- (void)setLastColumn:(int)arg1;

@end
