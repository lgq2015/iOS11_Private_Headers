/* made by EzioChiu.
 */

@protocol VideosExtrasImageBrowserViewControllerDataSource <NSObject>

@required

- (void)imageBrowserViewController:(void *)arg1 loadDescriptionAtIndex:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: VideosExtrasImageBrowserViewController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSAttributedString *, void*
- (void)imageBrowserViewController:(void *)arg1 loadImageAtIndex:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: VideosExtrasImageBrowserViewController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)imageBrowserViewController:(void *)arg1 loadSubtitleAtIndex:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: VideosExtrasImageBrowserViewController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSAttributedString *, void*
- (void)imageBrowserViewController:(void *)arg1 loadTitleAtIndex:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: VideosExtrasImageBrowserViewController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSAttributedString *, void*
- (unsigned long long)numberOfImagesForBrowserViewController:(VideosExtrasImageBrowserViewController *)arg1;

@end
