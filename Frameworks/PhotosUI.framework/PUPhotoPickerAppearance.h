/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerAppearance : NSObject {
    UIImage * _navigationBarBackgroundImage;
    bool  _navigationBarIsTranslucent;
    long long  _navigationBarStyle;
    long long  _statusBarStyle;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) UIImage *navigationBarBackgroundImage;
@property (nonatomic) bool navigationBarIsTranslucent;
@property (nonatomic) long long navigationBarStyle;
@property (nonatomic) long long statusBarStyle;

+ (id)photoPickerAppearanceFromDictionary:(id)arg1;
+ (id)photoPickerAppearanceFromViewController:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)navigationBarBackgroundImage;
- (bool)navigationBarIsTranslucent;
- (long long)navigationBarStyle;
- (void)setNavigationBarBackgroundImage:(id)arg1;
- (void)setNavigationBarIsTranslucent:(bool)arg1;
- (void)setNavigationBarStyle:(long long)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (long long)statusBarStyle;

@end
