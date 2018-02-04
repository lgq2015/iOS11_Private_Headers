/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapInPlaceUpdatePlan : NSObject <PXPlacesMapUpdatePlan> {
    NSMapTable * _currentLayoutItemToAnnotationTable;
    <PXPlacesMapLayoutResult> * _currentLayoutResult;
    NSObject<OS_dispatch_semaphore> * _sema;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (retain) NSMapTable *currentLayoutItemToAnnotationTable;
@property (retain) <PXPlacesMapLayoutResult> *currentLayoutResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changesBetweenSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;
- (id)annotationForLayoutItem:(id)arg1;
- (id)currentLayoutItemToAnnotationTable;
- (id)currentLayoutResult;
- (id)init;
- (id)pipelineComponentProvider;
- (id)removalPlanResult;
- (void)reset;
- (id)resultForNewLayoutResult:(id)arg1;
- (void)setCurrentLayoutItemToAnnotationTable:(id)arg1;
- (void)setCurrentLayoutResult:(id)arg1;
- (void)setPipelineComponentProvider:(id)arg1;

@end
