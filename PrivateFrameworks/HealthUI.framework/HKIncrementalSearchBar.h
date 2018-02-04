/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKIncrementalSearchBar : UIView {
    NSString * _matchDisplayText;
    _SearchBarContent * _searchBarContent;
}

@property (nonatomic, retain) NSString *matchDisplayText;
@property (nonatomic, readonly) _SearchBarContent *searchBarContent;
@property (nonatomic, retain) <HKIncrementalSearchBarDelegate> *searchBarDelegate;
@property (nonatomic, retain) NSString *searchText;

+ (bool)_hasUppercaseCharacters:(id)arg1;
+ (id)_patternFromSearchString:(id)arg1 quoteForJavascript:(bool)arg2;
+ (id)regularExpressionFromString:(id)arg1 quoteForJavascript:(bool)arg2 caseless:(bool*)arg3;

- (void).cxx_destruct;
- (void)_lowerKeyboard;
- (void)activateSearch:(bool)arg1;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)doneAction:(id)arg1;
- (id)init;
- (id)inputAccessoryView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)keyboardIsDown;
- (bool)keyboardIsUp;
- (id)matchDisplayText;
- (id)searchBarContent;
- (id)searchBarDelegate;
- (bool)searchIsActive;
- (void)searchKeyboardDidHide:(id)arg1;
- (id)searchText;
- (void)setDownEnabled:(bool)arg1;
- (void)setMatchDisplayText:(id)arg1;
- (void)setMatchDisplayVisible:(bool)arg1;
- (void)setSearchBarDelegate:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setUpEnabled:(bool)arg1;

@end
