/* made by EzioChiu.
 */

@protocol CDPDCircleDelegate

@required

- (void)circleController:(void *)arg1 secureBackupRecordsArePresentWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CDPDCircleController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (CDPContext *)contextForController:(CDPDCircleController *)arg1;
- (CDPDSecureChannelContext *)secureChannelContextForController:(CDPDCircleController *)arg1;

@end
