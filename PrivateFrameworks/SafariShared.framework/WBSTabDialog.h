/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTabDialog : NSObject {
    bool  _blocksWebProcessUntilDismissed;
    NSArray * _cancellationExemptions;
    id /* block */  _dismissalBlock;
    id /* block */  _presentationBlock;
}

@property (nonatomic) bool blocksWebProcessUntilDismissed;
@property (nonatomic, copy) NSArray *cancellationExemptions;

+ (id)tabDialogWithPresentationBlock:(id /* block */)arg1 dismissalBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_init;
- (bool)blocksWebProcessUntilDismissed;
- (id)cancellationExemptions;
- (id)createInfo;
- (id)init;
- (void)setBlocksWebProcessUntilDismissed:(bool)arg1;
- (void)setCancellationExemptions:(id)arg1;

@end
