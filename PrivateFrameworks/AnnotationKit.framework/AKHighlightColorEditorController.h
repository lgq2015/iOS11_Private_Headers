/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKHighlightColorEditorController : AKAnnotationPopoverViewController <UIPopoverControllerDelegate> {
    UIAlertController * _alertController;
    int  _pageTheme;
    UIButton * mAddNoteButton;
    AKCalloutBar * mCalloutBar;
    UIView * mColorControls;
    UIButton * mDeleteButton;
    UIButton * mRightArrowButton;
    UIButton * mShareButton;
}

@property (nonatomic, retain) UIButton *addNoteButton;
@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, retain) AKCalloutBar *calloutBar;
@property (nonatomic, retain) UIView *colorControls;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIButton *deleteButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pageTheme;
@property (nonatomic, retain) UIButton *rightArrowButton;
@property (nonatomic, retain) UIButton *shareButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addNoteButton;
- (id)alertController;
- (id)calloutBar;
- (bool)canPresentInPosition:(int)arg1;
- (id)colorControls;
- (id)deleteButton;
- (void)didShow;
- (void)handleAddNoteButton:(id)arg1;
- (void)handleDeleteButtonTap:(id)arg1;
- (void)handleRightArrowButton:(id)arg1;
- (void)handleShareButton:(id)arg1;
- (void)loadView;
- (id)localizedAccessibilityStringForStyle:(long long)arg1;
- (id)p_buildPaletteImageForFrontTag:(long long)arg1 middleTag:(long long)arg2 backTag:(long long)arg3 pageTheme:(int)arg4;
- (long long)p_buttonTagForTheme:(id)arg1;
- (id)p_colorControlImageForColor:(id)arg1;
- (id)p_colorControlImageForColor:(id)arg1 withForegroundImage:(id)arg2;
- (id)p_colorControlImageForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_colorControlUnderlineImageForPageTheme:(int)arg1;
- (id)p_colorForTag:(long long)arg1 pageTheme:(int)arg2;
- (void)p_drawColorControlCircleWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2;
- (void)p_drawCrescentWithCircleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 leftShift:(double)arg3 addRadius:(double)arg4;
- (id)p_monochromaticImageFromImage:(id)arg1 withColor:(id)arg2;
- (id)p_noteGlyphForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_paletteImageForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_paletteImageWithFrontColor:(id)arg1 middleColor:(id)arg2 backColor:(id)arg3 frontForegroundImage:(id)arg4;
- (void)p_postDeleteConfirmation;
- (void)p_removeAnnotation:(id)arg1;
- (void)p_setStyle:(long long)arg1 forAnnotation:(id)arg2;
- (bool)p_shouldShowCompactMenu;
- (bool)p_shouldShowShareButton;
- (id)p_themeForStyle:(long long)arg1 pageTheme:(int)arg2;
- (id)p_underlineForegroundImageForPageTheme:(int)arg1;
- (void)p_updateAppearance;
- (int)pageTheme;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 view:(id)arg2;
- (void)releaseOutlets;
- (id)rightArrowButton;
- (void)setAddNoteButton:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setCalloutBar:(id)arg1;
- (void)setColorControls:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setPageTheme:(int)arg1;
- (void)setPosition:(int)arg1;
- (void)setRightArrowButton:(id)arg1;
- (void)setShareButton:(id)arg1;
- (id)shareButton;
- (void)showColorControlsMenu:(id)arg1;
- (void)useColorOf:(id)arg1;
- (void)viewDidLoad;
- (void)willShow;

@end
