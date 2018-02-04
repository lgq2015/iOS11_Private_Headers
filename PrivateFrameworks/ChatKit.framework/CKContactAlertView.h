/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKContactAlertView : UIView {
    NSString * _contactDescription;
    UIImageView * _contactImageView;
    UILabel * _contactLabel;
    UIImage * _image;
}

@property (nonatomic, retain) NSString *contactDescription;
@property (nonatomic, retain) UIImageView *contactImageView;
@property (nonatomic, retain) UILabel *contactLabel;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)contactDescription;
- (id)contactImageView;
- (id)contactLabel;
- (void)dealloc;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContactDescription:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setContactLabel:(id)arg1;
- (void)setImage:(id)arg1;

@end
