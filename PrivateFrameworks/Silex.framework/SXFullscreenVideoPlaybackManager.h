/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullscreenVideoPlaybackManager : NSObject {
    NSHashTable * _candidates;
    bool  _layoutInProgress;
    bool  _transitionInProgress;
}

@property (nonatomic, readonly) NSHashTable *candidates;
@property (nonatomic) bool layoutInProgress;
@property (nonatomic) bool transitionInProgress;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1;
- (id)candidates;
- (void)didLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)enterFullscreenIfNeeded;
- (id)init;
- (bool)layoutInProgress;
- (void)removeCandidate:(id)arg1;
- (void)setLayoutInProgress:(bool)arg1;
- (void)setTransitionInProgress:(bool)arg1;
- (bool)transitionInProgress;
- (void)willLayoutAndTransitionToSize:(struct CGSize { double x1; double x2; })arg1;

@end
