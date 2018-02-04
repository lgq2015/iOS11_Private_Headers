/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDKeyValueJournalEntry : HDJournalEntry {
    long long  _category;
    NSString * _domain;
    NSString * _key;
    NSDate * _modificationDate;
    long long  _provenance;
    long long  _updatePolicy;
    <NSSecureCoding> * _value;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly) long long updatePolicy;
@property (nonatomic, readonly) <NSSecureCoding> *value;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)category;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 modificationDate:(id)arg7;
- (id)key;
- (id)modificationDate;
- (long long)provenance;
- (long long)updatePolicy;
- (id)value;

@end