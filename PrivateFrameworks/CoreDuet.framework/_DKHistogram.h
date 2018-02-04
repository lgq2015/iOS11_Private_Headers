/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKHistogram : NSObject <NSSecureCoding> {
    NSArray * _deviceIdentifiers;
    NSMutableDictionary * _histogram;
    NSUUID * _identifier;
    NSDateInterval * _interval;
    _DKEventStream * _stream;
}

@property (nonatomic, retain) NSArray *deviceIdentifiers;
@property (nonatomic, retain) NSDictionary *histogram;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSDateInterval *interval;
@property (nonatomic, retain) _DKEventStream *stream;

+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addHistogram:(id)arg1;
- (void)addValue:(id)arg1;
- (id)countDictionary;
- (unsigned long long)countForValue:(id)arg1;
- (id)description;
- (id)deviceIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)histogram;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistogram:(id)arg1;
- (id)initWithManagedObject:(id)arg1;
- (id)initWithValues:(id)arg1;
- (id)insertInManagedObjectContext:(id)arg1;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (void)setDeviceIdentifiers:(id)arg1;
- (void)setHistogram:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterval:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;
- (void)subtractHistogram:(id)arg1;
- (void)subtractValue:(id)arg1;

@end
