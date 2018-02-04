/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICHTMLConverterClient : NSObject {
    NSXPCConnection * _connectionToService;
    unsigned long long  _requestCount;
    NSObject<OS_dispatch_queue> * _requestCountQueue;
}

@property (nonatomic) unsigned long long requestCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestCountQueue;

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)attributedStringFromHTMLString:(id)arg1;
- (void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dealloc;
- (id)init;
- (unsigned long long)requestCount;
- (id)requestCountQueue;
- (void)resumeConnectionIfNeeded;
- (void)setRequestCount:(unsigned long long)arg1;
- (void)setRequestCountQueue:(id)arg1;
- (void)suspendConnectionIfNeeded;

@end
