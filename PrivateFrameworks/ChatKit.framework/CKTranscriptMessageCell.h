/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptMessageCell : CKTranscriptCell {
    UIButton * _failureButton;
    bool  _wantsContactImageLayout;
}

@property (nonatomic) bool failed;
@property (nonatomic, retain) UIButton *failureButton;
@property (nonatomic, readonly) bool failureButtonAdjustsContentAlignmentRect;
@property (nonatomic) bool wantsContactImageLayout;

+ (double)failureButtonWidthPlusSpacing;

- (void).cxx_destruct;
- (id)contactImageView;
- (id)description;
- (bool)failed;
- (id)failureButton;
- (bool)failureButtonAdjustsContentAlignmentRect;
- (void)layoutSubviewsForContents;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setFailed:(bool)arg1;
- (void)setFailureButton:(id)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;
- (bool)wantsContactImageLayout;

@end