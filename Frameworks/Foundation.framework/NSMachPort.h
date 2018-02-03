/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachPort : NSPort {
    id  _delegate;
    unsigned long long  _flags;
    unsigned int  _machPort;
    unsigned long long  _reserved;
}

@property (readonly) unsigned int machPort;

+ (void)_fixNSMachPortLeak;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
+ (void)resetAllPorts;
+ (bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;

- (unsigned long long)_cfTypeID;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)delegate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isValid;
- (unsigned int)machPort;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (bool)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;

@end