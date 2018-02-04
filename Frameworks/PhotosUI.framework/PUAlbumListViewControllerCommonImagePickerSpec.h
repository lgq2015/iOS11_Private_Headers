/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec

- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptyAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (id)_nameOfHiddenAlbumPlaceholderImage;
- (id)_nameOfRecentlyDeletedAlbumPlaceholderImage;
- (long long)cellContentViewLayout;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize { double x1; double x2; })imageSize;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)shouldUseCollageForCloudFeedPlaceholder;
- (bool)shouldUseTableView;
- (bool)showsDeleteButtonOnCellContentView;
- (struct CGSize { double x1; double x2; })stackSize;
- (unsigned long long)stackViewStyle;

@end
