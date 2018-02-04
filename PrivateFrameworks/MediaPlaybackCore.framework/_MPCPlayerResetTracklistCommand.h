/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand <MPCPlayerResetTracklistCommand> {
    NSSet * _supportedCustomDataQueueIdentifiers;
    NSSet * _supportedQueueTypes;
    NSDictionary * _supportedSpecializedQueues;
    bool  _supportsSetQueueCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *specializedIntents;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *supportedCustomDataQueueIdentifiers;
@property (nonatomic, retain) NSSet *supportedQueueTypes;
@property (nonatomic, retain) NSDictionary *supportedSpecializedQueues;
@property (nonatomic) bool supportsSetQueueCommand;

- (void).cxx_destruct;
- (id)clear;
- (id)replaceWithPlaybackIntent:(id)arg1;
- (id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;
- (void)setSupportedCustomDataQueueIdentifiers:(id)arg1;
- (void)setSupportedQueueTypes:(id)arg1;
- (void)setSupportedSpecializedQueues:(id)arg1;
- (void)setSupportsSetQueueCommand:(bool)arg1;
- (id)specializedIntents;
- (id)supportedCustomDataQueueIdentifiers;
- (id)supportedQueueTypes;
- (id)supportedSpecializedQueues;
- (bool)supportsSetQueueCommand;

@end
