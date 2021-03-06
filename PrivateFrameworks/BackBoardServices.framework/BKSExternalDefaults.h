/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSExternalDefaults : BKSAbstractDefaults {
    BKSIAPDefaults * _lazy_iapDefaults;
    BKSLockdownDefaults * _lazy_lockdownDefaults;
    BKSPersistentConnectionDefaults * _lazy_persistentConnectionDefaults;
    BKSSpringBoardDefaults * _lazy_springBoardDefaults;
}

@property (nonatomic, readonly, retain) BKSIAPDefaults *iapDefaults;
@property (nonatomic, readonly, retain) BKSLockdownDefaults *lockdownDefaults;
@property (nonatomic, readonly, retain) BKSPersistentConnectionDefaults *persistentConnectionDefaults;
@property (nonatomic, readonly, retain) BKSSpringBoardDefaults *springBoardDefaults;

- (void)dealloc;
- (id)iapDefaults;
- (id)lockdownDefaults;
- (id)persistentConnectionDefaults;
- (id)springBoardDefaults;

@end
