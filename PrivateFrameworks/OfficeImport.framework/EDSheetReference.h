/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDSheetReference : EDReference {
    unsigned long long  mSheetIndex;
}

+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;

- (id)description;
- (bool)fullyAdjacentToReference:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTableReference:(id)arg1;
- (bool)isSheedIndexValid;
- (unsigned long long)sheetIndex;
- (void)unionWithReference:(id)arg1;

@end
