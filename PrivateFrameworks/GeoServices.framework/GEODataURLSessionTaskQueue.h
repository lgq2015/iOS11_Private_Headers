/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataURLSessionTaskQueue : NSObject {
    unsigned long long  _inflightTaskCount;
    NSObject<OS_dispatch_queue> * _isolation;
    unsigned long long  _maximumInflightTaskCount;
    GEODataURLSession * _session;
    NSMutableArray * _tasks;
}

@property (nonatomic, readonly) GEODataURLSession *session;

- (void).cxx_destruct;
- (bool)_startNextTask;
- (void)_startNextTaskIfCapacityAllows;
- (void)enqueueTask:(id)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 isolationQueue:(id)arg2;
- (bool)removeTask:(id)arg1;
- (id)session;
- (void)setMaximumInflightTaskCount:(unsigned long long)arg1;
- (void)taskDidComplete:(id)arg1;

@end
