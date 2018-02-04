/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNamePickerContactCell : PXPeopleNamePickerCell {
    NSArray * _constraintsForHiddenSubtitle;
    NSArray * _constraintsForVisibleSubtitle;
    CNAvatarView * _contactAvatarView;
    UIView * _labelsContainer;
    UILabel * _subtitleLabel;
}

@property (nonatomic, retain) NSArray *constraintsForHiddenSubtitle;
@property (nonatomic, retain) NSArray *constraintsForVisibleSubtitle;
@property (nonatomic, readonly) CNAvatarView *contactAvatarView;
@property (nonatomic) UIView *labelsContainer;
@property (nonatomic, readonly) UILabel *subtitleLabel;

- (void).cxx_destruct;
- (id)constraintsForHiddenSubtitle;
- (id)constraintsForVisibleSubtitle;
- (id)contactAvatarView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelsContainer;
- (void)setConstraintsForHiddenSubtitle:(id)arg1;
- (void)setConstraintsForVisibleSubtitle:(id)arg1;
- (void)setLabelsContainer:(id)arg1;
- (id)subtitleLabel;
- (void)updateConstraints;

@end
