/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDPhoneNumberMonitor : NSObject <CNDPhoneNumberMonitor> {
    <CNDCoreTelephonyServices> * _coreTelephonyServices;
    struct __CTServerConnection { } * _serverConnection;
    NSObject<OS_dispatch_queue> * _serverConnectionQueue;
    CNReplaySubject * _subject;
    <CNCancelable> * _subjectToken;
}

@property (nonatomic, readonly) <CNDCoreTelephonyServices> *coreTelephonyServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct __CTServerConnection { }*serverConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverConnectionQueue;
@property (nonatomic, readonly) CNReplaySubject *subject;
@property (nonatomic, retain) <CNCancelable> *subjectToken;
@property (readonly) Class superclass;

+ (id)continuousPhoneNumberObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection { }*)arg2;
+ (id)myPhoneNumber;
+ (id)myPhoneNumberWithServices:(id)arg1 serverConnection:(struct __CTServerConnection { }*)arg2;
+ (id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection { }*)arg2;
+ (id)phoneNumberObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(struct __CTServerConnection { }*)arg2;

- (void).cxx_destruct;
- (id)addPhoneNumberChangeHandler:(id /* block */)arg1;
- (void)configureStateIfNecessary;
- (id)coreTelephonyServices;
- (void)dealloc;
- (id)init;
- (id)initWithTelephonyServices:(id)arg1;
- (void)nts_configureConnectionIfNecessary;
- (void)nts_configureSubjectIfNecessary;
- (struct __CTServerConnection { }*)serverConnection;
- (id)serverConnectionQueue;
- (void)setServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)setServerConnectionQueue:(id)arg1;
- (void)setSubjectToken:(id)arg1;
- (id)subject;
- (id)subjectToken;

@end
