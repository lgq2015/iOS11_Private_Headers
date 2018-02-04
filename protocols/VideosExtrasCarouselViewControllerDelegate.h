/* made by EzioChiu.
 */

@protocol VideosExtrasCarouselViewControllerDelegate <NSObject>

@optional

- (void)carouselViewController:(VideosExtrasCarouselViewController *)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewController:(void *)arg1 didSelectItemAtIndex:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: VideosExtrasCarouselViewController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
