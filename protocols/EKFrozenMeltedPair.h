/* made by EzioChiu.
 */

@protocol EKFrozenMeltedPair <NSObject>

@required

+ (Class)frozenClass;
+ (Class)meltedClass;

- (EKChangeSet *)changeSet;
- (EKObject *)existingMeltedObject;
- (struct EKPersistentObject { Class x1; }*)frozenObject;
- (id)initWithObject:(id <EKProtocolObject>)arg1;
- (bool)isCompletelyEqual:(id <EKFrozenMeltedPair>)arg1;
- (bool)isEqual:(id <EKFrozenMeltedPair>)arg1 ignoringProperties:(NSSet *)arg2;
- (bool)isFrozen;
- (bool)isPartialObject;
- (bool)isPropertyUnavailable:(NSString *)arg1;
- (EKObject *)meltedObjectInStore:(EKEventStore *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (NSString *)uniqueIdentifier;
- (id)valueForKey:(NSString *)arg1;

@end
