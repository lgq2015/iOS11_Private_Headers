/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityElementTraversalOptions : NSObject {
    long long  _direction;
    bool  _forSpeakScreen;
    bool  _ignoreObscuresScreen;
    bool  _includeAncestorsOfSelfInSiblingMatch;
    bool  _includeHiddenViews;
    id /* block */  _leafNodePredicate;
    bool  _shouldIncludeKeyboardObscuredElements;
    bool  _shouldIncludeStatusBarWindow;
    bool  _shouldOnlyIncludeElementsWithVisibleFrame;
    bool  _shouldReturnScannerGroups;
    bool  _shouldUseAllSubviews;
    bool  _sorted;
}

@property (nonatomic) long long direction;
@property (nonatomic) bool forSpeakScreen;
@property (nonatomic) bool ignoreObscuresScreen;
@property (nonatomic) bool includeAncestorsOfSelfInSiblingMatch;
@property (nonatomic) bool includeHiddenViews;
@property (nonatomic, copy) id /* block */ leafNodePredicate;
@property (nonatomic) bool shouldIncludeKeyboardObscuredElements;
@property (nonatomic) bool shouldIncludeStatusBarWindow;
@property (nonatomic) bool shouldOnlyIncludeElementsWithVisibleFrame;
@property (nonatomic) bool shouldReturnScannerGroups;
@property (nonatomic) bool shouldUseAllSubviews;
@property (nonatomic) bool sorted;

+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)defaultVoiceOverOptions;
+ (id)options;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(bool)arg1;

- (void).cxx_destruct;
- (id)description;
- (long long)direction;
- (bool)forSpeakScreen;
- (bool)ignoreObscuresScreen;
- (bool)includeAncestorsOfSelfInSiblingMatch;
- (bool)includeHiddenViews;
- (id)init;
- (id /* block */)leafNodePredicate;
- (void)setDirection:(long long)arg1;
- (void)setForSpeakScreen:(bool)arg1;
- (void)setIgnoreObscuresScreen:(bool)arg1;
- (void)setIncludeAncestorsOfSelfInSiblingMatch:(bool)arg1;
- (void)setIncludeHiddenViews:(bool)arg1;
- (void)setLeafNodePredicate:(id /* block */)arg1;
- (void)setShouldIncludeKeyboardObscuredElements:(bool)arg1;
- (void)setShouldIncludeStatusBarWindow:(bool)arg1;
- (void)setShouldOnlyIncludeElementsWithVisibleFrame:(bool)arg1;
- (void)setShouldReturnScannerGroups:(bool)arg1;
- (void)setShouldUseAllSubviews:(bool)arg1;
- (void)setSorted:(bool)arg1;
- (bool)shouldIncludeKeyboardObscuredElements;
- (bool)shouldIncludeStatusBarWindow;
- (bool)shouldOnlyIncludeElementsWithVisibleFrame;
- (bool)shouldReturnScannerGroups;
- (bool)shouldUseAllSubviews;
- (bool)sorted;

@end
