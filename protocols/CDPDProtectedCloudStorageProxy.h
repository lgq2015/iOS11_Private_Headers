/* made by EzioChiu.
 */

@protocol CDPDProtectedCloudStorageProxy <NSObject>

@required

- (struct _PCSIdentitySetData { }*)pcsIdentityCreateWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsIdentityMigrateToStingrayWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsIdentityMigrateToiCDPWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData { }*)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData { }*)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { }*)arg1 options:(NSDictionary *)arg2 error:(id*)arg3;
- (struct _PCSIdentitySetData { }*)pcsIdentitySetupWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsRestoreLocalBackup:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)pcsSynchronizeKeysWithInfo:(NSDictionary *)arg1 error:(id*)arg2;

@end
