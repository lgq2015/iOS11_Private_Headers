/* made by EzioChiu.
 */

@protocol PDFCollectionViewDelegate <NSObject>

@required

- (bool)allowsDragging;
- (void)didEndDisplayingItem:(NSObject<PDFKitPlatformThumbnailItem> *)arg1;
- (void)didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (PDFPage *)scrubbingAtFraction:(double)arg1 betweenIndexPath:(NSIndexPath *)arg2 andIndexPath:(NSIndexPath *)arg3 outDiscreteFraction:(double*)arg4;
- (void)selectionChanged;

@end
