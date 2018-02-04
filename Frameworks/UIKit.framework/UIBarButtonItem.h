/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBarButtonItem : UIBarItem <MFPopoverPresentationSource, NSCoding, UISpringLoadedInteractionSupporting> {
    id /* block */  __autoValidationHandler;
    NSArray * __backButtonAlternateTitles;
    bool  __hidden;
    UIBarButtonItem * __itemVariation;
    bool  __needsViewUpdateForLetterpressImage;
    UIBarButtonItemGroup * __owningButtonGroup;
    UINavigationItem * __owningNavigationItem;
    UILayoutGuide * __popoverLayoutGuide;
    bool  __showsBackButtonIndicator;
    <_UIBarButtonItemViewOwner> * __viewOwner;
    bool  __viewWantsLetterpressImage;
    SEL  _action;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalSelectionInsets;
    id  _appearanceStorage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int isMinibarView : 1; 
        unsigned int disableAutosizing : 1; 
        unsigned int selected : 1; 
        unsigned int imageHasEffects : 1; 
        unsigned int actsAsFakeBackButton : 1; 
        unsigned int springLoaded : 1; 
        unsigned int showsChevron : 1; 
        unsigned int wantsThreeUp : 1; 
    }  _barButtonItemFlags;
    UIBarButtonItemGroup * _buttonGroup;
    bool  _flexible;
    NSArray * _gestureRecognizers;
    bool  _groupRepresentative;
    UIImage * _image;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    NSArray * _interactions;
    UIImage * _landscapeImagePhone;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeImagePhoneInsets;
    double  _maximumWidth;
    double  _minimumWidth;
    NSSet * _possibleSystemItems;
    NSSet * _possibleTitles;
    NSDictionary * _stylesForSizingTitles;
    id  _target;
    NSString * _title;
    double  _toolbarCharge;
    UIView * _view;
    double  _width;
}

