/* made by EzioChiu.
 */

@protocol _WKDownloadDelegate <NSObject>

@optional

- (NSString *)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 allowOverwrite:(bool*)arg3;
- (void)_download:(_WKDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)_downloadDidCancel:(_WKDownload *)arg1;
- (void)_downloadDidFinish:(_WKDownload *)arg1;
- (void)_downloadDidStart:(_WKDownload *)arg1;

@end
