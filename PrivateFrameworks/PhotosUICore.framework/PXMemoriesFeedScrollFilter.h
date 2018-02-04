/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedScrollFilter : NSObject <PXScrollViewControllerObserver> {
    NSDate * __lastAdditionalContentRequestDate;
    double  _additionalContentThreshold;
    <PXMemoriesFeedScrollFilterDelegate> * _delegate;
    struct { 
        bool respondsToShouldRequestAdditionalContent; 
    }  _delegateFlags;
    PXScrollViewController * _scrollViewController;
    PXMemoriesSpec * _spec;
}

@property (setter=_setLastAdditionalContentRequestDate:, nonatomic, retain) NSDate *_lastAdditionalContentRequestDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXMemoriesFeedScrollFilterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, retain) PXMemoriesSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lastAdditionalContentRequestDate;
- (void)_setLastAdditionalContentRequestDate:(id)arg1;
- (id)delegate;
- (id)initWithScrollViewController:(id)arg1;
- (id)scrollViewController;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;

@end
