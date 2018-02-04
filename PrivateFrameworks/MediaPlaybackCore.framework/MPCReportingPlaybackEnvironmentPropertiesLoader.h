/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingPlaybackEnvironmentPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading> {
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getHasSubscriptionPlaybackCapabilityForUserIdentity:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPlaybackRequestEnvironment:(id)arg1;
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(id /* block */)arg1;
- (id)playbackRequestEnvironment;

@end
