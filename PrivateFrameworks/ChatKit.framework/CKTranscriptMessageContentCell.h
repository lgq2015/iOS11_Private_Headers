/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell {
    long long  _animationPauseReasons;
    UILabel * _drawerLabel;
    NSAttributedString * _drawerText;
    bool  _drawerTextChanged;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawerTextSize;
    bool  _drawerWasVisible;
    struct CGSize { 
        double width; 
        double height; 
    }  _messageDisplayViewRequestedSize;
}

@property (nonatomic) long long animationPauseReasons;
@property (nonatomic, retain) UILabel *drawerLabel;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawerLabelFrame;
@property (nonatomic, copy) NSAttributedString *drawerText;
@property (nonatomic) bool drawerTextChanged;
@property (nonatomic) struct CGSize { double x1; double x2; } drawerTextSize;
@property (nonatomic) bool drawerWasVisible;
@property (readonly) UIView *messageDisplayView;
@property (nonatomic) struct CGSize { double x1; double x2; } messageDisplayViewRequestedSize;

- (void).cxx_destruct;
- (long long)animationPauseReasons;
- (void)configureForChatItem:(id)arg1;
- (id)drawerLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawerLabelFrame;
- (id)drawerText;
- (bool)drawerTextChanged;
- (struct CGSize { double x1; double x2; })drawerTextSize;
- (bool)drawerWasVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (id)messageDisplayView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })messageDisplayViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })messageDisplayViewRequestedSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setAnimationPauseReasons:(long long)arg1;
- (void)setDrawerLabel:(id)arg1;
- (void)setDrawerText:(id)arg1;
- (void)setDrawerTextChanged:(bool)arg1;
- (void)setDrawerTextSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDrawerWasVisible:(bool)arg1;
- (void)setMessageDisplayViewRequestedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)willLayoutDrawerLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;

@end
