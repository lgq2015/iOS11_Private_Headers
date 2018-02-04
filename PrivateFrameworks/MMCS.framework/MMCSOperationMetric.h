/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSOperationMetric : NSObject <MMCSOperationMetric> {
    unsigned long long  _bytesDownloaded;
    unsigned long long  _bytesUploaded;
    unsigned long long  _connections;
    unsigned long long  _connectionsCreated;
    double  _duration;
    double  _executing;
    double  _queueing;
    NSMutableArray * _ranges;
    NSMutableSet * _requestUUIDs;
    NSDate * _startDate;
}

@property unsigned long long bytesDownloaded;
@property unsigned long long bytesUploaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property double executing;
@property (readonly) unsigned long long hash;
@property double queueing;
@property (nonatomic, retain) NSMutableArray *ranges;
@property (readonly) NSArray *rangesCopy;
@property (readonly) NSMutableSet *requestUUIDs;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)absoluteStart;
- (double)absoluteStop;
- (void)addRange:(id)arg1;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesUploaded;
- (long long)compareExecutingStartTime:(id)arg1;
- (long long)compareStartTime:(id)arg1;
- (unsigned long long)connections;
- (unsigned long long)connectionsCreated;
- (id)describeRanges;
- (id)description;
- (double)duration;
- (double)executing;
- (id)initWithDate:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (double)other;
- (double)queueing;
- (id)ranges;
- (void)rangesCompleted;
- (id)rangesCopy;
- (id)requestUUIDs;
- (void)setBytesDownloaded:(unsigned long long)arg1;
- (void)setBytesUploaded:(unsigned long long)arg1;
- (void)setConnections:(unsigned long long)arg1;
- (void)setConnectionsCreated:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setExecuting:(double)arg1;
- (void)setQueueing:(double)arg1;
- (void)setRanges:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
