/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATAssetManager : NSObject <ATAssetLinkControllerObserver, ATMessageLinkRequestHandler> {
    NSMutableSet * _allAssets;
    NSDictionary * _assetClients;
    NSMutableArray * _assets;
    NSMutableDictionary * _assetsByDataclass;
    NSMutableDictionary * _assetsByStoreID;
    unsigned long long  _completedAssets;
    NSMutableArray * _completedStoreAssets;
    NSDictionary * _legacyAssetClients;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _remainingAssetsByDataClass;
    NSObject<OS_dispatch_source> * _signalSource;
    unsigned long long  _totalAssetCount;
    NSMutableDictionary * _totalAssetCountByDataClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addAssets:(id)arg1 forDataClass:(id)arg2;
- (id)_assetForDataclass:(id)arg1 withIdentifier:(id)arg2;
- (void)_dumpStatusInformation;
- (void)_finishAsset:(id)arg1 forDataClass:(id)arg2;
- (void)_finishDataClassIfDone:(id)arg1;
- (void)_loadAssetClients;
- (void)_updateAsset:(id)arg1 withProgress:(float)arg2;
- (void)addObserver:(id)arg1;
- (id)allDataclasses;
- (id)assetForDataclass:(id)arg1 identifier:(id)arg2;
- (id)assetForStoreID:(long long)arg1;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (id)assetProgressForAllDataclasses;
- (id)assets;
- (id)assetsForDataclasses:(id)arg1;
- (unsigned long long)awaitingStoreCompletion;
- (id)bypassedRestoresForDataclass:(id)arg1;
- (void)cancelAssetForDataClass:(id)arg1 withIdentifier:(id)arg2;
- (unsigned long long)completedAssetCountForDataClasses:(id)arg1;
- (id)completedStoreAssets;
- (unsigned long long)currentAsset;
- (unsigned long long)currentAssetForDataclass:(id)arg1;
- (bool)dataclassIsEmpty:(id)arg1;
- (void)dealloc;
- (void)enqueueLegacyAssetsForDataClass:(id)arg1;
- (id)init;
- (bool)isEmpty;
- (id)legacyAssetsForDataClass:(id)arg1;
- (void)mapStoreIDToAsset:(id)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)prioritizeAssetForDataClass:(id)arg1 withIdentifier:(id)arg2;
- (unsigned long long)remainingRestoreAssetCountForDataClasses:(id)arg1;
- (unsigned long long)remainingSyncAssetCountForDataClasses:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (id)restoreAssetsForDataclass:(id)arg1;
- (id)restoreAssetsForDataclasses:(id)arg1;
- (id)storeAssetsForDataclass:(id)arg1;
- (unsigned long long)totalAssetCount;
- (unsigned long long)totalAssetCountForDataClasses:(id)arg1;
- (unsigned long long)totalAssetCountForDataclass:(id)arg1;

@end
