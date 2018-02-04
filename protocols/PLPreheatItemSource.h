/* made by EzioChiu.
 */

@protocol PLPreheatItemSource <NSObject>

@required

- (PLPreheatItem *)originalPreheatItemForAsset:(id <_PLImageLoadingAsset>)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3;
- (PLPreheatItem *)preheatItemForAsset:(id <_PLImageLoadingAsset>)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4;

@optional

- (void)preheatImageDataAtIndexes:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSIndexSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, bool, void*

@end
