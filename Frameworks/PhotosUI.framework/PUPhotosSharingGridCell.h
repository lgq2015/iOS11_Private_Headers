/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingGridCell : UICollectionViewCell {
    int  _currentImageRequestID;
    UIView * _highlightOverlayView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastZoomPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalZoomPoint;
    PUPhotoView * _photoView;
    PUPhotosZoomingSharingGridCell * _zoomingCell;
    UIView * _zoomingCellSuperview;
}

@property (nonatomic) int currentImageRequestID;
@property (nonatomic, readonly) PUPhotoView *photoView;

- (void).cxx_destruct;
- (void)_updateHighlight;
- (void)_updateSubviewOrdering;
- (int)currentImageRequestID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)photoView;
- (void)prepareForReuse;
- (void)setCurrentImageRequestID:(int)arg1;
- (void)setHighlighted:(bool)arg1;

@end
