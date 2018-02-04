/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRObject : NSObject <CRCoding, CRDataType, CREquatable, CRIdentifiable> {
    NSDictionary * _fields;
    NSUUID * _identity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *fields;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identity;
@property (readonly) Class superclass;

+ (id)CRProperties;
+ (id)keyFromSelector:(SEL)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;

- (void).cxx_destruct;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeWithCRCoder:(id)arg1;
- (id)fields;
- (unsigned long long)hash;
- (id)identity;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 fields:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setFieldKey:(id)arg1 value:(id)arg2;
- (void)setupConstraintsFor:(id)arg1 in:(id)arg2;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
