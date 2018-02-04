/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate> {
    UIAlertController * _alertController;
    id /* block */  _completionHandler;
}

@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cancelLocalizedString;
+ (id)_detachAllLocalizedString;
+ (id)_detachFutureLocalizedString;
+ (int)_determineChoicesForEvent:(id)arg1 options:(unsigned long long)arg2;
+ (id)newAlertControllerWithCompletionHandler:(id /* block */)arg1;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 stringForDeleteButton:(id)arg4 withCompletionHandler:(id /* block */)arg5;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 withCompletionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 stringForDeleteButton:(id)arg4;
- (void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3;
- (bool)_useSheetForViewController:(id)arg1 options:(unsigned long long)arg2;
- (void)cancelAnimated:(bool)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
