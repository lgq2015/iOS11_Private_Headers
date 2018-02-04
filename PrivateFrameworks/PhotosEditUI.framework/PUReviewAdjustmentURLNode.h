/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUReviewAdjustmentURLNode : PXRunNode <PUAdjustmentURLNode> {
    NSURL * _adjustmentURL;
    PHContentEditingOutput * _contentEditingOutput;
    NSURL * _directory;
    PUReviewAsset * _reviewAsset;
}

@property (nonatomic, readonly) NSURL *adjustmentURL;
@property (getter=isCanceled, readonly) bool canceled;
@property (getter=isComplete, readonly) bool complete;
@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (getter=isRunning, readonly) bool running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (getter=isWaiting, readonly) bool waiting;

- (void).cxx_destruct;
- (id)adjustmentURL;
- (id)contentEditingOutput;
- (id)directory;
- (id)initWithReviewAsset:(id)arg1 directory:(id)arg2 contentEditingOutput:(id)arg3;
- (id)reviewAsset;
- (void)run;

@end
