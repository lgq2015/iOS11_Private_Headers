/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAKAnnotationAdaptor : NSObject {
    PDFAKAnnotationAdaptorPrivate * _private;
}

@property (nonatomic, readonly) AKAnnotation *akAnnotation;
@property (nonatomic, readonly) PDFAnnotation *pdfAnnotation;

+ (id)_akAnnotationInstanceForPDFAnnotationSubtype:(id)arg1 withOptionalWidgetFieldType:(id)arg2;
+ (Class)_akAnnotationSubclassForWidgetFieldType:(id)arg1;
+ (id)_pdfAnnotationInstanceForAKAnnotation:(id)arg1;
+ (id)annotationAdaptorWithPDFAnnotation:(id)arg1 andCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg2 andPDFDictionary:(struct CGPDFDictionary { }*)arg3;
+ (id)newPDFAnnotationFromAKAnnotation:(id)arg1;

- (void).cxx_destruct;
- (id)_colorFromColorOrArray:(id)arg1;
- (void)_invalidateAppearanceStreamForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_syncAction:(id)arg1;
- (void)_syncAdditionalAction:(id)arg1;
- (void)_syncAnnotationTextForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncAppearanceDictionaryUpdatingEditsDisableAppearanceOverride:(bool)arg1;
- (void)_syncAppearanceState:(id)arg1;
- (void)_syncAppleExtras:(id)arg1;
- (void)_syncArrowHeadStyleForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncAuthorForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncBorder:(id)arg1;
- (void)_syncBorderStyle:(id)arg1;
- (void)_syncBoundingRectangleForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncChildAnnotationForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncColor:(id)arg1;
- (void)_syncColorForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncContents:(id)arg1;
- (void)_syncContentsForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncCornerRadiusForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncDashedForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncDate:(id)arg1;
- (void)_syncDefaultAppearance:(id)arg1;
- (void)_syncDestination:(id)arg1;
- (void)_syncEndPointForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncEverythingToAKAnnotation;
- (void)_syncEverythingToPDFAnnotation;
- (void)_syncFlags:(unsigned long long)arg1;
- (void)_syncHighlightingMode:(id)arg1;
- (void)_syncHighlightingStyleForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncIconName:(id)arg1;
- (void)_syncInkPathForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncInklist:(id)arg1;
- (void)_syncInteriorColor:(id)arg1;
- (void)_syncLineEndingStyles:(id)arg1;
- (void)_syncLinePoints:(id)arg1;
- (void)_syncModificationDateForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncName:(id)arg1;
- (void)_syncOpen:(bool)arg1;
- (void)_syncPage:(id)arg1;
- (void)_syncParent:(id)arg1;
- (void)_syncPopup:(id)arg1;
- (void)_syncQuadPoints:(id)arg1;
- (void)_syncQuadPointsForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncQuadding:(long long)arg1;
- (void)_syncRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_syncStartPointForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncStrokeWidthForAnnotation:(id)arg1 withKey:(id)arg2 andNewValue:(id)arg3;
- (void)_syncSubtype:(id)arg1;
- (void)_syncTextLabel:(id)arg1;
- (void)_syncWidgetAppearance:(id)arg1;
- (void)_syncWidgetDefaultValue:(id)arg1;
- (void)_syncWidgetFieldFlags:(unsigned long long)arg1;
- (void)_syncWidgetFieldType:(id)arg1;
- (void)_syncWidgetMaxLen:(unsigned long long)arg1;
- (void)_syncWidgetOptions:(id)arg1;
- (void)_syncWidgetTextLabelUI:(id)arg1;
- (void)_syncWidgetValue:(id)arg1;
- (void)_teardown;
- (void)_updateDashedPatternForStrokeWidth:(double)arg1 isDashed:(bool)arg2;
- (id)akAnnotation;
- (void)dealloc;
- (void)didRemoveValueForAnnotationKey:(id)arg1;
- (void)didReplaceAllValuesWithNewDictionary:(id)arg1 andOldDictionary:(id)arg2;
- (void)didSetValue:(id)arg1 forAnnotationKey:(id)arg2;
- (id)initWithPDFAnnotation:(id)arg1 andAKAnnotation:(id)arg2;
- (void)invalidateAppearanceStream;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pdfAnnotation;
- (void)teardown;

@end
