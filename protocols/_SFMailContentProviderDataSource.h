/* made by EzioChiu.
 */

@protocol _SFMailContentProviderDataSource <NSObject>

@required

- (unsigned long long)availableContentTypeForMailContentProvider:(_SFMailContentProvider *)arg1;
- (void)mailContentProvider:(void *)arg1 getPDFDataWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: _SFMailContentProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, void*
- (void)mailContentProvider:(void *)arg1 getReaderContentWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: _SFMailContentProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)mailContentProvider:(void *)arg1 getWebArchiveDataWithCompletion:(void *)arg2; // needs 2 arg types, found 9: _SFMailContentProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*

@end