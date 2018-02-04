/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPGetNowPlayingQueueDetailsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *nextItems;
@property (nonatomic, copy) NSArray *previousItems;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getNowPlayingQueueDetailsResponse;
+ (id)getNowPlayingQueueDetailsResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nextItems;
- (id)previousItems;
- (bool)requiresResponse;
- (void)setNextItems:(id)arg1;
- (void)setPreviousItems:(id)arg1;

@end
