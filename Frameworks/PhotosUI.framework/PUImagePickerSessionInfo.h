/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImagePickerSessionInfo : PUSessionInfo {
    unsigned long long  _selectionLimit;
    bool  _showsPrompt;
    NSString * _staticPrompt;
}

@property (nonatomic) bool showsPrompt;
@property (nonatomic, copy) NSString *staticPrompt;

- (void).cxx_destruct;
- (id)initWithPhotoSelectionManager:(id)arg1;
- (bool)isSelectingAssets;
- (id)localizedPrompt;
- (unsigned long long)selectionLimit;
- (void)setSelectionLimit:(unsigned long long)arg1;
- (void)setShowsPrompt:(bool)arg1;
- (void)setStaticPrompt:(id)arg1;
- (bool)showsPrompt;
- (id)staticPrompt;

@end
