/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate> {
    UIImageView * _checkmarkView;
    <CKSharedContentsCollectionViewCellDelegate> * _delegate;
    bool  _editing;
    UIImage * _previewImage;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) UIImageView *checkmarkView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSharedContentsCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *previewImage;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)checkmarkView;
- (void)copy:(id)arg1;
- (id)delegate;
- (void)delete:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (void)layoutSubviews;
- (void)more:(id)arg1;
- (id)previewImage;
- (void)saveAttachment:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setupTapGestureRecognizer;
- (id)tapGestureRecognizer;
- (void)toggleCheckmarkViewWithEnabled:(bool)arg1;

@end
