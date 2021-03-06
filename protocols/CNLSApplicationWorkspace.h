/* made by EzioChiu.
 */

@protocol CNLSApplicationWorkspace <NSObject>

@required

- (CNApplicationProxy *)applicationForBundleIdentifier:(NSString *)arg1;
- (NSArray *)applicationsAvailableForHandlingURLScheme:(NSString *)arg1;
- (NSArray *)applicationsForUserActivityType:(NSString *)arg1;
- (CNObservable *)observableForApplicationsChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
- (void)openUserActivity:(void *)arg1 inApplication:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSUserActivity *, CNApplicationProxy *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
