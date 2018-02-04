/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKUndoController : NSObject {
    AKController * _controller;
    NSMutableSet * _observedAnnotations;
    NSMutableSet * _observedPageModelControllers;
    bool  _undoGroupHasChangesToMultipleProperties;
    NSMapTable * _undoGroupOldPropertiesPerAnnotation;
    NSString * _undoGroupPresentablePropertyName;
    NSUndoManager * _undoManager;
}

@property AKController *controller;
@property (retain) NSMutableSet *observedAnnotations;
@property (retain) NSMutableSet *observedPageModelControllers;
@property bool undoGroupHasChangesToMultipleProperties;
@property (retain) NSMapTable *undoGroupOldPropertiesPerAnnotation;
@property (retain) NSString *undoGroupPresentablePropertyName;
@property (retain) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)_addAnnotationsFromModel:(id)arg1;
- (void)_annotationsWereAdded:(id)arg1 onPageController:(id)arg2;
- (void)_annotationsWillBeRemoved:(id)arg1 onPageController:(id)arg2;
- (void)_deleteAnnotationsFromModel:(id)arg1;
- (void)_endEditingOfTextIfAnnotationsDeleted:(id)arg1;
- (void)_registerUndoForSelectionOnPageModelController:(id)arg1;
- (void)_setAnnotationProperties:(id)arg1;
- (void)_startObservingAnnotations:(id)arg1;
- (void)_stopObservingAnnotations:(id)arg1;
- (void)_undoActionForSelectionState:(id)arg1;
- (id)controller;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)observePageControllerRequestsDisableRegistration:(id)arg1;
- (void)observePageControllerRequestsEnableRegistration:(id)arg1;
- (void)observeUndoManagerCheckpoint:(id)arg1;
- (void)observeUndoManagerDetectedEdit:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedAnnotations;
- (id)observedPageModelControllers;
- (void)setController:(id)arg1;
- (void)setObservedAnnotations:(id)arg1;
- (void)setObservedPageModelControllers:(id)arg1;
- (void)setUndoGroupHasChangesToMultipleProperties:(bool)arg1;
- (void)setUndoGroupOldPropertiesPerAnnotation:(id)arg1;
- (void)setUndoGroupPresentablePropertyName:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)startObservingPageModelController:(id)arg1;
- (void)stopObservingPageModelController:(id)arg1;
- (bool)undoGroupHasChangesToMultipleProperties;
- (id)undoGroupOldPropertiesPerAnnotation;
- (id)undoGroupPresentablePropertyName;
- (id)undoManager;

@end
