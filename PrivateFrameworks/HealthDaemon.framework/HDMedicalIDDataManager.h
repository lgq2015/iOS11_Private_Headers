/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMedicalIDDataManager : NSObject {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    FKFriendsManager * _sosFriendsManager;
}

@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FKFriendsManager *sosFriendsManager;

- (void).cxx_destruct;
- (id)_medicalIDURL;
- (id)_medicalIDURLWithDirectoryPath:(id)arg1;
- (bool)_migrateMedicalIDLocationIfNecessary:(id*)arg1;
- (id)_unarchiveMedicalIDDataWithRawData:(id)arg1;
- (void)_updateShowMedicalIdOnWatch:(bool)arg1;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)arg1;
- (bool)deleteMedicalIDDataWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (id)medicalIDDataCreateIfNecessary:(bool)arg1;
- (id)medicalIDEmergencyContacts;
- (bool)obliterateMedicalIDDataWithReason:(id)arg1 error:(id*)arg2;
- (id)profile;
- (id)queue;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSosFriendsManager:(id)arg1;
- (id)sosFriendsManager;
- (bool)updateMedicalIDData:(id)arg1 error:(id*)arg2;

@end
