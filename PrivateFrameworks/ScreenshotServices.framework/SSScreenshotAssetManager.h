/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSScreenshotAssetManager : NSObject {
    <SSScreenshotAssetManagerBackend> * _backend;
}

+ (id)sharedAssetManager;

- (void).cxx_destruct;
- (id)backend;
- (void)imageWithPreviouslyRegisteredIdentifier:(id)arg1 withAccessBlock:(id /* block */)arg2;
- (void)recordEditsToPersistable:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)registerImageForPersistable:(id)arg1 withRegistrationBlock:(id /* block */)arg2;
- (void)removePersistable:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)resetBackend;
- (void)setBackend:(id)arg1;

@end
