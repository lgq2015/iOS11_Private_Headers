/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotConditionalFormat : NSObject {
    EDCollection * mPivotAreas;
    unsigned long long  mPriority;
    int  mScope;
    int  mType;
}

+ (id)pivotConditionalFormat;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)pivotAreas;
- (unsigned long long)priority;
- (int)scope;
- (void)setPriority:(unsigned long long)arg1;
- (void)setScope:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
