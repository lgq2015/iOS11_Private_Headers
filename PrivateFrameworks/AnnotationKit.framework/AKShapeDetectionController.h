/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKShapeDetectionController : NSObject {
    NSMutableArray * _candidateAKTags;
    NSMutableDictionary * _candidateAKTagsToAnnotationInfoMap;
    AKAnnotation * _candidateAnnotation;
    CHDrawing * _candidateDrawing;
    AKCandidatePickerView_iOS * _candidatePickerView;
    bool  _coalescesDoodles;
    AKController * _controller;
    <AKShapeDetectionControllerDelegate> * _delegate;
    bool  _isPreviousCandidateAnnotationUndecided;
    CHDrawing * _lastDrawing;
    AKPageModelController * _modelControllerToObserveForAnnotationsAndSelections;
    bool  _preferDoodle;
    bool  _shapeDetectionEnabled;
    CHRecognizer * _shapeRecognizer;
    double  _veryHighConfidenceLevel;
}

@property (nonatomic, retain) NSMutableArray *candidateAKTags;
@property (nonatomic, retain) NSMutableDictionary *candidateAKTagsToAnnotationInfoMap;
@property (nonatomic) AKAnnotation *candidateAnnotation;
@property (nonatomic, retain) CHDrawing *candidateDrawing;
@property (nonatomic, retain) AKCandidatePickerView_iOS *candidatePickerView;
@property (nonatomic) bool coalescesDoodles;
@property (nonatomic) AKController *controller;
@property (nonatomic) <AKShapeDetectionControllerDelegate> *delegate;
@property bool isPreviousCandidateAnnotationUndecided;
@property (nonatomic, readonly) bool isShowingCandidatePicker;
@property (nonatomic, retain) CHDrawing *lastDrawing;
@property (nonatomic, retain) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections;
@property (nonatomic) bool preferDoodle;
@property (getter=shapeDetectionEnabled, nonatomic) bool shapeDetectionEnabled;
@property (nonatomic, retain) CHRecognizer *shapeRecognizer;
@property double veryHighConfidenceLevel;

+ (bool)drawingIsValidForRecognition:(id)arg1 withPath:(struct CGPath { }*)arg2;
+ (void)logAllResults:(id)arg1;

- (void).cxx_destruct;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 shouldGoToPageController:(id*)arg3;
- (id)_createDoodleShapeResultWithPath:(struct CGPath { }*)arg1 withDrawingCenter:(struct CGPoint { double x1; double x2; })arg2 pathIsPrestroked:(bool)arg3;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_isResultVeryHighConfidence:(id)arg1;
- (long long)_matchingBlurEffectStyleForCurrentTintColor:(id)arg1;
- (void)_performRecognitionOnDrawing:(id)arg1 withInkDrawing:(id)arg2 orWithDoodlePath:(struct CGPath { }*)arg3 boundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 center:(struct CGPoint { double x1; double x2; })arg5 isPrestroked:(bool)arg6 optionalAnnotation:(id)arg7;
- (void)_pickCandidateResult:(id)arg1;
- (void)_pickCandidateResultWithAnnotationType:(long long)arg1;
- (void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2;
- (void)_shouldDismissNotification:(id)arg1;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(bool)arg3;
- (void)_teardownCandidatePicker;
- (void)_teardownCandidatePickerBar;
- (long long)_toolTagForCHRecognitionResult:(id)arg1;
- (id)candidateAKTags;
- (id)candidateAKTagsToAnnotationInfoMap;
- (id)candidateAnnotation;
- (id)candidateDrawing;
- (id)candidatePickerView;
- (void)clearPreviousCandidateAnnotation;
- (bool)coalescesDoodles;
- (id)controller;
- (id)convertDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outBoundsInPageModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)createInkResultFromInkDrawing:(id)arg1 annotation:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)dismissCandidatePicker;
- (id)initWithController:(id)arg1;
- (bool)isPreviousCandidateAnnotationUndecided;
- (bool)isShowingCandidatePicker;
- (id)lastDrawing;
- (void)logLastDrawingToDisk;
- (id)modelControllerToObserveForAnnotationsAndSelections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performRecognitionOnDrawing:(id)arg1 withDrawing:(id)arg2 annotation:(id)arg3 boundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 center:(struct CGPoint { double x1; double x2; })arg5;
- (void)performRecognitionOnDrawing:(id)arg1 withPath:(struct CGPath { }*)arg2 boundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 center:(struct CGPoint { double x1; double x2; })arg4 isPrestroked:(bool)arg5;
- (bool)preferDoodle;
- (void)reset;
- (void)setCandidateAKTags:(id)arg1;
- (void)setCandidateAKTagsToAnnotationInfoMap:(id)arg1;
- (void)setCandidateAnnotation:(id)arg1;
- (void)setCandidateDrawing:(id)arg1;
- (void)setCandidatePickerView:(id)arg1;
- (void)setCoalescesDoodles:(bool)arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPreviousCandidateAnnotationUndecided:(bool)arg1;
- (void)setLastDrawing:(id)arg1;
- (void)setModelControllerToObserveForAnnotationsAndSelections:(id)arg1;
- (void)setPreferDoodle:(bool)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (void)setShapeRecognizer:(id)arg1;
- (void)setVeryHighConfidenceLevel:(double)arg1;
- (bool)shapeDetectionEnabled;
- (id)shapeRecognizer;
- (double)veryHighConfidenceLevel;

@end
