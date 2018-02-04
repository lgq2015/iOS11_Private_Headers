/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualMemoriesSettingsController : NSObject {
    NSMutableArray * _completionHandlers;
    NSMutableArray * _registrationIdentifiers;
    bool  _requestingUpdates;
    PXContextualMemoriesSettings * _settings;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, retain) NSMutableArray *registrationIdentifiers;
@property (getter=isRequestingUpdates, nonatomic) bool requestingUpdates;
@property (nonatomic, readonly) PXContextualMemoriesSettings *settings;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)completionHandlers;
- (id)init;
- (bool)isRequestingUpdates;
- (void)registerForLocationPrefetchingWithIdentifier:(id)arg1;
- (id)registrationIdentifiers;
- (void)requestUpdatedContextualMemoriesSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setRegistrationIdentifiers:(id)arg1;
- (void)setRequestingUpdates:(bool)arg1;
- (id)settings;
- (void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1;

@end
