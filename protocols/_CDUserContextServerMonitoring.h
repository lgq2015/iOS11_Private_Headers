/* made by EzioChiu.
 */

@protocol _CDUserContextServerMonitoring <NSObject>

@required

- (void)handleContextualChange:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)handleRegistrationCompleted:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
