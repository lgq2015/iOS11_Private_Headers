/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackViewFlowLayout : _TVCollectionViewFlowLayout {
    id /* block */  _onPrepareLayout;
    NSArray * _supplementaryCellLayoutAttributes;
}

@property (nonatomic, copy) id /* block */ onPrepareLayout;
@property (nonatomic, copy) NSArray *supplementaryCellLayoutAttributes;

- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id /* block */)onPrepareLayout;
- (void)prepareLayout;
- (void)setOnPrepareLayout:(id /* block */)arg1;
- (void)setSupplementaryCellLayoutAttributes:(id)arg1;
- (id)supplementaryCellLayoutAttributes;

@end
