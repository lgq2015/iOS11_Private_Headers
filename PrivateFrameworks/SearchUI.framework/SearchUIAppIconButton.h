/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconButton : UIButton {
    SearchUIAppIconImage * _image;
}

@property (retain) SearchUIAppIconImage *image;

- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (void)dealloc;
- (id)image;
- (id)init;
- (void)setImage:(id)arg1;
- (void)updateWithBundleID:(id)arg1;
- (void)updateWithBundleID:(id)arg1 webClipID:(id)arg2;

@end
