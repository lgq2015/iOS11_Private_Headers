/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptLabelCell : CKTranscriptCell {
    UILabel * _label;
    bool  _wantsContactImageLayout;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) bool wantsContactImageLayout;

+ (id)label;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)attributedText;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)setAttributedText:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;
- (bool)wantsContactImageLayout;

@end
