/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface NotesScrollView : UIScrollView {
    NSLayoutConstraint * _contentHeightConstraint;
    NSLayoutConstraint * _contentWidthConstraint;
    <NotesTextureScrolling> * _textureScrollingDelegate;
}

@property (nonatomic, retain) NSLayoutConstraint *contentHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentWidthConstraint;
@property <NotesTextureScrolling> *textureScrollingDelegate;

- (void).cxx_destruct;
- (void)commonInit;
- (id)contentHeightConstraint;
- (id)contentWidthConstraint;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentHeightConstraint:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentWidthConstraint:(id)arg1;
- (void)setTextureScrollingDelegate:(id)arg1;
- (id)textureScrollingDelegate;

@end
