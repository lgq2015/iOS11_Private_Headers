/* made by EzioChiu.
 */

@protocol MFMailComposeRemoteHost

@required

- (void)bodyFinishedDrawing;
- (void)serviceCompositionFinishedWithResult:(long long)arg1 error:(NSError *)arg2;
- (void)serviceCompositionRequestsSendWithBody:(void *)arg1 recipients:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
