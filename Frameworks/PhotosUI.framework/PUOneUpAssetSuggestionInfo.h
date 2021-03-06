/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpAssetSuggestionInfo : NSObject {
    PXContextualNotification * _contextualNotification;
    NSProgress * _progress;
    long long  _state;
    PUOneUpSuggestion * _suggestion;
}

@property (nonatomic, retain) PXContextualNotification *contextualNotification;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) long long state;
@property (nonatomic, retain) PUOneUpSuggestion *suggestion;

- (void).cxx_destruct;
- (id)contextualNotification;
- (id)progress;
- (void)setContextualNotification:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSuggestion:(id)arg1;
- (long long)state;
- (id)suggestion;

@end
