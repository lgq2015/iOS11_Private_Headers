/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLErrors : NSObject

+ (id)cplErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)cplErrorWithCode:(long long)arg1 description:(id)arg2 arguments:(char *)arg3;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(char *)arg4;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(char *)arg5;
+ (id)incorrectMachineStateErrorWithReason:(id)arg1;
+ (id)incorrectParametersErrorForParameter:(id)arg1;
+ (id)invalidClientCacheErrorWithReason:(id)arg1;
+ (id)invalidCloudCacheErrorWithReason:(id)arg1;
+ (id)invalidDaemonErrorWithConnectionError:(id)arg1;
+ (id)libraryClosedError;
+ (id)missingError;
+ (id)notImplementedError;
+ (id)operationCancelledError;
+ (id)posixErrorForURL:(id)arg1;
+ (id)transportErrorFromTransportError:(id)arg1;
+ (id)underlyingErrorWithReason:(id)arg1;
+ (id)unknownError;
+ (id)unsafeResources:(id)arg1 withError:(id)arg2 resourceStorage:(id)arg3;
+ (id)versionMismatchError;

@end
