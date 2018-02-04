/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTableRow : NSObject {
    NSMutableArray * mCells;
    unsigned long long  mIndex;
    WDTableRowProperties * mProperties;
    WDTable * mTable;
}

- (id)addCell;
- (id)addCellWithIndex:(unsigned long long)arg1;
- (id)cellAt:(unsigned long long)arg1;
- (unsigned long long)cellCount;
- (id)cellIterator;
- (void)dealloc;
- (id)description;
- (unsigned long long)index;
- (id)initWithTable:(id)arg1 at:(unsigned long long)arg2;
- (id)newCellIterator;
- (id)properties;
- (void)setIndex:(unsigned long long)arg1;
- (id)table;

@end
