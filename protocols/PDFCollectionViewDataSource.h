/* made by EzioChiu.
 */

@protocol PDFCollectionViewDataSource <NSObject>

@required

- (void)configureItem:(NSObject<PDFKitPlatformThumbnailItem> *)arg1 forRepresentedObject:(id)arg2 andViewIndexPath:(NSIndexPath *)arg3 usingOptionalImage:(UIImage *)arg4;
- (NSIndexPath *)currentIndexPath;
- (NSIndexPath *)indexPathForRepresentedObject:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)representedObjectAtIndexPath:(NSIndexPath *)arg1;

@end
