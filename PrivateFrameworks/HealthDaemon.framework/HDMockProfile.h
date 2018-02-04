/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMockProfile : NSObject {
    HDDataCollectionManager * _dataCollectionManager;
    <HDHealthDaemon> * _healthDaemon;
    HDUserCharacteristicsManager * _userCharacteristicsManager;
    HDDaemon * daemon;
    <HDHealthDatabase> * healthDatabase;
    HDDeviceManager * healthDeviceManager;
    HDSourceManager * healthSourceManager;
}

@property (nonatomic) HDDaemon *daemon;
@property (nonatomic, retain) HDDataCollectionManager *dataCollectionManager;
@property (nonatomic) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, retain) <HDHealthDatabase> *healthDatabase;
@property (nonatomic, retain) HDDeviceManager *healthDeviceManager;
@property (nonatomic, retain) HDSourceManager *healthSourceManager;
@property (nonatomic, retain) HDUserCharacteristicsManager *userCharacteristicsManager;

- (void).cxx_destruct;
- (id)daemon;
- (id)dataCollectionManager;
- (id)healthDaemon;
- (id)healthDatabase;
- (id)healthDeviceManager;
- (id)healthSourceManager;
- (void)setDaemon:(id)arg1;
- (void)setDataCollectionManager:(id)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setHealthDatabase:(id)arg1;
- (void)setHealthDeviceManager:(id)arg1;
- (void)setHealthSourceManager:(id)arg1;
- (void)setUserCharacteristicsManager:(id)arg1;
- (id)userCharacteristicsManager;

@end
