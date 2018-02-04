/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTableCellHighlightContext : NSObject {
    bool  _animateUnhighlight;
    UITableViewCell * _cell;
    long long  _originalSelectionStyle;
    NSTimer * _timer;
    bool  _valid;
}

@property (nonatomic, readonly) bool animateUnhighlight;
@property (nonatomic) UITableViewCell *cell;
@property (nonatomic) long long originalSelectionStyle;
@property (nonatomic, readonly) bool valid;

+ (id)contextWithCell:(id)arg1;

- (void).cxx_destruct;
- (void)_killTimer;
- (void)_timerFired;
- (bool)animateUnhighlight;
- (id)cell;
- (void)dealloc;
- (void)invalidate;
- (long long)originalSelectionStyle;
- (void)performHighlightForDuration:(double)arg1 animateUnhighlight:(bool)arg2;
- (void)setCell:(id)arg1;
- (void)setOriginalSelectionStyle:(long long)arg1;
- (bool)valid;

@end
