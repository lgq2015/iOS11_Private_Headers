/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductAdditionalMetadataViewController : UIViewController <MusicProductDescriptionTableViewCellDelegate, MusicProductMetadataTableViewCellDelegate, MusicTableViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSIndexSet * _allowedMetadataItems;
    UIColor * _customSelectionTintColor;
    UIColor * _defaultSelectionTintColor;
    <MusicProductAdditionalMetadataViewControllerDelegate> * _delegate;
    struct { 
        unsigned int didSelectAddSongsButton : 1; 
        unsigned int didUpdateProductDescription : 1; 
        unsigned int didUpdatePublicSwitchState : 1; 
        unsigned int didUpdateVisibleSwitchState : 1; 
        unsigned int didFinishContentHeightAnimation : 1; 
        unsigned int willBeginContentHeightAnimation : 1; 
        unsigned int shouldDeferContentHeightAnimationUpdates : 1; 
    }  _delegateRespondsToSelector;
    MusicMediaDetailTintInformation * _detailTintInformation;
    NSMutableIndexSet * _metadataItems;
    MusicProductDescription * _productDescription;
    long long  _productDescriptionMaximumLengthForTextInput;
    MusicProductDescriptionTableViewCell * _productDescriptionTableViewCell;
    long long  _productDescriptionTextStyle;
    NSString * _publicSwitchDescription;
    bool  _publicSwitchOn;
    MusicTableView * _tableView;
    bool  _trailingSeparatorInsetFollowsLayoutInsets;
    NSString * _visibleSwitchDescription;
    bool  _visibleSwitchOn;
}

@property (nonatomic, copy) NSIndexSet *allowedMetadataItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicProductAdditionalMetadataViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (nonatomic, readonly) double effectiveContentHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MusicProductDescription *productDescription;
@property (nonatomic) long long productDescriptionMaximumLengthForTextInput;
@property (nonatomic) long long productDescriptionTextStyle;
@property (nonatomic, copy) NSString *publicSwitchDescription;
@property (getter=isPublicSwitchOn, nonatomic) bool publicSwitchOn;
@property (readonly) Class superclass;
@property (nonatomic) bool trailingSeparatorInsetFollowsLayoutInsets;
@property (nonatomic, copy) NSString *visibleSwitchDescription;
@property (getter=isVisibleSwitchOn, nonatomic) bool visibleSwitchOn;

- (void).cxx_destruct;
- (void)_didFinishContentHeightAnimation;
- (void)_didSelectAddSongsButton;
- (void)_handlePreferredContentSizeCategoryDidChangeNotification:(id)arg1;
- (long long)_metadataItemForRowAtIndexPath:(id)arg1;
- (id)_productDescriptionTableViewCell;
- (id)_publicSwitchCell;
- (void)_reloadTableViewRowHeights;
- (long long)_rowIndexForMetadataItem:(long long)arg1;
- (bool)_shouldDeferContentHeightAnimationUpdates;
- (void)_updateVisibleMetadataItems;
- (void)_willBeginContentHeightAnimation;
- (id)allowedMetadataItems;
- (void)dealloc;
- (id)delegate;
- (id)detailTintInformation;
- (double)effectiveContentHeight;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isPublicSwitchOn;
- (bool)isVisibleSwitchOn;
- (id)productDescription;
- (void)productDescriptionDidChangeForProductDescriptionTableViewCell:(id)arg1;
- (long long)productDescriptionMaximumLengthForTextInput;
- (long long)productDescriptionTextStyle;
- (id)publicSwitchDescription;
- (void)setAllowedMetadataItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setProductDescription:(id)arg1;
- (void)setProductDescriptionMaximumLengthForTextInput:(long long)arg1;
- (void)setProductDescriptionTextStyle:(long long)arg1;
- (void)setPublicSwitchDescription:(id)arg1;
- (void)setPublicSwitchOn:(bool)arg1;
- (void)setTrailingSeparatorInsetFollowsLayoutInsets:(bool)arg1;
- (void)setVisibleSwitchDescription:(id)arg1;
- (void)setVisibleSwitchOn:(bool)arg1;
- (void)switchDidChangeStateInProductMetadataTableViewCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)trailingSeparatorInsetFollowsLayoutInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleSwitchDescription;

@end
