/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFObserver : NSObject

+ (id)observerWithCompletionHandler:(id /* block */)arg1;
+ (id)observerWithResultBlock:(id /* block */)arg1;
+ (id)observerWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;

@end
