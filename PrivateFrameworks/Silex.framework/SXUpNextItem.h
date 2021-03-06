/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXUpNextItem : NSObject {
    bool  _shouldShowReplayButton;
    bool  _showLoadingIndicator;
    long long  _skipThreshold;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) bool shouldShowReplayButton;
@property (nonatomic) bool showLoadingIndicator;
@property (nonatomic) long long skipThreshold;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)setShouldShowReplayButton:(bool)arg1;
- (void)setShowLoadingIndicator:(bool)arg1;
- (void)setSkipThreshold:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldShowReplayButton;
- (bool)showLoadingIndicator;
- (long long)skipThreshold;
- (id)subtitle;
- (id)title;

@end
