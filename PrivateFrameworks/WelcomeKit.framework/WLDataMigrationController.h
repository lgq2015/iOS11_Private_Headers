/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

@interface WLDataMigrationController : WLDaemonConnection {
    unsigned long long  _dataTypes;
    <WLDataMigrationDelegate> * _delegate;
    <WLDataMigratorProtocol> * _migrator;
}

@property (nonatomic, readonly) unsigned long long dataTypes;
@property (nonatomic, readonly) <WLDataMigrationDelegate> *delegate;

- (void).cxx_destruct;
- (void)cancelMigration;
- (unsigned long long)dataTypes;
- (id)delegate;
- (id)initWithDataTypes:(unsigned long long)arg1 delegate:(id)arg2;
- (void)startMigration;

@end