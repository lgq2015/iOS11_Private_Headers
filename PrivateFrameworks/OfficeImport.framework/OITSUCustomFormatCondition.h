/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCustomFormatCondition : NSObject <NSCopying> {
    int  mConditionType;
    double  mConditionValue;
    OITSUCustomFormatData * mData;
}

@property (nonatomic, readonly) int conditionType;
@property (nonatomic, readonly) double conditionValue;
@property (nonatomic, readonly) OITSUCustomFormatData *data;

- (int)conditionType;
- (double)conditionValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
