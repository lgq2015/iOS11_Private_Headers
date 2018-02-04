/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoListContentUnavailableView : UIView {
    NSArray * _constraints;
    UILabel * _messageLabel1;
    UILabel * _messageLabel2;
    bool  _needsUpdateConstraints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _safeAreaLayoutGuideFrameRect;
}

@property (setter=_setConstraints:, nonatomic, copy) NSArray *constraints;
@property (nonatomic, retain) UILabel *messageLabel1;
@property (nonatomic, retain) UILabel *messageLabel2;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeAreaLayoutGuideFrameRect;

- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (id)_messageLabel;
- (void)_setConstraints:(id)arg1;
- (void)_setMessageText:(id)arg1 toLabel:(id)arg2;
- (void)_updateConstraintsIfNeeded;
- (id)constraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageLabel1;
- (id)messageLabel2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeAreaLayoutGuideFrameRect;
- (void)setMessageLabel1:(id)arg1;
- (void)setMessageLabel2:(id)arg1;
- (void)setSafeAreaLayoutGuideFrameRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
