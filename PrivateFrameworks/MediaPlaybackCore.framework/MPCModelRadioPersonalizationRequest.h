/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <NSCopying> {
    MPSectionedCollection * _radioStationTracks;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithRadioStationTracks:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;

@end
