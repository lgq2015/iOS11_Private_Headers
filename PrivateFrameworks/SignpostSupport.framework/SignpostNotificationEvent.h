/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostNotificationEvent : SignpostEvent {
    unsigned long long  _serialNumber;
    NSObject<OS_dispatch_source> * _timeoutSource;
    unsigned long long  _totalFrameCount;
}

@property (nonatomic) unsigned long long _totalFrameCount;
@property (nonatomic, readonly) unsigned long long serialNumber;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutSource;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (bool)_hasTotalFrames;
- (unsigned long long)_totalFrameCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 serialNumber:(unsigned long long)arg3;
- (unsigned long long)serialNumber;
- (id)serializeableDictionary;
- (void)setTimeoutSource:(id)arg1;
- (void)set_totalFrameCount:(unsigned long long)arg1;
- (id)timeoutSource;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (id)initWithSignpostNotificationXPCDictionary:(id)arg1 subsystem:(id)arg2 category:(id)arg3 serialNumber:(unsigned long long)arg4 timeoutInSec:(unsigned long long)arg5 timeoutHandlingQueue:(id)arg6 timeoutHandlingBlock:(id /* block */)arg7;

@end