@property (setter=_setAdditionalSelectionInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;
@property (setter=_setAutoValidationHandler:, nonatomic, copy) id /* block */ _autoValidationHandler;
@property (setter=_setBackButtonAlternateTitles:, nonatomic, copy) NSArray *_backButtonAlternateTitles;
@property (setter=_setFlexible:, nonatomic) bool _flexible;
@property (setter=_setGestureRecognizers:, nonatomic, retain) NSArray *_gestureRecognizers;
@property (setter=_setHidden:, nonatomic) bool _hidden;
@property (setter=_setImageHasEffects:, nonatomic) bool _imageHasEffects;
@property (setter=_setInteractions:, nonatomic, retain) NSArray *_interactions;
@property (setter=_setItemVariation:, nonatomic, retain) UIBarButtonItem *_itemVariation;
@property (setter=_setMaximumWidth:, nonatomic) double _maximumWidth;
@property (setter=_setMinimumWidth:, nonatomic) double _minimumWidth;
@property (nonatomic, readonly) bool _needsViewUpdateForLetterpressImage;
@property (setter=_setOwningButtonGroup:, nonatomic) UIBarButtonItemGroup *_owningButtonGroup;
@property (setter=_setOwningNavigationItem:, nonatomic) UINavigationItem *_owningNavigationItem;
@property (setter=_setPopoverLayoutGuide:, nonatomic, retain) UILayoutGuide *_popoverLayoutGuide;
@property (setter=_setPossibleItemVariations:, nonatomic, copy) NSSet *_possibleItemVariations;
@property (setter=_sf_setLongPressEnabled:, nonatomic) bool _sf_longPressEnabled;
@property (setter=_setShowsBackButtonIndicator:, nonatomic) bool _showsBackButtonIndicator;
@property (setter=_setStylesForSizingTitles:, nonatomic, copy) NSDictionary *_stylesForSizingTitles;
@property (nonatomic, readonly) UIToolbarButton *_toolbarButton;
@property (setter=_setToolbarCharge:, nonatomic) double _toolbarCharge;
@property (setter=_setViewOwner:, nonatomic) <_UIBarButtonItemViewOwner> *_viewOwner;
@property (nonatomic, readonly) bool _viewWantsLetterpressImage;
@property (nonatomic) SEL action;
@property (nonatomic, readonly) UIBarButtonItemGroup *buttonGroup;
@property (nonatomic, retain) UIView *customView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) bool groupRepresentative;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemItem;
@property (getter=_possibleSystemItems, setter=_setPossibleSystemItems:, nonatomic, copy) NSSet *possibleSystemItems;
@property (nonatomic, copy) NSSet *possibleTitles;
@property (nonatomic) bool selected;
@property (getter=isSpringLoaded, nonatomic) bool springLoaded;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long systemItem;
@property (nonatomic) id target;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) double width;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_appearanceBlindViewClasses;
+ (void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;
+ (Class)classForNavigationButton;
+ (Class)classForToolbarButton;

- (void).cxx_destruct;
- (bool)_actsAsFakeBackButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (id)_appearanceStorage;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (id /* block */)_autoValidationHandler;
- (id)_backButtonAlternateTitles;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_executeValidationHandler;
- (bool)_flexible;
- (id)_foregroundColorForLetterpressWithView:(id)arg1;
- (id)_gestureRecognizers;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize { double x1; double x2; }*)arg1 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 landscape:(bool)arg3;
- (void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8;
- (void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg1 forBarStyle:(long long)arg2 landscape:(bool)arg3 alwaysBordered:(bool)arg4;
- (bool)_hidden;
- (id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (bool)_imageHasEffects;
- (id)_interactions;
- (id)_internalLargeContentSizeImage;
- (bool)_isImageBarButtonItem;
- (id)_itemForPresenting;
- (id)_itemVariation;
- (double)_leftImagePaddingForEdgeMarginInNavBar;
- (double)_maximumWidth;
- (id)_miniImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_miniImageInsets;
- (double)_minimumWidth;
- (bool)_needsViewUpdateForLetterpressImage;
- (id)_owningButtonGroup;
- (id)_owningNavigationItem;
- (id)_popoverLayoutGuide;
- (id)_possibleItemVariations;
- (id)_possibleSystemItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPresenting;
- (double)_rightImagePaddingForEdgeMarginInNavBar;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setActsAsFakeBackButton:(bool)arg1;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAutoValidationHandler:(id /* block */)arg1;
- (void)_setBackButtonAlternateTitles:(id)arg1;
- (void)_setButtonGroup:(id)arg1 isRepresentative:(bool)arg2;
- (void)_setEnclosingBar:(id)arg1 onItem:(id)arg2;
- (void)_setFlexible:(bool)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setImageHasEffects:(bool)arg1;
- (void)_setInteractions:(id)arg1;
- (void)_setItemVariation:(id)arg1;
- (void)_setMaximumWidth:(double)arg1;
- (void)_setMiniImage:(id)arg1;
- (void)_setMiniImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setMinimumWidth:(double)arg1;
- (void)_setOwningButtonGroup:(id)arg1;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_setPopoverLayoutGuide:(id)arg1;
- (void)_setPossibleItemVariations:(id)arg1;
- (void)_setPossibleSystemItems:(id)arg1;
- (void)_setShowsBackButtonIndicator:(bool)arg1;
- (void)_setShowsChevron:(bool)arg1;
- (void)_setStylesForSizingTitles:(id)arg1;
- (void)_setSystemItem:(long long)arg1;
- (void)_setToolbarCharge:(double)arg1;
- (void)_setViewOwner:(id)arg1;
- (void)_setWantsThreeUp:(bool)arg1;
- (void)_setWidth:(double)arg1;
- (bool)_shouldBezelSystemButtonImage;
- (bool)_showsBackButtonIndicator;
- (bool)_showsChevron;
- (id)_stylesForSizingTitles;
- (id)_toolbarButton;
- (double)_toolbarCharge;
- (void)_updateView;
- (id)_viewForPresenting;
- (id)_viewOwner;
- (bool)_viewWantsLetterpressImage;
- (bool)_wantsThreeUp;
- (double)_width;
- (SEL)action;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct UIOffset { double x1; double x2; })backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)buttonGroup;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)customView;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)groupRepresentative;
- (bool)hasImage;
- (bool)hasTitle;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)init;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (bool)isCustomViewItem;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isMinibarView;
- (bool)isSpaceItem;
- (bool)isSpringLoaded;
- (bool)isSystemItem;
- (id)itemVariation;
- (id)landscapeImagePhone;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeImagePhoneInsets;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentSizeImageInsets;
- (id)nextResponder;
- (id)possibleTitles;
- (id)resolvedTitle;
- (bool)selected;
- (void)setAction:(SEL)arg1;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setCustomView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIsMinibarView:(bool)arg1;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLargeContentSizeImage:(id)arg1;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setView:(id)arg1;
- (void)setWidth:(double)arg1;
- (long long)style;
- (long long)systemItem;
- (id)target;
- (id)tintColor;
- (id)title;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)view;
- (double)width;
- (id)window;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)mf_setAsSourceForPopoverPresentationController:(id)arg1;
- (void)mf_setImageOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)mf_setImageVerticalOffset:(double)arg1;
- (void)mf_setLandscapeImagePhoneOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)mf_setLandscapeImagePhoneVerticalOffset:(double)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (double)_sf_longPressAllowableMovement;

- (bool)_sf_longPressEnabled;
- (void)_sf_setLongPressEnabled:(bool)arg1;
- (void)_sf_setLongPressTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/Frameworks/UIKit.framework/Frameworks/DocumentManager.framework/DocumentManager

- (bool)_doc_isMatchingUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)_ckBarButtonItemWithTitle:(id)arg1 style:(long long)arg2;
+ (id)ckCancelBarButtonItem;
+ (id)ckDoneBarButtonItem;
+ (id)ckEditBarButtonItem;
+ (id)ckEditDoneButtonPossibleItemVariations;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (id)nu_view;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)telephonyUI_fixedSpaceBarButtonItem;
+ (id)telephonyUI_flexibleSpaceBarButtonItem;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptButton:(id)arg1;

@end
