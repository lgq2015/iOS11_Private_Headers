/* made by EzioChiu.
 */

@protocol DDParsecHostVCInterface

@required

- (void)getStatusBarHidden:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)interactionEndedWithPunchout:(bool)arg1;
- (void)openParsecURL:(NSURL *)arg1;
- (void)openTrailerPunchout:(SFPunchout *)arg1;
- (void)showingErrorView:(bool)arg1;
- (void)showingFTE:(bool)arg1;

@end