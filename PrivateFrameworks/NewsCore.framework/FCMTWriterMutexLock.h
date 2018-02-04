/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMTWriterMutexLock : NSObject <FCLocking> {
    FCMutexLock * _mutex;
}

@property (nonatomic, retain) FCMutexLock *mutex;

- (void).cxx_destruct;
- (id)init;
- (void)lock;
- (id)mutex;
- (void)performReadSync:(id /* block */)arg1;
- (void)performWriteSync:(id /* block */)arg1;
- (void)setMutex:(id)arg1;
- (void)unlock;

@end
