/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNTracedLog : NSObject {
    NSDictionary * _customProperties;
    NSString * _domain;
    NSString * _domainScope;
    NSString * _domainVersion;
    NSString * _message;
    long long  _result;
    NSString * _signature;
    NSString * _signature2;
    NSString * _signature3;
    bool  _summarize;
    NSString * _uuid;
    NSString * _value;
    NSString * _value2;
    NSString * _value3;
}

@property (copy) NSDictionary *customProperties;
@property (readonly, copy) NSString *domain;
@property (copy) NSString *domainScope;
@property (copy) NSString *domainVersion;
@property (readonly, copy) NSString *message;
@property long long result;
@property (copy) NSString *signature;
@property (copy) NSString *signature2;
@property (copy) NSString *signature3;
@property bool summarize;
@property (copy) NSString *uuid;
@property (copy) NSString *value;
@property (copy) NSString *value2;
@property (copy) NSString *value3;

+ (id)formatIntegerByRoundingForPrivacy:(long long)arg1;
+ (id)formatTimeIntervalByRoundingForPrivacy:(double)arg1;
+ (id)logWithDomain:(id)arg1;
+ (long long)roundNumber:(long long)arg1 usingSignificantDigits:(unsigned long long)arg2;
+ (bool)shouldLogGivenSamplePercentage:(float)arg1;

- (void).cxx_destruct;
- (id)customProperties;
- (id)domain;
- (id)domainScope;
- (id)domainVersion;
- (void)enumerateCustomKeysAndValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateStandardKeysAndValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateStandardizedKeysAndValuesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1 message:(id)arg2;
- (id)message;
- (long long)result;
- (id)resultString;
- (void)sendTrace;
- (void)sendValue:(id)arg1 forKey:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)setCustomProperties:(id)arg1;
- (void)setDomainScope:(id)arg1;
- (void)setDomainVersion:(id)arg1;
- (void)setResult:(long long)arg1;
- (void)setSignature2:(id)arg1;
- (void)setSignature3:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSummarize:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setValue2:(id)arg1;
- (void)setValue3:(id)arg1;
- (void)setValue:(id)arg1;
- (id)signature;
- (id)signature2;
- (id)signature3;
- (bool)summarize;
- (id)uuid;
- (id)value;
- (id)value2;
- (id)value3;

@end
