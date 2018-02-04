/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKObject : NSObject <NSSecureCoding, _DKProtobufConverting> {
    NSUUID * _UUID;
    _DKSource * _source;
}

@property (retain) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) _DKSource *source;
@property (readonly) Class superclass;

+ (id)entityName;
+ (id)fetchObjectWithUUID:(id)arg1 context:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (bool)boolValue;
- (bool)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)source;
- (id)stringValue;
- (id)toPBCodable;
- (long long)typeCode;

@end
