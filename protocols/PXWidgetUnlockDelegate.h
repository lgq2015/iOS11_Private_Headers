/* made by EzioChiu.
 */

@protocol PXWidgetUnlockDelegate <NSObject>

@required

- (void)widget:(void *)arg1 performAfterUnlockingDeviceIfNecessary:(void *)arg2 failurehandler:(void *)arg3; // needs 3 arg types, found 11: <PXWidget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (bool)widgetDeviceIsUnlocked:(id <PXWidget>)arg1;

@end
