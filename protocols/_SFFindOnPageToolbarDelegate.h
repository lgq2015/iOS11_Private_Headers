/* made by EzioChiu.
 */

@protocol _SFFindOnPageToolbarDelegate

@required

- (void)done;
- (void)getShortMatchLabelText:(id*)arg1 longMatchLabelText:(id*)arg2;
- (bool)hasMatches;
- (void)next;
- (void)previous;
- (NSString *)textForToolbarLabel;
- (void)updateSearchText:(NSString *)arg1;

@end
