/* made by EzioChiu.
 */

@protocol _SFPrintControllerDelegate <NSObject>

@required

- (bool)printControllerCanPresentPrintUI:(_SFPrintController *)arg1;
- (bool)printControllerPageIsLoading:(_SFPrintController *)arg1;
- (bool)printControllerShouldPrintReader:(_SFPrintController *)arg1;

@optional

- (NSString *)URLStringForPrintController:(_SFPrintController *)arg1;
- (NSString *)loadingDialogPageTitleForPrintController:(_SFPrintController *)arg1;
- (NSString *)pageTitleForPrintController:(_SFPrintController *)arg1;
- (void)printController:(_SFPrintController *)arg1 didCreatePrintInfo:(UIPrintInfo *)arg2;

@end
