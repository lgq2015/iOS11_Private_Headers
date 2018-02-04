/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSavedGameDocument : NSObject <NSFilePresenter> {
    NSString * _deviceName;
    NSURL * _fileURL;
    NSFileVersion * _fileVersion;
    bool  _hasConflict;
    bool  _isConflictVersion;
    NSDate * _modificationDate;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSFileVersion *fileVersion;
@property (nonatomic) bool hasConflict;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isConflictVersion;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSString *name;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

+ (id)currentDeviceName;

- (void)dealloc;
- (void)deleteAllVersionsIncludingCurrent:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)deleteConflictVersion:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)deviceName;
- (id)fileURL;
- (id)fileVersion;
- (bool)hasConflict;
- (id)initWithFileURL:(id)arg1;
- (bool)isConflictVersion;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (void)loadMetadataWithCompletionHandler:(id /* block */)arg1;
- (void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)metadata;
- (id)modificationDate;
- (id)name;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)saveData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDeviceName:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileVersion:(id)arg1;
- (void)setHasConflict:(bool)arg1;
- (void)setIsConflictVersion:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)updateConflictStateWithCompletionHandler:(id /* block */)arg1;
- (void)updateMetadata;

@end
