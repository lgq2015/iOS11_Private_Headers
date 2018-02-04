/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKLLog : NSObject <OSActivityStreamDelegate, OSLogPersistenceDelegate> {
    NSDate * _absoluteStartDate;
    OSLogPersistence * _archiveSource;
    bool  _colorOutput;
    id /* block */  _completionHandler;
    NSString * _processName;
    unsigned long long  _source;
    double  _startTimeOffset;
    NSMutableArray * _streamObservers;
    OSActivityStream * _streamSource;
}

@property (nonatomic, retain) NSDate *absoluteStartDate;
@property (nonatomic, retain) OSLogPersistence *archiveSource;
@property (nonatomic) bool colorOutput;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned long long source;
@property (nonatomic) double startTimeOffset;
@property (nonatomic, retain) NSMutableArray *streamObservers;
@property (nonatomic, retain) OSActivityStream *streamSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureStreamSource:(id)arg1;
- (id)_init;
- (id)absoluteStartDate;
- (bool)activityStream:(id)arg1 results:(id)arg2;
- (void)addStreamObserver:(id)arg1;
- (id)archiveSource;
- (bool)colorOutput;
- (id /* block */)completionHandler;
- (id)initForHost;
- (id)initForSimulator;
- (id)initWithArchiveAtURL:(id)arg1;
- (id)initWithRemoteDevice:(id)arg1;
- (bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (id)processName;
- (void)setAbsoluteStartDate:(id)arg1;
- (void)setArchiveSource:(id)arg1;
- (void)setColorOutput:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStartTimeOffset:(double)arg1;
- (void)setStreamObservers:(id)arg1;
- (void)setStreamSource:(id)arg1;
- (unsigned long long)source;
- (double)startTimeOffset;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStop:(id)arg1;
- (void)streamLogsWithCompletion:(id /* block */)arg1;
- (id)streamObservers;
- (id)streamSource;

@end
