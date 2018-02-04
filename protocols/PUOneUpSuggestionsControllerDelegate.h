/* made by EzioChiu.
 */

@protocol PUOneUpSuggestionsControllerDelegate <NSObject>

@optional

- (bool)oneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1 canShowSuggestion:(PUOneUpSuggestion *)arg2 forAssetReference:(PUAssetReference *)arg3;
- (void)oneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1 didSelectSuggestion:(PUOneUpSuggestion *)arg2 forAssetReference:(PUAssetReference *)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1 frameForAssetReference:(PUAssetReference *)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (UIViewController *)viewControllerForOneUpSuggestionsController:(PUOneUpSuggestionsController *)arg1;

@end
