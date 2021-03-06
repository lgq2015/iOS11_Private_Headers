/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDownload : NSObject {
    NSString * _fileDownloadPath;
    long long  _fileType;
    WKWebView * _originatingWebView;
    NSURLRequest * _request;
    NSURL * _sourceURL;
    _WKUserInitiatedAction * _userInitiatedAction;
}

@property (nonatomic, readonly) NSString *fileDownloadPath;
@property (nonatomic, readonly) long long fileType;
@property (nonatomic, readonly) WKWebView *originatingWebView;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) _WKUserInitiatedAction *userInitiatedAction;

+ (id)downloadWithSourceURL:(id)arg1 path:(id)arg2 fileType:(long long)arg3 webKitDownload:(id)arg4 userInitiatedAction:(id)arg5;

- (void).cxx_destruct;
- (id)fileDownloadPath;
- (long long)fileType;
- (id)originatingWebView;
- (bool)removeFromDisk;
- (id)request;
- (id)sourceURL;
- (id)userInitiatedAction;

@end
