/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCModelRadioPlaybackQueueStationTracksSection : NSObject <_MPCModelRadioPlaybackQueueSection> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _activeModelGenericAVItems;
    bool  _isSiriInitiated;
    MPPropertySet * _itemProperties;
    ICMutableRadioPlaybackHistory * _playbackHistory;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPSectionedCollection * _trackModels;
    MPSectionedCollection * _tracks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) ICMutableRadioPlaybackHistory *playbackHistory;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) MPSectionedCollection *trackModels;
@property (nonatomic, readonly, copy) MPSectionedCollection *tracks;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)playbackHistory;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)arg1;
- (id)trackModels;
- (id)tracks;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end
