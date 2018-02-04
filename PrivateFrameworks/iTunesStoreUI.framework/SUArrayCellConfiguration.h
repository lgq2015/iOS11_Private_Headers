/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUArrayCellConfiguration : SUCellConfiguration {
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _imageFrames;
    id * _images;
    unsigned long long  _numberOfImages;
    unsigned long long  _numberOfStrings;
    id * _selectedImages;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _stringFrames;
    id * _strings;
}

- (id)_accessibilityStringsArrayPointer;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForImageAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)initWithStringCount:(unsigned long long)arg1 imageCount:(unsigned long long)arg2;
- (unsigned long long)numberOfImages;
- (unsigned long long)numberOfLabels;
- (void)reloadData;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (id)stringForLabelAtIndex:(unsigned long long)arg1;

@end
