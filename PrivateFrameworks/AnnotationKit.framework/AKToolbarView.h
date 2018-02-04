/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolbarView : UIView <AKAttributePickerViewControllerDelegate, AKSignatureCreationControllerDelegate, AKSignaturesViewControllerDelegate, AKToolsListViewControllerDelegate, PKInlineColorPickerDelegate, PKInlineInkPickerDelegate, UIPopoverPresentationControllerDelegate> {
    bool  _alwaysShowUndoButton;
    AKController * _annotationController;
    AKAttributePickerViewController * _attributePickerViewController;
    UIBarButtonItem * _attributesAddShapeFixedSpace;
    UIBarButtonItem * _attributesPickerButton;
    AKToolbarBackgroundView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedSafeAreaInsets;
    NSLayoutConstraint * _colorPickerBottomConstraint;
    NSLayoutConstraint * _colorPickerWidthConstraint;
    PKInlineColorPicker * _compactColorPicker;
    UIBarButtonItem * _currentColorButton;
    bool  _expandCompactColorPicker;
    NSLayoutConstraint * _heightConstraint;
    PKInlineInkPicker * _pencilTools;
    NSLayoutConstraint * _pencilToolsBottomConstraint;
    NSLayoutConstraint * _pencilToolsWidthConstraint;
    UIBarButtonItem * _redoButton;
    UIBarButtonItem * _shapesPickerButton;
    UIBarButtonItem * _shareButton;
    bool  _shareButtonHidden;
    bool  _shouldUseCachedSafeAreaInsets;
    bool  _showAttributePicker;
    UIAlertController * _signaturesAlertController;
    AKSignatureCreationViewController_iOS * _signaturesCreationController;
    AKSignaturesViewController_iOS * _signaturesSheetViewController;
    AKTextAttributesViewController * _textAttributesViewController;
    UIToolbar * _toolbar;
    NSLayoutConstraint * _toolbarBottomConstraint;
    AKToolsListViewController * _toolsListViewController;
    bool  _translucent;
    UIAlertController * _undoAlertController;
    UIBarButtonItem * _undoButton;
    bool  _undoRedoButtonsHidden;
    UIBarButtonItem * _undoRedoFixedSpace;
    bool  _useThickInks;
}

@property (nonatomic) bool alwaysShowUndoButton;
@property (nonatomic) AKController *annotationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SEL shareButtonAction;
@property (getter=isShareButtonHidden, nonatomic) bool shareButtonHidden;
@property (nonatomic) id shareButtonTarget;
@property (readonly) Class superclass;
@property (getter=isTranslucent, nonatomic) bool translucent;
@property (nonatomic) bool undoRedoButtonsHidden;
@property (nonatomic) bool useThickInks;

+ (id)redoButtonImage;
+ (id)undoButtonImage;

- (void).cxx_destruct;
- (void)_annotationSelectionNotification:(id)arg1;
- (void)_cleanupAfterUndoAlert;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_inkPicker:(id)arg1 didPickColor:(id)arg2;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2;
- (void)_redo:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsWithCachingIfNeeded;
- (void)_saveCachedSafeAreaInsets;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2;
- (void)_shouldUseCachedSafeAreaInsets:(bool)arg1;
- (void)_showColorPicker:(id)arg1;
- (void)_showMarkupToolsPopover:(id)arg1;
- (void)_showShapeAttributes:(id)arg1;
- (void)_showShapeAttributesPopover:(id)arg1;
- (void)_showShapesPicker:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1;
- (void)_showTextAttributes:(id)arg1;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showUndoAlertPopover:(id)arg1;
- (void)_undo:(id)arg1;
- (void)_undoAll:(id)arg1;
- (void)_undoLongPress:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)alwaysShowUndoButton;
- (id)annotationController;
- (void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3;
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(bool)arg2;
- (id)createUndoViewController;
- (void)dealloc;
- (void)dismissPresentedPopovers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)inlineInkPicker:(id)arg1 didSelectColor:(id)arg2;
- (void)inlineInkPicker:(id)arg1 didSelectTool:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPresentingPopover;
- (bool)isPresentingPopovers;
- (bool)isShareButtonHidden;
- (bool)isTranslucent;
- (unsigned long long)layoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popoverPresentingController;
- (id)presentedViewController;
- (void)resetToLastDrawingTool;
- (void)revalidateItems;
- (void)setAlwaysShowUndoButton:(bool)arg1;
- (void)setAnnotationController:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setOpaque:(bool)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setShareButtonAction:(SEL)arg1;
- (void)setShareButtonHidden:(bool)arg1;
- (void)setShareButtonTarget:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)setUndoRedoButtonsHidden:(bool)arg1;
- (void)setUseThickInks:(bool)arg1;
- (SEL)shareButtonAction;
- (id)shareButtonTarget;
- (bool)shouldUseCompactHeight;
- (bool)shouldUseCompactWidth;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)undoRedoButtonsHidden;
- (void)upateAttributesPickerButtonWithCurrentSelection:(id)arg1;
- (bool)useThickInks;

@end
