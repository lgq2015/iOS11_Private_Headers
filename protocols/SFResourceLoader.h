/* made by EzioChiu.
 */

@protocol SFResourceLoader <NSObject>

@optional

- (bool)loadCard:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: SFCard *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFCard *, NSError *, void*
- (bool)loadImage:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: SFImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFImage *, NSError *, void*
- (bool)loadMoreResults:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: SFMoreResults *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
