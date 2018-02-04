/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface _VideosExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSDictionary * _rects;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } calculatedContentSize;

- (void).cxx_destruct;
- (void)_calculateSizes;
- (struct CGSize { double x1; double x2; })calculatedContentSize;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareLayout;

@end
