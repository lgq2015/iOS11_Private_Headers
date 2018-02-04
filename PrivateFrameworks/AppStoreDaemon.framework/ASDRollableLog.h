/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRollableLog : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSFileHandle * _fileHandle;
    NSObject<OS_dispatch_source> * _fileObserverSource;
    double  _lastFileStatTime;
    ASDLogFileOptions * _options;
}

@property (readonly) ASDLogFileOptions *logOptions;

- (void).cxx_destruct;
- (id)_activeLogFilePath;
- (void)_checkLogFileSize;
- (void)_closeLogFile;
- (id)_logFilePathWithIndex:(long long)arg1;
- (void)_openLogFile;
- (void)_rollLogFiles;
- (void)dealloc;
- (id)initWithLogOptions:(id)arg1;
- (id)logOptions;
- (void)writeString:(id)arg1;

@end
