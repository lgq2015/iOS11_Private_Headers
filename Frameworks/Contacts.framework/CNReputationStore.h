/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNReputationStore : NSObject {
    CNReputationContactsAdapter * _contactsAdapter;
    CNReputationCoreRecentsAdapter * _coreRecentsAdapter;
    CNReputationLogger * _logger;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) CNReputationContactsAdapter *contactsAdapter;
@property (nonatomic, readonly) CNReputationCoreRecentsAdapter *coreRecentsAdapter;
@property (nonatomic, readonly) CNReputationLogger *logger;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;

- (void).cxx_destruct;
- (id)contactsAdapter;
- (id)coreRecentsAdapter;
- (id)init;
- (id)initWithCoreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 schedulerProvider:(id)arg4;
- (id)logger;
- (id)makeFutureForHandle:(id)arg1;
- (id)reputationForHandle:(id)arg1 timeout:(double)arg2 error:(id*)arg3;
- (id)schedulerProvider;

@end
