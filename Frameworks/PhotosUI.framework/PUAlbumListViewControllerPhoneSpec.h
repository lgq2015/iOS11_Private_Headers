/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec

- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptyAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (id)_nameOfHiddenAlbumPlaceholderImage;
- (id)_nameOfRecentlyDeletedAlbumPlaceholderImage;
- (bool)canShowVirtualCollections;
- (long long)cellContentViewLayout;
- (struct CGSize { double x1; double x2; })cellSizeForStackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (id)emptyAlbumPlaceholderImage;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGSize { double x1; double x2; })imageSizeForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsetsForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)shouldShowSectionHeaders;
- (bool)shouldUseTableView;
- (struct CGSize { double x1; double x2; })stackSize;
- (struct CGSize { double x1; double x2; })stackSizeForLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (unsigned long long)stackViewStyle;

@end
