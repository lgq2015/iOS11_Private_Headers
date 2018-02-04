/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCustomFormatCondition : NSObject <NSCopying> {
    int  _conditionType;
    double  _conditionValue;
    TSUCustomFormatData * _data;
}

@property (nonatomic, readonly) int conditionType;
@property (nonatomic, readonly) double conditionValue;
@property (nonatomic, readonly) TSUCustomFormatData *data;

- (void).cxx_destruct;
- (int)conditionType;
- (double)conditionValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
