/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARImageLoader : NSObject {
    PARSearchClient * _client;
    NSObject<OS_dispatch_queue> * _futureWaitQueue;
    NSObject<OS_dispatch_semaphore> * _futureWaitSemaphore;
    NSDictionary * _imageMap;
    NSObject<OS_dispatch_queue> * _mapQueue;
    NSObject<OS_dispatch_queue> * _pendingQueue;
    NSMutableDictionary * _pendingRequests;
    NSURLSession * _urlSession;
}

- (void).cxx_destruct;
- (id)_fetchImageData:(id)arg1 timeoutInterval:(double)arg2;
- (id)fetchImageData:(id)arg1 timeoutInterval:(double)arg2;
- (id)initWithClient:(id)arg1;

@end
