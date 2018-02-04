/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSharedAssetCollectionViewCell : UICollectionViewCell {
    NSString * _name;
    UIView * _previewTitleContainerView;
    UILabel * _previewTitleLabel;
    UIView * _previewView;
    NSString * _url;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UIView *previewTitleContainerView;
@property (nonatomic, retain) UILabel *previewTitleLabel;
@property (nonatomic, retain) UIView *previewView;
@property (nonatomic, retain) NSString *url;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)formattedTitleFromPreviewTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)name;
- (id)previewTitleContainerView;
- (id)previewTitleLabel;
- (id)previewView;
- (void)setName:(id)arg1;
- (void)setPreviewTitleContainerView:(id)arg1;
- (void)setPreviewTitleLabel:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
