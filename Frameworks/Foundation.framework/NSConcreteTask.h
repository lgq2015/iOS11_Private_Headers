/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteTask : NSTask {
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_source> * _dsrc;
    bool  _hasExeced;
    bool  _hasPostedDeathNotification;
    bool  _isRunning;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    int  _pid;
    int  _platformExitInfo;
    BOOL  _qos;
    long long  _suspendCount;
    id /* block */  _terminationHandler;
    bool  _terminationRun;
    NSPort * _tmpPort;
}

- (long long)_platformExitInformation;
- (int)_procid;
- (void)_setTerminationHandler:(id /* block */)arg1;
- (void)_withTaskDictionary:(id /* block */)arg1;
- (id)arguments;
- (id)currentDirectoryPath;
- (void)dealloc;
- (id)environment;
- (id)init;
- (void)interrupt;
- (bool)isRunning;
- (void)launch;
- (bool)launchAndReturnError:(id*)arg1;
- (id)launchPath;
- (bool)launchWithDictionary:(id)arg1 error:(id*)arg2;
- (id)preferredArchitectures;
- (int)processIdentifier;
- (long long)qualityOfService;
- (bool)resume;
- (void)setArguments:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)setPreferredArchitectures:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardInput:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStartsNewProcessGroup:(bool)arg1;
- (void)setTaskDictionary:(id)arg1;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id)standardError;
- (id)standardInput;
- (id)standardOutput;
- (bool)suspend;
- (long long)suspendCount;
- (id)taskDictionary;
- (void)terminate;
- (void)terminateTask;
- (id /* block */)terminationHandler;
- (long long)terminationReason;
- (int)terminationStatus;
- (void)waitUntilExit;

@end