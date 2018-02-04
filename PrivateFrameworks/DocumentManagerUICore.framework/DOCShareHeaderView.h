/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCShareHeaderView : UIView {
    UIButton * _addTagButton;
    NSArray * _addTagButtonIsHiddenConstraints;
    NSArray * _addTagButtonIsNextToProviderNameConstraints;
    NSArray * _addTagButtonIsNextToTagsConstraints;
    UILabel * _displayNameLabel;
    NSArray * _hasTagsConstraints;
    NSArray * _noTagsConstraints;
    UILabel * _providerNameLabel;
    NSArray * _tags;
    DOCTagsLineView * _tagsView;
    NSLayoutConstraint * _thumbnailHeightConstraint;
    DOCStackedThumbnailView * _thumbnailView;
    NSLayoutConstraint * _thumbnailWidthConstraint;
}

@property (nonatomic, readonly) UIButton *addTagButton;
@property (nonatomic, readonly) NSArray *addTagButtonIsHiddenConstraints;
@property (nonatomic, readonly) NSArray *addTagButtonIsNextToProviderNameConstraints;
@property (nonatomic, readonly) NSArray *addTagButtonIsNextToTagsConstraints;
@property (nonatomic) <DOCTagViewDelegate> *delegate;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) UILabel *displayNameLabel;
@property (nonatomic, readonly) NSArray *hasTagsConstraints;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) NSArray *noTagsConstraints;
@property (nonatomic, retain) NSString *providerName;
@property (nonatomic, readonly) UILabel *providerNameLabel;
@property (nonatomic) bool showAddTagButton;
@property (nonatomic, retain) NSArray *tags;
@property (nonatomic, readonly) DOCTagsLineView *tagsView;
@property (nonatomic, readonly) NSLayoutConstraint *thumbnailHeightConstraint;
@property (nonatomic, readonly) DOCStackedThumbnailView *thumbnailView;
@property (nonatomic, readonly) NSLayoutConstraint *thumbnailWidthConstraint;

- (void).cxx_destruct;
- (id)addTagButton;
- (id)addTagButtonIsHiddenConstraints;
- (id)addTagButtonIsNextToProviderNameConstraints;
- (id)addTagButtonIsNextToTagsConstraints;
- (id)delegate;
- (id)displayName;
- (id)displayNameLabel;
- (id)hasTagsConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (id)noTagsConstraints;
- (id)providerName;
- (id)providerNameLabel;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setShowAddTagButton:(bool)arg1;
- (void)setTags:(id)arg1;
- (bool)showAddTagButton;
- (id)tags;
- (id)tagsView;
- (id)thumbnailHeightConstraint;
- (id)thumbnailView;
- (id)thumbnailWidthConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateThumbnailSize;

@end
