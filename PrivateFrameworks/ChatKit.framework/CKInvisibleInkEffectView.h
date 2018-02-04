/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInvisibleInkEffectView : UIView <CKInvisibleInkEffectCoverageTrackerDelegate> {
    CKInvisibleInkEffectCoverageTracker * _coverageTracker;
    <CKInvisibleInkEffectViewDelegate> * _delegate;
    UIImage * _image;
    bool  _paused;
    bool  _suspended;
}

@property (nonatomic, retain) CKInvisibleInkEffectCoverageTracker *coverageTracker;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKInvisibleInkEffectViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (getter=isPaused, nonatomic) bool paused;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (void)initialize;
+ (double)updateInterval;

- (void).cxx_destruct;
- (id)coverageTracker;
- (id)delegate;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invisibleInkEffectCoverageTrackerDidUncover:(id)arg1;
- (bool)isPaused;
- (bool)isSuspended;
- (void)layoutSubviews;
- (void)reset;
- (void)setCoverageTracker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSuspended:(bool)arg1;

@end
