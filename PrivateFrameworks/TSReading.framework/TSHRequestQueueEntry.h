/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHRequestQueueEntry : NSObject {
    NSURLConnection * mConnection;
    id  mDelegate;
    NSURLRequest * mDependancy;
    NSURLRequest * mRequest;
}

- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)dependancy;
- (id)request;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDependancy:(id)arg1;
- (void)setRequest:(id)arg1;

@end
