/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleConfirmationSummaryViewController : UIViewController {
    <PXPeopleSummaryDelegate> * _delegate;
    NSLayoutConstraint * _labelSpacingConstraint;
    UILabel * _summaryLabel;
}

@property <PXPeopleSummaryDelegate> *delegate;
@property (retain) NSLayoutConstraint *labelSpacingConstraint;
@property (retain) UILabel *summaryLabel;

- (void).cxx_destruct;
- (void)_updateDynamicTypeSpacing;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)labelSpacingConstraint;
- (void)setDelegate:(id)arg1;
- (void)setLabelSpacingConstraint:(id)arg1;
- (void)setSummaryLabel:(id)arg1;
- (id)summaryLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
