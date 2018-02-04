/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICCollapsibleImageView : ICCollapsibleBaseView {
    struct UIImage { Class x1; } * _image;
    struct UIImageView { Class x1; } * _imageView;
    bool  _shouldEnableLetterpressIfSupported;
    struct UIColor { Class x1; } * _tintColor;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool shouldEnableLetterpressIfSupported;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (void)enableLetterpressIfSupported;
- (struct UIImage { Class x1; }*)image;
- (struct UIImageView { Class x1; }*)imageView;
- (void)performSetup;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImageView:(struct UIImageView { Class x1; }*)arg1;
- (void)setShouldEnableLetterpressIfSupported:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)shouldEnableLetterpressIfSupported;
- (struct UIColor { Class x1; }*)tintColor;

@end
