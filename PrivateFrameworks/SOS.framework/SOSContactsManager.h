/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSContactsManager : NSObject {
    FKFriendsManager * _friendsManager;
    NSObject<OS_dispatch_semaphore> * _friendsManagerContactsInitialStateSemaphore;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _friendsManagerContactsMutex;
    int  _healthContactsNotificationToken;
    HKHealthStore * _healthStore;
    SOSLegacyContactsManager * _legacyContactsManager;
    NSObject<OS_dispatch_semaphore> * _medicalIDContactsInitialStateSemaphore;
    NSArray * _medicalIDEmergencyContacts;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _medicalIDEmergencyContactsMutex;
}

@property (nonatomic, readonly) bool SOSContactsExist;
@property (nonatomic, retain) FKFriendsManager *friendsManager;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *friendsManagerContactsInitialStateSemaphore;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } friendsManagerContactsMutex;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, readonly) SOSLegacyContactsManager *legacyContactsManager;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *medicalIDContactsInitialStateSemaphore;
@property (nonatomic, retain) NSArray *medicalIDEmergencyContacts;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } medicalIDEmergencyContactsMutex;

+ (bool)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;

- (void).cxx_destruct;
- (id)SOSContactDestinations;
- (bool)SOSContactsExist;
- (void)SOSContactsWithTimeout:(double)arg1 andCompletion:(id /* block */)arg2;
- (id)SOSDestinationsForFriend:(id)arg1;
- (id)SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;
- (id)SOSFriends;
- (id)SOSFriendsDestinations;
- (id)_contactFromFriend:(id)arg1;
- (bool)_isEmergencyNumber:(id)arg1;
- (void)_medicalContactsDidChange;
- (void)_medicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (id)_userDefaults;
- (void)_waitForFriendsManagerInitialState;
- (void)_waitForMedicalIDInitialState;
- (bool)addContactAsSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id*)arg3;
- (bool)addSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id*)arg3;
- (void)contactStoreDidChange;
- (void)dealloc;
- (void)fetchMedicalIDEmergencyContacts;
- (id)friendsManager;
- (id)friendsManagerContactsInitialStateSemaphore;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })friendsManagerContactsMutex;
- (bool)hasValidContactsToMessage;
- (id)healthStore;
- (id)init;
- (id)legacyContactsManager;
- (id)medicalIDContactsInitialStateSemaphore;
- (id)medicalIDEmergencyContacts;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })medicalIDEmergencyContactsMutex;
- (id)phoneNumbersToMessage;
- (void)removeSOSFriend:(id)arg1 destinationNumber:(id)arg2;
- (void)setFriendsManager:(id)arg1;
- (void)setFriendsManagerContactsInitialStateSemaphore:(id)arg1;
- (void)setFriendsManagerContactsMutex:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMedicalIDContactsInitialStateSemaphore:(id)arg1;
- (void)setMedicalIDEmergencyContacts:(id)arg1;
- (void)setMedicalIDEmergencyContactsMutex:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;

@end
