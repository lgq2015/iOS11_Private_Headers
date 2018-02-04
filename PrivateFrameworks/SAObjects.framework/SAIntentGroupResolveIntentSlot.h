/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand

@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSString *intentSlotKeyPath;
@property (nonatomic, copy) NSNumber *intentSlotValueIndex;

+ (id)resolveIntentSlot;
+ (id)resolveIntentSlotWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)intentSlotKeyPath;
- (id)intentSlotValueIndex;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setIntent:(id)arg1;
- (void)setIntentSlotKeyPath:(id)arg1;
- (void)setIntentSlotValueIndex:(id)arg1;

@end
