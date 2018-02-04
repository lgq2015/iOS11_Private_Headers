/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSFileLogger : NSObject <WBSLogger> {
    NSTimer * _closeStreamTimer;
    NSURL * _directoryURL;
    NSString * _logName;
    NSObject<OS_dispatch_queue> * _logQueue;
    NSDate * _logStartDate;
    unsigned long long  _maximumLogAgeInDays;
    NSOutputStream * _outputStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)collectLogsInDirectory:(id)arg1 withName:(id)arg2 intoFile:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_closeStream;
- (void)_logMessage:(id)arg1 date:(id)arg2;
- (void)_removeOldLogs;
- (void)dealloc;
- (id)initWithDirectoryURL:(id)arg1 logName:(id)arg2 maximumLogAge:(unsigned long long)arg3;
- (void)logFormat:(id)arg1;
- (void)logMessage:(id)arg1;
- (void)tearDown;

@end
