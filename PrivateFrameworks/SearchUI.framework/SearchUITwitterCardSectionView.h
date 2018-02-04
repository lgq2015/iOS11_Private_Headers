/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate> {
    UIView * _pictureView;
}

@property (retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIView *pictureView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (id)initWithCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)pictureView;
- (void)setPictureView:(id)arg1;
- (id)setupContentView;

@end
