/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchSetGeoClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, retain) SALocalSearchGeoClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setGeoClientState;
+ (id)setGeoClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientState;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientState:(id)arg1;

@end
