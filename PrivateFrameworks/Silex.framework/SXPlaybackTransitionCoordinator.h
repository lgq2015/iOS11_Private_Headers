/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPlaybackTransitionCoordinator : NSObject {
    SXPlaybackTransitionContext * _context;
    <SXPlaybackTransitionCoordinatorDelegate> * _delegate;
}

@property (nonatomic, readonly) SXPlaybackTransitionContext *context;
@property (nonatomic) <SXPlaybackTransitionCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)addObserversToCoordinator:(id)arg1;
- (id)context;
- (id)delegate;
- (id)initWithTransitionContext:(id)arg1;
- (void)removeObserversFromCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)transitionAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (double)translationForTransitionDirection:(unsigned long long)arg1;

@end
