/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INVocabularyStoreManager : NSObject {
    NSBundle * _appBundle;
    NSString * _appBundleID;
    NSString * _appBundlePath;
    NSString * _baseDirectoryPath;
    NSObject<OS_dispatch_queue> * _queue;
    _INVocabularyValidator * _validator;
}

@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic, copy) NSString *appBundlePath;
@property (nonatomic, readonly, copy) NSString *baseDirectoryPath;

+ (id)_customVocabularyDirectory;
+ (id)_globalClassQueue;
+ (id)_hashOfAppPath:(id)arg1;
+ (void)_iterateVocabularyWithSummary:(id)arg1 optionalBlock:(id /* block */)arg2;
+ (id)_latestVocabularyStringsAt:(id)arg1;
+ (id)appDatastoreDirectoryForAppBundleID:(id)arg1 bundlePath:(id)arg2;
+ (void)deleteAllUserVocabularyFromAllAppsAsync;
+ (void)enumerateVocabularyUsingBlock:(id /* block */)arg1;
+ (id)managerForBundleID:(id)arg1 bundlePath:(id)arg2;
+ (id)savedCustomVocabularyOverviewDictionary;

- (void).cxx_destruct;
- (id)_appBundle;
- (id)_baseDirectoryPathForIntentSlot:(id)arg1;
- (id)_documentWithItems:(id)arg1 forIntentSlot:(id)arg2;
- (id)_validator;
- (void)_writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(id /* block */)arg3;
- (id)appBundleID;
- (id)appBundlePath;
- (id)baseDirectoryPath;
- (void)checkIfSyncSlot:(id)arg1 isAllowedWithCompletion:(id /* block */)arg2;
- (id)deleteEverything;
- (id)deleteIntentSlot:(id)arg1;
- (id)deleteVocabularyStoreItemAt:(id)arg1;
- (id)getPathToLatestVocabulary:(id*)arg1 pathDuringReading:(id*)arg2 sentVocabulary:(id*)arg3 forIntentSlot:(id)arg4;
- (id)init;
- (id)initWithBaseDirectory:(id)arg1 appBundleID:(id)arg2 appBundlePath:(id)arg3;
- (void)setAppBundleID:(id)arg1;
- (void)setAppBundlePath:(id)arg1;
- (void)writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(id /* block */)arg3;

@end
