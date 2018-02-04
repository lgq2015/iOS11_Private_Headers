/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableConditionEngine : NSObject {
    unsigned long long  _conditionCount;
    unsigned long long  _validConditionCount;
}

@property (nonatomic) unsigned long long conditionCount;
@property (nonatomic) unsigned long long validConditionCount;

+ (id)engine;

- (void)addConditionForEqualInteger:(unsigned long long)arg1 withInteger:(unsigned long long)arg2;
- (void)addConditionForEqualString:(id)arg1 withString:(id)arg2;
- (void)addConditionForEvenBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2;
- (void)addConditionForOddBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2;
- (unsigned long long)conditionCount;
- (id)description;
- (unsigned long long)isEvenInteger:(long long)arg1;
- (unsigned long long)isOddInteger:(long long)arg1;
- (bool)isValid;
- (void)setConditionCount:(unsigned long long)arg1;
- (void)setValidConditionCount:(unsigned long long)arg1;
- (unsigned long long)validConditionCount;

@end
