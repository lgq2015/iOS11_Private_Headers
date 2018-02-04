/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPlaybackTransitionContext : NSObject {
    UIView * _containerView;
    unsigned long long  _direction;
    SXPlaybackCoordinator * _fromPlaybackCoordinator;
    SXVideoView * _fromVideoView;
    SXPlaybackCoordinator * _toPlaybackCoordinator;
    SXVideoView * _toVideoView;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) SXPlaybackCoordinator *fromPlaybackCoordinator;
@property (nonatomic, readonly) SXVideoView *fromVideoView;
@property (nonatomic, readonly) SXPlaybackCoordinator *toPlaybackCoordinator;
@property (nonatomic, readonly) SXVideoView *toVideoView;

- (void).cxx_destruct;
- (id)containerView;
- (unsigned long long)direction;
- (id)fromPlaybackCoordinator;
- (id)fromVideoView;
- (id)initWithContainerView:(id)arg1 fromVideoView:(id)arg2 toVideoView:(id)arg3 fromPlaybackCoordinator:(id)arg4 toPlaybackCoordinator:(id)arg5 direction:(unsigned long long)arg6;
- (id)toPlaybackCoordinator;
- (id)toVideoView;

@end
