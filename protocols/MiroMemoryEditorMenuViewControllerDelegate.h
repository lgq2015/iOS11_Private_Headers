/* made by EzioChiu.
 */

@protocol MiroMemoryEditorMenuViewControllerDelegate <NSObject>

@required

- (unsigned long long)numberOfClipsInMovie;
- (void)prepareLayoutForCollapsedMode;
- (void)prepareLayoutForSpiltMode;
- (double)sequenceDuration;
- (void)showContentEditorViewController;
- (void)showDebugEditStylePickerViewController;
- (void)showDebugFilterPickerViewController;
- (void)showDebugTitleStylePickerViewController;
- (void)showDebugTransitionPickerViewController;
- (void)showDurationEditorViewController;
- (void)showKeyAssetSelectionPicker;
- (void)showMusicPickerViewController;
- (void)showTitleEditorViewController;

@end
