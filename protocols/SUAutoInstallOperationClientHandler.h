/* made by EzioChiu.
 */

@protocol SUAutoInstallOperationClientHandler <NSObject>

@required

- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpire;
- (void)_noteAutoInstallOperationIsReadyToInstall:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)_noteAutoInstallOperationWasCancelled;
- (NSString *)uniqueIdentifier;

@end
