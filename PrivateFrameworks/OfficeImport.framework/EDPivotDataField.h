/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotDataField : NSObject {
    long long  mBaseField;
    unsigned long long  mBaseItem;
    unsigned long long  mFieldId;
    int  mFormat;
    NSString * mName;
    unsigned long long  mNumFmtId;
}

+ (id)pivotDataField;

- (long long)baseField;
- (unsigned long long)baseItem;
- (void)dealloc;
- (id)description;
- (unsigned long long)fieldId;
- (id)init;
- (id)name;
- (unsigned long long)numFmtId;
- (void)setBaseField:(long long)arg1;
- (void)setBaseItem:(unsigned long long)arg1;
- (void)setFieldId:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setNumFmtId:(unsigned long long)arg1;
- (void)setShowDataAs:(int)arg1;
- (int)showDataAs;

@end
