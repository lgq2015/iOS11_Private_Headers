/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *readingStateId;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) long long updatedGroupIndex;
@property (nonatomic) long long updatedItemIndex;

+ (id)updateReadingState;
+ (id)updateReadingStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)readingStateId;
- (bool)requiresResponse;
- (void)setReadingStateId:(id)arg1;
- (void)setUpdatedGroupIndex:(long long)arg1;
- (void)setUpdatedItemIndex:(long long)arg1;
- (long long)updatedGroupIndex;
- (long long)updatedItemIndex;

@end
