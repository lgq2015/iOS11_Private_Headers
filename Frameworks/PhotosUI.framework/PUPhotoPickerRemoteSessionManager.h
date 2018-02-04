/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerRemoteSessionManager : NSObject {
    NSArray * _allowedViewControlerClassNames;
    NSMutableDictionary * _viewControllerByRequestIdentifier;
    NSObject<OS_dispatch_queue> * _viewControllerByRequestIdentifierIsolationQueue;
}

@property (nonatomic, copy) NSArray *allowedViewControlerClassNames;
@property (nonatomic, retain) NSMutableDictionary *viewControllerByRequestIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *viewControllerByRequestIdentifierIsolationQueue;

+ (id)sharedPhotoPickerSessionManager;

- (void).cxx_destruct;
- (id)_popViewControllerForRequestIdentifier:(id)arg1;
- (id)allowedViewControlerClassNames;
- (id)init;
- (bool)isAllowedViewControllerClassName:(id)arg1;
- (id)popViewControllerForRequestIdentifier:(id)arg1;
- (void)setAllowedViewControlerClassNames:(id)arg1;
- (void)setViewController:(id)arg1 forRequestIdentifier:(id)arg2;
- (void)setViewControllerByRequestIdentifier:(id)arg1;
- (void)setViewControllerByRequestIdentifierIsolationQueue:(id)arg1;
- (id)viewControllerByRequestIdentifier;
- (id)viewControllerByRequestIdentifierIsolationQueue;

@end
