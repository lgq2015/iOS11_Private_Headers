/* made by EzioChiu.
 */

@protocol PUImageEditPluginSessionDataSource <PUEditPluginSessionDataSource>

@required

- (void)editPluginSession:(void *)arg1 loadDisplaySizeImageWithHandler:(void *)arg2; // needs 2 arg types, found 7: PUEditPluginSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)editPluginSession:(void *)arg1 loadFullSizeImageWithHandler:(void *)arg2; // needs 2 arg types, found 9: PUEditPluginSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, long long, NSString *, void*
- (void)editPluginSession:(void *)arg1 loadVideoComplementURLWithHandler:(void *)arg2; // needs 2 arg types, found 8: PUEditPluginSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, struct { long long x1; int x2; unsigned int x3; long long x4; }, void*

@end
