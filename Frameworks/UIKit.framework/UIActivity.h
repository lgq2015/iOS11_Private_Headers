/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving> {
    id /* block */  _activityCompletionWithItemsHandler;
    NSUUID * _activityUUID;
    long long  _defaultPriority;
    id /* block */  _didFinishPerformingActivityHandler;
    unsigned long long  _indexInApplicationDefinedActivities;
}

@property (nonatomic, copy) id /* block */ activityCompletionWithItemsHandler;
@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic, readonly) UIViewController *activityViewController;
@property (nonatomic, readonly) NSExtension *applicationExtension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFinishPerformingActivityHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexInApplicationDefinedActivities;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_activityImageForActionRepresentationImage:(id)arg1;
+ (id)_activityImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activitySettingsImageForApplication:(id)arg1;
+ (id)_defaultFallbackActivityType;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (Class)classForPreparingExtensionItemData;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;

- (void).cxx_destruct;
- (id)_activitySettingsImage;
- (bool)_activitySupportsPromiseURLs;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_beforeActivity;
- (id)_bundleIdentifierForActivityImageCreation;
- (bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (long long)_defaultSortGroup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_embeddedActivityViewController;
- (id)_encodableActivityImageConfiguration;
- (id)_encodableActivitySettingsImageConfiguration;
- (void)_injectedJavaScriptResult:(id)arg1;
- (bool)_isExecutedInProcess;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (bool)_wantsAttachmentURLItemData;
- (bool)_wantsThumbnailItemData;
- (void)_willPresentAsFormSheet;
- (id /* block */)activityCompletionWithItemsHandler;
- (void)activityDidFinish:(bool)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityUUID;
- (id)activityViewController;
- (id)applicationExtension;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id /* block */)didFinishPerformingActivityHandler;
- (unsigned long long)indexInApplicationDefinedActivities;
- (id)init;
- (void)performActivity;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setDidFinishPerformingActivityHandler:(id /* block */)arg1;
- (void)setIndexInApplicationDefinedActivities:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)ph_PhotosApplicationActivitiesTypePublish;
+ (id)ph_PhotosApplicationActivityTypeOrder;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (void)streamActivitiesWithCompletion:(id /* block */)arg1;

// Image: /bootstrap/Library/SBInject/AnemoneIcons.dylib

- (id)_activityImage;

@end
