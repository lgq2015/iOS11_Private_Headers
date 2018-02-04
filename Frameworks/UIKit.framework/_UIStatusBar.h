/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBar : UIView <UIAccessibilityHUDGestureHosting, UIGestureRecognizerDelegate> {
    UIAccessibilityHUDGestureManager * _accessibilityHUDGestureManager;
    _UIStatusBarAction * _action;
    UIGestureRecognizer * _actionGestureRecognizer;
    _UIStatusBarData * _currentAggregatedData;
    _UIStatusBarData * _currentData;
    _UIStatusBarDataAggregator * _dataAggregator;
    NSMutableDictionary * _displayItemStates;
    NSArray * _enabledPartIdentifiers;
    UIColor * _foregroundColor;
    UIView * _foregroundView;
    NSMutableDictionary * _items;
    long long  _mode;
    NSDictionary * _regions;
    long long  _style;
    _UIStatusBarStyleAttributes * _styleAttributes;
    _UIStatusBarRegion * _targetRegion;
    id /* block */  _updateCompletionHandler;
    <_UIStatusBarVisualProvider> * _visualProvider;
}

@property (nonatomic, retain) UIAccessibilityHUDGestureManager *accessibilityHUDGestureManager;
@property (nonatomic, retain) _UIStatusBarAction *action;
@property (nonatomic, readonly) UIGestureRecognizer *actionGestureRecognizer;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) _UIStatusBarData *currentAggregatedData;
@property (nonatomic, readonly) _UIStatusBarData *currentData;
@property (nonatomic, retain) _UIStatusBarDataAggregator *dataAggregator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *displayItemStates;
@property (nonatomic, copy) NSArray *enabledPartIdentifiers;
@property (nonatomic, copy) UIColor *foregroundColor;
@property (nonatomic, retain) UIView *foregroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *items;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) NSDictionary *regions;
@property (nonatomic) long long style;
@property (nonatomic, retain) _UIStatusBarStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) _UIStatusBarRegion *targetRegion;
@property (nonatomic, copy) id /* block */ updateCompletionHandler;
@property (nonatomic, retain) <_UIStatusBarVisualProvider> *visualProvider;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
- (void)_delayUpdatesWithKeys:(id)arg1 fromAnimation:(id)arg2;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
- (id)_displayItemsForPartWithIdentifier:(id)arg1;
- (bool)_forceLayoutEngineSolutionInRationalEdges;
- (bool)_gestureRecognizer:(id)arg1 isInsideRegion:(id)arg2;
- (void)_performAnimations:(id)arg1;
- (void)_performWithMatchingCAAnimations:(id /* block */)arg1;
- (void)_prepareAnimations:(id)arg1;
- (void)_rearrangeOverflowedItems;
- (id)_regionsForPartWithIdentifier:(id)arg1;
- (id)_statusBarWindowForAccessibilityHUD;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3;
- (void)_updateRegionItems;
- (void)_updateWithAggregatedData:(id)arg1;
- (void)_updateWithData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accessibilityHUDGestureManager;
- (id)action;
- (id)actionForPartWithIdentifier:(id)arg1;
- (id)actionGestureRecognizer;
- (id)containerView;
- (id)currentAggregatedData;
- (id)currentData;
- (id)dataAggregator;
- (id)dataEntryKeysForItemsWithIdentifiers:(id)arg1;
- (id)description;
- (id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (id)displayItemStates;
- (id)displayItemWithIdentifier:(id)arg1;
- (id)enabledPartIdentifiers;
- (id)foregroundColor;
- (id)foregroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDisplayItemWithIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPartWithIdentifier:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)itemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (id)items;
- (id)itemsDependingOnKeys:(id)arg1;
- (void)layoutSubviews;
- (long long)mode;
- (id)regionWithIdentifier:(id)arg1;
- (id)regions;
- (void)resetVisualProvider;
- (void)setAccessibilityHUDGestureManager:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setDataAggregator:(id)arg1;
- (void)setDisplayItemStates:(id)arg1;
- (void)setEnabledPartIdentifiers:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundView:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setTargetRegion:(id)arg1;
- (void)setUpdateCompletionHandler:(id /* block */)arg1;
- (void)setVisualProvider:(id)arg1;
- (id)stateForDisplayItemWithIdentifier:(id)arg1;
- (void)statusBarGesture:(id)arg1;
- (long long)style;
- (id)styleAttributes;
- (id)targetRegion;
- (void)traitCollectionDidChange:(id)arg1;
- (id /* block */)updateCompletionHandler;
- (void)updateWithAnimations:(id)arg1;
- (void)updateWithData:(id)arg1;
- (id)visualProvider;

// Image: /bootstrap/Library/SBInject/LittleX.dylib

+ (bool)forceSplit;
+ (double)heightForOrientation:(long long)arg1;
+ (void)initialize;
+ (void)setDefaultVisualProviderClass:(Class)arg1;
+ (void)setForceSplit:(bool)arg1;

- (void)_prepareVisualProviderIfNeeded;

@end
