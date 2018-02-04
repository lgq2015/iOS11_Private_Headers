/* made by EzioChiu.
 */

@protocol QLScrubViewDataSource

@required

- (long long)numberOfPagesInScrubView:(QLScrubView *)arg1;
- (struct CGSize { double x1; double x2; })scrubView:(QLScrubView *)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (void)scrubView:(void *)arg1 thumbnailForPage:(void *)arg2 size:(void *)arg3 withCompletionBlock:(void *)arg4; // needs 4 arg types, found 9: QLScrubView *, long long, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*

@end
