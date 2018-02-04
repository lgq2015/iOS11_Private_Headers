/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOnceOperation : NSObject {
    bool  _finished;
    FCMutexLock * _lock;
}

@property (nonatomic) bool finished;
@property (nonatomic, retain) FCMutexLock *lock;

- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)arg1;
- (bool)finished;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)lock;
- (void)setFinished:(bool)arg1;
- (void)setLock:(id)arg1;

@end
