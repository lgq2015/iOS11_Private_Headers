/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPPrivacyBudgetRecord : NSObject <NSSecureCoding, _DPStorageMOConversion> {
    long long  _balance;
    double  _creationDate;
    NSString * _key;
    double  _lastUpdate;
    NSManagedObjectID * _objectId;
    bool  _submitted;
}

@property (nonatomic) long long balance;
@property (nonatomic) double creationDate;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) double lastUpdate;
@property (nonatomic, retain) NSManagedObjectID *objectId;
@property (nonatomic) bool submitted;

+ (id)createRecordFromManagedObject:(id)arg1;
+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)balance;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 creationDate:(double)arg2 lastUpdate:(double)arg3 balance:(long long)arg4 objectId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPrivacyBudgetRecord:(id)arg1;
- (id)key;
- (double)lastUpdate;
- (id)objectId;
- (void)setBalance:(long long)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setLastUpdate:(double)arg1;
- (void)setObjectId:(id)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)submitted;

@end
