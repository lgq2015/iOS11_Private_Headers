/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioPickerSource : NSObject <NSCopying> {
    UIImage * _icon;
    NSString * _title;
    UIViewController<MSCLAudioPickerSourceViewController> * _viewController;
}

@property (nonatomic, copy) UIImage *icon;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIViewController<MSCLAudioPickerSourceViewController> *viewController;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)title;
- (id)viewController;

@end
