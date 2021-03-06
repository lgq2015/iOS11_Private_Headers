/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableRow : NSObject {
    NSMutableArray * mCells;
    float  mHeight;
}

- (id)addCell;
- (id)cellAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellCount;
- (void)dealloc;
- (id)description;
- (void)flipCellsRTL;
- (float)height;
- (id)init;
- (void)setHeight:(float)arg1;

@end
