/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    long long  _internalPriority;
    NSObject<OS_dispatch_queue> * _ioQueue;
    NSData * _lastReceivedResponse;
    unsigned int  _lastSendMessageID;
    NSMutableDictionary * _policies;
    NSObject<OS_dispatch_semaphore> * _responseSemaphore;
    int  _sessionFD;
}

@property long long internalPriority;
@property (retain) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain) NSData *lastReceivedResponse;
@property unsigned int lastSendMessageID;
@property (retain) NSMutableDictionary *policies;
@property long long priority;
@property (retain) NSObject<OS_dispatch_semaphore> *responseSemaphore;
@property int sessionFD;

+ (void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long long)arg3 value:(const void*)arg4;
+ (id)copyTLVForBytes:(const char *)arg1 messageLength:(unsigned long long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(bool)arg4 n:(int)arg5;
+ (id)errorFromMessage:(id)arg1;
+ (unsigned char)getTLVtypeForBytes:(const char *)arg1 includeHeaderOffset:(bool)arg2 nextTLVOffset:(unsigned int*)arg3;
+ (bool)isTLVValid:(char *)arg1 cursorCurrent:(char *)arg2 totalLength:(unsigned long long)arg3;
+ (unsigned int)messageIDForMessage:(id)arg1;
+ (id)parseTLVResponseForDump:(id)arg1;
+ (id)policyDumpFromData:(id)arg1;
+ (unsigned int)policyIDFromMessage:(id)arg1;
+ (id)readTLVOfType:(unsigned char)arg1 startCursor:(char *)arg2 currentCursor:(char **)arg3 totalLength:(unsigned long long)arg4 readTLVInstance:(unsigned int)arg5;

- (void).cxx_destruct;
- (unsigned long long)addPolicy:(id)arg1;
- (bool)apply;
- (id)createTLVMessage:(unsigned char)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)dumpKernelPolicies;
- (int)dupSocket;
- (id)init;
- (id)initWithSocket:(int)arg1;
- (long long)internalPriority;
- (id)ioQueue;
- (id)lastReceivedResponse;
- (unsigned int)lastSendMessageID;
- (bool)lockSessionToCurrentProcess;
- (id)policies;
- (id)policyWithID:(unsigned long long)arg1;
- (long long)priority;
- (id)priorityString;
- (bool)registerServiceUUID:(id)arg1;
- (bool)removeAllPolicies;
- (bool)removePolicyWithID:(unsigned long long)arg1;
- (id)responseSemaphore;
- (int)sessionFD;
- (void)setInternalPriority:(long long)arg1;
- (void)setIoQueue:(id)arg1;
- (void)setLastReceivedResponse:(id)arg1;
- (void)setLastSendMessageID:(unsigned int)arg1;
- (void)setPolicies:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setResponseSemaphore:(id)arg1;
- (void)setSessionFD:(int)arg1;
- (bool)unregisterServiceUUID:(id)arg1;

@end
