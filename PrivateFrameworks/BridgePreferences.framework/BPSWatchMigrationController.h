/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSWatchMigrationController : UIViewController {
    bool  _iTunes;
    NSArray * _migratableDevices;
    <BPSWatchMigrationControllerDelegate> * _migrationDelegate;
    BPSMultipleWatchMigrationView * _multipleWatchView;
    BPSRemoteWatchView * _watchView;
}

@property (nonatomic) bool iTunes;
@property (nonatomic, retain) NSArray *migratableDevices;
@property (nonatomic) <BPSWatchMigrationControllerDelegate> *migrationDelegate;
@property (nonatomic, retain) BPSMultipleWatchMigrationView *multipleWatchView;
@property (nonatomic, retain) BPSRemoteWatchView *watchView;

- (void).cxx_destruct;
- (void)_notifyDelegateShouldMigrateWithData:(id)arg1;
- (void)_saveMigrationPreference:(bool)arg1;
- (bool)iTunes;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)migratableDevices;
- (id)migrationDelegate;
- (id)multipleWatchView;
- (void)setITunes:(bool)arg1;
- (void)setMigratableDevices:(id)arg1;
- (void)setMigrationDelegate:(id)arg1;
- (void)setMultipleWatchView:(id)arg1;
- (void)setWatchView:(id)arg1;
- (bool)shouldBeDisplayedGivenMigrationData:(id)arg1;
- (id)watchView;

@end
