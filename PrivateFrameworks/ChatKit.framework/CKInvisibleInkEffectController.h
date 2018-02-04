/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate> {
    UIView * _borrowedEffectViewSnapshot;
    CKInvisibleInkEffectView * _effectView;
    bool  _effectViewNeedsReset;
    bool  _enabled;
    UIView<CKInvisibleInkEffectHostView> * _hostView;
    bool  _paused;
    NSTimer * _resumeTimer;
    bool  _suspended;
}

@property (nonatomic, retain) UIView *borrowedEffectViewSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKInvisibleInkEffectView *effectView;
@property (nonatomic) bool effectViewNeedsReset;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView<CKInvisibleInkEffectHostView> *hostView;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) NSTimer *resumeTimer;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (void)_updateBorrowedEffectViewSnapshot;
- (id)borrowEffectView;
- (id)borrowedEffectViewSnapshot;
- (void)dealloc;
- (id)effectView;
- (bool)effectViewNeedsReset;
- (id)hostView;
- (void)hostViewDidLayoutSubviews;
- (void)hostViewDidUpdateSnapshot:(id)arg1;
- (id)initWithHostView:(id)arg1;
- (void)invisibleInkEffectViewWasUncovered:(id)arg1;
- (bool)isEnabled;
- (bool)isPaused;
- (bool)isSuspended;
- (void)prepareForDisplay;
- (id)resumeTimer;
- (void)resumeTimerFired:(id)arg1;
- (void)returnBorrowedEffectView;
- (void)setBorrowedEffectViewSnapshot:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setEffectViewNeedsReset:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHostView:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setResumeTimer:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)suspendForTimeInterval:(double)arg1;
- (void)updateBorrowedEffectViewSnapshot;

@end
