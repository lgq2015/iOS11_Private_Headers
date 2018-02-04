/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchHeader : UIView <MFAtomTextViewDelegate, UITextFieldDelegate> {
    UIButton * _cancelButton;
    NSLayoutConstraint * _cancelButtonTrailingConstraint;
    <SPUISearchHeaderDelegate> * _delegate;
    _UILegibilitySettings * _legibilitySettings;
    bool  _offersCompletions;
    SPSearchEntity * _searchEntity;
    SPUITextField * _searchField;
    NSLayoutConstraint * _searchFieldTrailingConstraint;
    bool  _searchTextScheduledForProcessing;
    unsigned long long  _suggestionID;
    NSLayoutConstraint * _widthConstraint;
    bool  _willClear;
}

@property (retain) UIButton *cancelButton;
@property (retain) NSLayoutConstraint *cancelButtonTrailingConstraint;
@property (nonatomic, readonly) NSString *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property <SPUISearchHeaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property bool offersCompletions;
@property (retain) NSArray *representedObjects;
@property (nonatomic, retain) SPSearchEntity *searchEntity;
@property (retain) SPUITextField *searchField;
@property (retain) NSLayoutConstraint *searchFieldTrailingConstraint;
@property bool searchTextScheduledForProcessing;
@property unsigned long long suggestionID;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *widthConstraint;
@property bool willClear;

- (void).cxx_destruct;
- (void)_searchWithSearchEntity:(id)arg1 fromSuggestion:(bool)arg2;
- (void)_updateClearButtonVisibility;
- (void)addInputMethodInformationToQueryContext:(id)arg1;
- (id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2;
- (id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
- (bool)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;
- (id)backdropVisualEffectView;
- (void)beginDictation;
- (id)cancelButton;
- (void)cancelButtonClicked:(id)arg1;
- (bool)cancelButtonIsVisible;
- (id)cancelButtonTrailingConstraint;
- (void)changeOrientation:(id)arg1;
- (void)clearSearchFieldWhyQuery:(unsigned long long)arg1 allowZKW:(bool)arg2;
- (id)currentQuery;
- (id)currentQueryContextWithString:(id)arg1;
- (id)delegate;
- (void)dictationButtonPressed;
- (void)enableDictationIfRequired;
- (void)focusSearchField;
- (void)focusSearchFieldAndBeginDictation:(bool)arg1;
- (id)init;
- (bool)isOnDarkBackground;
- (id)legibilitySettings;
- (bool)offersCompletions;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(long long)arg3;
- (id)representedObjects;
- (id)searchEntity;
- (id)searchField;
- (bool)searchFieldIsFocused;
- (id)searchFieldTrailingConstraint;
- (void)searchForQuery:(id)arg1 forSuggestions:(bool)arg2;
- (void)searchForSuggestion:(id)arg1;
- (bool)searchTextScheduledForProcessing;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonTrailingConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOffersCompletions:(bool)arg1;
- (void)setRepresentedObjects:(id)arg1;
- (void)setSearchEntity:(id)arg1;
- (void)setSearchEntity:(id)arg1 fromSuggestion:(bool)arg2;
- (void)setSearchField:(id)arg1;
- (void)setSearchFieldTrailingConstraint:(id)arg1;
- (void)setSearchTextScheduledForProcessing:(bool)arg1;
- (void)setSuggestionID:(unsigned long long)arg1;
- (void)setWidthConstraint:(id)arg1;
- (void)setWillClear:(bool)arg1;
- (void)setupKeyboardSupportForResultViewController:(id)arg1;
- (void)showCancelButton:(bool)arg1 animated:(bool)arg2;
- (unsigned long long)suggestionID;
- (id)supportedPasteboardTypesForAtomTextView:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(bool)arg3;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(bool)arg3 sourcePreference:(unsigned long long)arg4 engagedSuggestion:(id)arg5;
- (void)textFieldDidBeginEditing;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn;
- (double)topPadding;
- (void)triggerSearchForUnlock;
- (void)unfocusSearchField;
- (void)updateBlurProgress:(double)arg1;
- (void)updateColors;
- (id)widthConstraint;
- (bool)willClear;

@end
