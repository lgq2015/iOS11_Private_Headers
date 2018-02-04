/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary * _perTransactionRemappedIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)discardDeleteForRemappedRecordWithIdentifier:(id)arg1;
- (id)realIdentifierForRemappedIdentifier:(id)arg1;
- (bool)resetWithError:(id*)arg1;
- (void)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(bool)arg3;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
