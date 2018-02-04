/* made by EzioChiu.
 */

@protocol BFFFlowItem <NSObject>

@required

+ (NSString *)cloudConfigSkipKey;

- (void)setDelegate:(id <BFFFlowItemDelegate>)arg1;

@optional

+ (bool)controllerAffectedByTapFreeSetup;
+ (bool)controllerNeedsToRun;
+ (void)skippedByCloudConfig;

- (void)cancelHostedPresentation;
- (bool)controllerAllowsNavigatingBack;
- (void)controllerWasPopped;
- (void)handleDebugGesture;
- (bool)isEphemeral;
- (void)performExtendedInitializationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentHostedViewControllerOnNavigationController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: BFFNavigationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)setNavigationController:(BFFNavigationController *)arg1;
- (bool)shouldAllowStartOver;
- (bool)shouldSuppressExtendedInitializationActivityIndicator;
- (void)startOver;
- (UIViewController *)viewController;
- (void)willDisplayStartOver;

@end
