/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) bool alreadyExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *worldClockId;

+ (id)addCompleted;
+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (bool)alreadyExists;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAlreadyExists:(bool)arg1;
- (void)setWorldClockId:(id)arg1;
- (id)worldClockId;

@end
