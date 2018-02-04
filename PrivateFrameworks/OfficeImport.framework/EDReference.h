/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReference : NSObject <NSCopying> {
    struct EDAreaReference { 
        int firstRow; 
        int firstColumn; 
        int lastRow; 
        int lastColumn; 
    }  mAreaReference;
}

+ (id)reference;
+ (id)referenceWithAreaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg1;
+ (id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
+ (id)referenceWithReference:(id)arg1;

- (struct EDAreaReference { int x1; int x2; int x3; int x4; })areaReference;
- (bool)containsRow:(int)arg1 column:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)description;
- (int)firstColumn;
- (int)firstRow;
- (bool)fullyAdjacentToReference:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAreaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg1;
- (id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (id)initWithReference:(id)arg1;
- (bool)isCellReference;
- (bool)isColumnReference;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReference:(id)arg1;
- (bool)isRowReference;
- (bool)isValidAreaReference;
- (bool)isValidCellReference;
- (int)lastColumn;
- (int)lastRow;
- (void)setFirstColumn:(int)arg1;
- (void)setFirstRow:(int)arg1;
- (void)setLastColumn:(int)arg1;
- (void)setLastRow:(int)arg1;
- (void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (void)unionWithReference:(id)arg1;
- (void)unionWithRow:(int)arg1 column:(int)arg2;

@end
