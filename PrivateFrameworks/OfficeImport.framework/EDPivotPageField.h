/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotPageField : NSObject {
    NSString * mCap;
    unsigned long long  mFieldId;
    NSString * mName;
}

+ (id)pivotPageField;

- (id)cap;
- (void)dealloc;
- (id)description;
- (unsigned long long)fieldId;
- (id)init;
- (id)name;
- (void)setCap:(id)arg1;
- (void)setFieldId:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
