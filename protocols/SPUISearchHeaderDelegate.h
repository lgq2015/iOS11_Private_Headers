/* made by EzioChiu.
 */

@protocol SPUISearchHeaderDelegate <NSObject>

@required

- (void)cancelButtonPressed;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 fromSearchHeader:(SPUISearchHeader *)arg2 allowZKW:(bool)arg3;

@end
