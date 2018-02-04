/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNShareLocationController : NSObject <FMFSessionDelegate> {
    <CNCancelable> * _bestPropertyCancelable;
    CNFuture * _bestPropertyFuture;
    CNContact * _contact;
    FMFSession * _fmfSession;
    NSSet * _handles;
    CNUIIDSAvailabilityProvider * _idsAvailabilityProvider;
    <CNSchedulerProvider> * _schedulerProvider;
    NSObject<CNShareLocationProtocol> * _shareLocationDelegate;
}

@property (nonatomic, retain) <CNCancelable> *bestPropertyCancelable;
@property (nonatomic, retain) CNFuture *bestPropertyFuture;
@property (nonatomic, readonly) bool canShare;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FMFSession *fmfSession;
@property (nonatomic, retain) NSSet *handles;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (nonatomic, readonly) bool isSharing;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic) NSObject<CNShareLocationProtocol> *shareLocationDelegate;
@property (readonly) Class superclass;

+ (id)fmfHandleFromContactProperty:(id)arg1;
+ (id)fmfHandlesFromContact:(id)arg1;

- (void).cxx_destruct;
- (id)bestPropertyCancelable;
- (id)bestPropertyFuture;
- (id)callerID:(id*)arg1;
- (id)callerIDFuture;
- (bool)canShare;
- (id)contact;
- (id)endOfDayDate;
- (id)fmfSession;
- (id)handles;
- (id)idsAvailabilityProvider;
- (id)initWithIDSAvailabilityProvider:(id)arg1;
- (id)initWithIDSAvailabilityProvider:(id)arg1 fmfSession:(id)arg2 schedulerProvider:(id)arg3;
- (void)initiateIDSRequest;
- (bool)isSharing;
- (void)notifySharingStatusDidChange;
- (void)perform:(id)arg1;
- (id)schedulerProvider;
- (void)setBestPropertyCancelable:(id)arg1;
- (void)setBestPropertyFuture:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setFmfSession:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setShareLocationDelegate:(id)arg1;
- (id)shareLocationDelegate;
- (void)shareLocationUntilEndDate:(id)arg1;
- (void)stopSharingLocation;

@end
