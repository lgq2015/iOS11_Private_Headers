/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloRecordingProxy : CLIntersiloProxy {
    NSString * _delegateName;
    struct shared_ptr<CMMsl::Writer> { 
        struct Writer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _recordingWriter;
    long long  _specialRole;
    NSSet * _triggeringDelegateNames;
}

@property (nonatomic, readonly, copy) NSString *delegateName;
@property (nonatomic, retain) NSSet *triggeringDelegateNames;

+ (Class)initiatorRepresentingClass;
+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 withInboundInterface:(id)arg4 inboundTriggerNames:(id)arg5 andOutboundInterface:(id)arg6 outboundTriggerNames:(id)arg7 recordingWriter:(struct shared_ptr<CMMsl::Writer> { struct Writer {} *x1; struct __shared_weak_count {} *x2; })arg8;
+ (Class)recipientRepresentingClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)delegateName;
- (void)dispatchEncodedInvocation:(id)arg1;
- (bool)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3;
- (void)setDelegateEntityName:(const char *)arg1;
- (void)setProxyPairRecordingInboundTriggerNames:(id)arg1 outboundTriggerNames:(id)arg2;
- (void)setProxyPairRecordingWriter:(struct shared_ptr<CMMsl::Writer> { struct Writer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setRecordingWriter:(struct shared_ptr<CMMsl::Writer> { struct Writer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTriggeringDelegateNames:(id)arg1;
- (id)triggeringDelegateNames;

@end
