/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelPlaybackContext : MPPlaybackContext {
    NSDictionary * _assetStoreFronts;
    NSDictionary * _endTimeModifications;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPModelRequest * _request;
    MPIdentifierSet * _startItemIdentifiers;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, copy) NSDictionary *assetStoreFronts;
@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic, copy) MPModelRequest *request;
@property (nonatomic, copy) MPIdentifierSet *startItemIdentifiers;
@property (nonatomic, copy) NSDictionary *startTimeModifications;

+ (id)defaultRequestEnvironment;
+ (Class)queueFeederClass;
+ (id)requiredPropertiesForStaticMediaClips;

- (void).cxx_destruct;
- (id)assetStoreFronts;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimeModifications;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)playbackRequestEnvironment;
- (id)request;
- (void)setAssetStoreFronts:(id)arg1;
- (void)setEndTimeModifications:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStartItemIdentifiers:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (id)startItemIdentifiers;
- (id)startTimeModifications;

@end
