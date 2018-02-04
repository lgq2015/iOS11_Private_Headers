/* made by EzioChiu.
 */

@protocol WLDataMigrationDelegate <NSObject>

@required

- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didFailWithError:(NSError *)arg2;
- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didUpdateMigrationState:(unsigned long long)arg2;
- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didUpdateProgressPercentage:(float)arg2;
- (void)dataMigrator:(id <WLDataMigratorProtocol>)arg1 didUpdateProgressString:(NSString *)arg2;
- (void)dataMigratorDidBecomeRestartable:(id <WLDataMigratorProtocol>)arg1;
- (void)dataMigratorDidFinish:(id <WLDataMigratorProtocol>)arg1 withImportErrors:(bool)arg2;
- (void)dataMigratorDidGetInterrupted;

@end
