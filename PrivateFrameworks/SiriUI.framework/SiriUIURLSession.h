/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIURLSession : NSObject <NSURLSessionDataDelegate> {
    NSURLSession * _URLSession;
    NSMapTable * _imageDownloadForTask;
    NSMapTable * _tasksForClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedURLSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_registerTask:(id)arg1 forClient:(id)arg2;
- (void)_unregisterTask:(id)arg1 forClient:(id)arg2;
- (void)cancelAllTasksForClient:(id)arg1;
- (id)description;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize { double x1; double x2; })arg3 fillColor:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize { double x1; double x2; })arg3 fillColor:(id)arg4 userAgent:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize { double x1; double x2; })arg3 incremental:(bool)arg4 progressHandler:(id /* block */)arg5 fillColor:(id)arg6;
- (id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(struct CGSize { double x1; double x2; })arg3 incremental:(bool)arg4 progressHandler:(id /* block */)arg5 fillColor:(id)arg6 userAgent:(id)arg7;
- (id)init;

@end
