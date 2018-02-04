/* made by EzioChiu.
 */

@protocol HUPrototypeLayoutOptionsEditorViewControllerDelegate <NSObject>

@required

- (void)layoutOptionsEditor:(HUPrototypeLayoutOptionsEditorViewController *)arg1 didUpdateLayoutOptions:(HUGridLayoutOptions *)arg2;
- (void)layoutOptionsEditorDidFinish:(HUPrototypeLayoutOptionsEditorViewController *)arg1;

@end
