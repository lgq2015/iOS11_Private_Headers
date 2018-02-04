/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginManager : NSObject {
    NSNumber * _activeOriginIdentifier;
    NSNumber * _companionOriginIdentifier;
    NSNumber * _localOriginIdentifier;
    NSOrderedSet * _originIdentifiers;
    NSMutableDictionary * _origins;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NMROrigin *activeOrigin;
@property (nonatomic, readonly) NSArray *availableOrigins;
@property (nonatomic, readonly) NMROrigin *companionOrigin;
@property (nonatomic, readonly) NMROrigin *localOrigin;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_originWithMROriginRef:(void*)arg1;
- (void)_updateActiveOrigin;
- (void)_updateAvailableOrigins;
- (void)_updateLocalOrigin;
- (id)activeOrigin;
- (id)availableOrigins;
- (id)companionOrigin;
- (void)dealloc;
- (id)deltaFromOrigins:(id)arg1;
- (id)init;
- (id)localOrigin;

@end
