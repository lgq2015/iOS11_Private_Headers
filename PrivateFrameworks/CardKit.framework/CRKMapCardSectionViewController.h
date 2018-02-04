/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKMapCardSectionViewController : CRKInteractiveCardSectionViewController <SFFeedbackListener> {
    bool  _inTrackingRunLoopMode;
    struct __CFRunLoopObserver { } * _mainRunLoopObserverRef;
    UIView * _mapSectionView;
    bool  _needsToLoadCardSectionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKContainerCardSectionView *view;

+ (id)cardSectionClasses;

- (void).cxx_destruct;
- (id)_initWithCardSection:(id)arg1 dataSource:(id)arg2;
- (void)_loadCardSectionView;
- (void)_loadCardSectionViewIfNeeded;
- (void)_loadMapCardSectionView;
- (id)_mapCardSection;
- (bool)_shouldAttemptToSnapshotMapView;
- (void)_snapshotCardSectionView;
- (id)_unhandledParameters;
- (void)_updateContentSize;
- (id)_viewSnapshot;
- (void)dealloc;
- (void)didEngageCardSection:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end
