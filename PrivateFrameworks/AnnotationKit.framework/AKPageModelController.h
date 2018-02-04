/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPageModelController : NSObject {
    AKCropAnnotation * _cropAnnotation;
    AKInkAnnotation * _inkCanvasAnnotation;
    NSMutableOrderedSet * _mutableAnnotations;
    NSMutableSet * _mutableSelectedAnnotations;
    id  _representedObject;
    AKStatistics * _statisticsLogger;
}

@property (readonly) NSArray *annotations;
@property (retain) AKCropAnnotation *cropAnnotation;
@property (retain) AKInkAnnotation *inkCanvasAnnotation;
@property id representedObject;
@property (readonly) NSSet *selectedAnnotations;
@property (nonatomic) AKStatistics *statisticsLogger;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_coalescedEnsureInkAnnotationIsInFront:(id)arg1;
- (void)_enableEditObservationForAnnotationIfNew:(id)arg1;
- (void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
- (void)_logAnnotationAdded:(id)arg1;
- (void)_postSelectedAnnotationsChangedNotification;
- (void)addCropToolAnnotation;
- (void)addSelectedAnnotations:(id)arg1;
- (void)addSelectedAnnotationsObject:(id)arg1;
- (id)annotations;
- (id)archivableRepresentation;
- (void)bringSelectedAnnotationsForward;
- (void)bringSelectedAnnotationsToFront;
- (bool)containsAnnotation:(id)arg1;
- (id)cropAnnotation;
- (bool)hasMaskBorderAnnotation;
- (id)init;
- (id)initWithArchivableRepresentation:(id)arg1;
- (id)inkCanvasAnnotation;
- (void)insertAnnotations:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAnnotationsAtIndex:(unsigned long long)arg2;
- (void)intersectSelectedAnnotations:(id)arg1;
- (void)removeAllAnnotations;
- (void)removeAnnotationsAtIndexes:(id)arg1;
- (void)removeCropToolAnnotation;
- (void)removeObjectFromAnnotationsAtIndex:(unsigned long long)arg1;
- (void)removeSelectedAnnotations:(id)arg1;
- (void)removeSelectedAnnotationsObject:(id)arg1;
- (void)replaceAnnotationsAtIndexes:(id)arg1 withAnnotations:(id)arg2;
- (void)replaceObjectInAnnotationsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)representedObject;
- (void)restoreSelectionStateForUndo:(id)arg1;
- (void)selectAllAnnotations;
- (void)selectAnnotation:(id)arg1 byExtendingSelection:(bool)arg2;
- (void)selectAnnotationsAtIndexes:(id)arg1 byExtendingSelection:(bool)arg2;
- (id)selectedAnnotations;
- (id)selectionStateForUndo;
- (void)sendSelectedAnnotationsBackward;
- (void)sendSelectedAnnotationsToBack;
- (void)setCropAnnotation:(id)arg1;
- (void)setInkCanvasAnnotation:(id)arg1;
- (void)setInkCanvasAnnotationOneTime:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)setStatisticsLogger:(id)arg1;
- (id)statisticsLogger;

@end
