/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingLayoutTransitionContext : NSObject {
    NSObject<OS_dispatch_group> * _displayedContentUpdateGroup;
    bool  _isCancelingTransition;
    bool  _isUpdatingDisplayedContent;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *displayedContentUpdateGroup;
@property (setter=setCancelingTransition:, nonatomic) bool isCancelingTransition;
@property (nonatomic) bool isUpdatingDisplayedContent;

- (void).cxx_destruct;
- (id)displayedContentUpdateGroup;
- (bool)isCancelingTransition;
- (bool)isUpdatingDisplayedContent;
- (void)setCancelingTransition:(bool)arg1;
- (void)setDisplayedContentUpdateGroup:(id)arg1;
- (void)setIsUpdatingDisplayedContent:(bool)arg1;

@end
