/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileCoordinatorContext : NSObject {
    int  _endTracingCode;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _sections;
    int  _startTracingCode;
    brc_task_tracker * _tracker;
}

@property (nonatomic) int endTracingCode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long sections;
@property (nonatomic) int startTracingCode;
@property (nonatomic, retain) brc_task_tracker *tracker;

- (void).cxx_destruct;
- (int)endTracingCode;
- (id)initWithTracker:(id)arg1 queue:(id)arg2 startCode:(int)arg3 endCode:(int)arg4;
- (id)queue;
- (unsigned long long)sections;
- (void)setEndTracingCode:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setSections:(unsigned long long)arg1;
- (void)setStartTracingCode:(int)arg1;
- (void)setTracker:(id)arg1;
- (int)startTracingCode;
- (id)tracker;

@end
