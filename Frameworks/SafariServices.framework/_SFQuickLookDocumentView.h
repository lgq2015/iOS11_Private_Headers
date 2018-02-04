/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFQuickLookDocumentView : UIScrollView <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {
    NSArray * _actionButtons;
    UIStackView * _actionButtonsView;
    UIView * _contentView;
    _SFQuickLookDocumentInfoView * _documentInfoView;
    NSLayoutConstraint * _documentInfoViewBottomAnchorConstraint;
    <_SFQuickLookDocumentViewDelegate> * _quickLookDocumentViewDelegate;
    NSLayoutConstraint * _topContentInsetConstraint;
    UIView * _wrapperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <_SFQuickLookDocumentViewDelegate> *quickLookDocumentViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_api_dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)_configureOrientationBasedConstraints:(long long)arg1;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_setUpLayoutConstraints;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForButtonAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)quickLookDocumentViewDelegate;
- (void)setQuickLookDocumentViewDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateActionTitles:(id)arg1;
- (void)updateDocumentFileName:(id)arg1;
- (void)updateDocumentFileSize:(id)arg1;
- (void)updateDocumentFileType:(id)arg1;
- (void)updateDocumentIcon:(id)arg1;
- (void)updateTopContentInset:(double)arg1;

@end
