/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSSetTvSubscriptionsClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, retain) SAUTSTvSubscriptionsClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setTvSubscriptionsClientState;
+ (id)setTvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientState;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setClientState:(id)arg1;

@end
