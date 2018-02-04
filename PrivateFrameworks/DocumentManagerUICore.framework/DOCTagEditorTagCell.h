/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagEditorTagCell : UICollectionViewCell {
    bool  _mixedSelection;
    DOCLargeTagView * _tagView;
}

@property (nonatomic) bool mixedSelection;
@property (nonatomic, retain) DOCTag *tagValue;
@property (nonatomic, retain) DOCLargeTagView *tagView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)mixedSelection;
- (void)setMixedSelection:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTagValue:(id)arg1;
- (void)setTagView:(id)arg1;
- (id)tagValue;
- (id)tagView;
- (void)updateStyle;

@end
