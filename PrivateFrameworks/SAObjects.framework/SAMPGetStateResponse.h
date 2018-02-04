/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hashedGroupID;
@property (nonatomic, retain) SAMPMediaItem *listeningToItem;
@property (nonatomic, copy) NSNumber *listeningToMusicApplication;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *source;
@property (nonatomic) int state;
@property (readonly) Class superclass;

+ (id)getStateResponse;
+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedGroupID;
- (id)listeningToItem;
- (id)listeningToMusicApplication;
- (bool)requiresResponse;
- (void)setHashedGroupID:(id)arg1;
- (void)setListeningToItem:(id)arg1;
- (void)setListeningToMusicApplication:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setState:(int)arg1;
- (id)source;
- (int)state;

@end
