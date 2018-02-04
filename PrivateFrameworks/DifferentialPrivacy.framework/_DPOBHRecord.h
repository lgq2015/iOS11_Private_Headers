/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPOBHRecord : NSObject <NSSecureCoding, _DPJSONString, _DPStorageMOConversion> {
    double  _creationDate;
    NSString * _key;
    NSManagedObjectID * _objectId;
    long long  _reportVersion;
    bool  _submitted;
}

@property (nonatomic) double creationDate;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSManagedObjectID *objectId;
@property (nonatomic) long long reportVersion;
@property (nonatomic) bool submitted;

+ (id)createRecordFromManagedObject:(id)arg1;
+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 creationDate:(double)arg2 submitted:(bool)arg3 objectId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOBHRecord:(id)arg1;
- (id)jsonString;
- (id)key;
- (id)objectId;
- (long long)reportVersion;
- (void)setCreationDate:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setReportVersion:(long long)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)submitted;

@end
