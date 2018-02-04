/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPersonTableViewCell : UITableViewCell {
    UIImageView * __personIconImageView;
    UIImage * __personMonogramImage;
    NSString * _personFirstName;
    UIImage * _personIcon;
    NSString * _personLastName;
}

@property (setter=_setPersonIconImageView:, nonatomic, retain) UIImageView *_personIconImageView;
@property (setter=_setPersonMonogramImage:, nonatomic, retain) UIImage *_personMonogramImage;
@property (nonatomic, copy) NSString *personFirstName;
@property (nonatomic, retain) UIImage *personIcon;
@property (nonatomic, copy) NSString *personLastName;

- (id)_personIconImageView;
- (id)_personMonogramImage;
- (void)_setPersonIconImageView:(id)arg1;
- (void)_setPersonMonogramImage:(id)arg1;
- (void)_updatePersonIconImageView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)personFirstName;
- (id)personIcon;
- (id)personLastName;
- (void)setPersonFirstName:(id)arg1;
- (void)setPersonIcon:(id)arg1;
- (void)setPersonLastName:(id)arg1;

@end
