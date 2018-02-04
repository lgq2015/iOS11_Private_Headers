/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualNotification : NSObject {
    long long  _animationCount;
    long long  _appearanceState;
    struct PXContextualNotificationVisualState { 
        bool onscreen; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } containingFrame; 
        double verticalOffset; 
        double alpha; 
    }  _appliedState;
    PXContextualNotificationCenter * _contextualNotificationCenter;
    <PXContextualNotificationDelegate> * _delegate;
    struct { 
        bool containingFrameInCoordinateSpace; 
        bool preferredContainerView; 
        bool preferredAnimation; 
        bool shouldPassthroughPointInCoordinateSpace; 
        bool wasTapped; 
        bool wasDiscarded; 
        bool didDisappear; 
    }  _delegateRespondsTo;
    UIImage * _image;
    AVAsset * _loopingVideoAsset;
    AVVideoComposition * _loopingVideoComposition;
    NSString * _message;
    struct PXContextualNotificationVisualState { 
        bool onscreen; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } containingFrame; 
        double verticalOffset; 
        double alpha; 
    }  _nextState;
    double  _panInitialVerticalOffset;
    NSValue * _releaseVelocity;
    long long  _style;
    NSString * _title;
    UIImage * _titleIcon;
    id  _userInfo;
    PXContextualNotificationView * _view;
    UIWindow * _window;
}

@property (nonatomic) long long animationCount;
@property (nonatomic) long long appearanceState;
@property (nonatomic) struct PXContextualNotificationVisualState { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; double x4; } appliedState;
@property (nonatomic) PXContextualNotificationCenter *contextualNotificationCenter;
@property (nonatomic) <PXContextualNotificationDelegate> *delegate;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) AVAsset *loopingVideoAsset;
@property (nonatomic, copy) AVVideoComposition *loopingVideoComposition;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) struct PXContextualNotificationVisualState { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; double x4; } nextState;
@property (nonatomic) double panInitialVerticalOffset;
@property (nonatomic, readonly) long long preferredAnimation;
@property (nonatomic, readonly) UIView *preferredContainerView;
@property (nonatomic, retain) NSValue *releaseVelocity;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIImage *titleIcon;
@property (nonatomic, retain) id userInfo;
@property (nonatomic, retain) PXContextualNotificationView *view;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)_invalidate;
- (long long)animationCount;
- (long long)appearanceState;
- (struct PXContextualNotificationVisualState { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; double x4; })appliedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containingFrameInContainerView:(id)arg1;
- (id)contextualNotificationCenter;
- (id)delegate;
- (void)dismiss;
- (void)handleDiscard;
- (void)handleTap:(id)arg1;
- (id)image;
- (id)init;
- (void)invalidateLayout;
- (id)loopingVideoAsset;
- (id)loopingVideoComposition;
- (id)message;
- (struct PXContextualNotificationVisualState { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; double x4; })nextState;
- (double)panInitialVerticalOffset;
- (long long)preferredAnimation;
- (id)preferredContainerView;
- (void)present;
- (id)releaseVelocity;
- (void)setAnimationCount:(long long)arg1;
- (void)setAppearanceState:(long long)arg1;
- (void)setAppliedState:(struct PXContextualNotificationVisualState { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; double x4; })arg1;
- (void)setContextualNotificationCenter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLoopingVideoAsset:(id)arg1;
- (void)setLoopingVideoComposition:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNextState:(struct PXContextualNotificationVisualState { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; double x4; })arg1;
- (void)setPanInitialVerticalOffset:(double)arg1;
- (void)setReleaseVelocity:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleIcon:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setView:(id)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldPassthroughPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (long long)style;
- (id)title;
- (id)titleIcon;
- (id)userInfo;
- (id)view;
- (id)window;

@end
