/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerQueueRequest : MPModelRequest {
    MPCPlayer * _player;
}

@property (nonatomic, retain) MPCPlayer *player;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;

@end